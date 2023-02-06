#pragma once
class ChangeScene
{
private:
	// �R���X�g���N�^��private�ɂ���
	ChangeScene() {};
	// �f�X�g���N�^��private�ɂ���
	~ChangeScene() {};

	int SceneNo = 1;

public:
	// �R�s�[�R���X�g���N�^�𖳌��ɂ���
	ChangeScene(const ChangeScene& obj) = delete;
	// ������Z�q�𖳌��ɂ���
	ChangeScene& operator=(const ChangeScene& obj) = delete;

	static ChangeScene* GetInstance();

	void Change(char* key, char* oldkey);
};

