
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int i_mode; int i_ino; } ;
struct f2fs_dentry_ptr {int dummy; } ;


 struct qstr FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ,struct f2fs_dentry_ptr*,struct qstr*,int ,int) ;

void FUNC_2(struct inode *VAR_0, struct inode *VAR_1,
     struct f2fs_dentry_ptr *VAR_2)
{
 struct qstr VAR_3 = FUNC_0(".", 1);
 struct qstr VAR_4 = FUNC_0("..", 2);


 FUNC_1(VAR_0->i_ino, VAR_0->i_mode, VAR_2, &VAR_3, 0, 0);


 FUNC_1(VAR_1->i_ino, VAR_1->i_mode, VAR_2, &VAR_4, 0, 1);
}
