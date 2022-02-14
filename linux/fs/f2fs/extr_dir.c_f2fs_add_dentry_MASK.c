
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct qstr {int len; int name; } ;
struct inode {int dummy; } ;
struct fscrypt_name {int usr_fname; } ;
typedef int nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,struct qstr*,int ,struct inode*,int ,int ) ;
 int FUNC_2 (struct inode*,struct qstr*,int ,struct inode*,int ,int ) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct fscrypt_name*) ;
 int FUNC_6 (struct fscrypt_name*) ;

int FUNC_7(struct inode *VAR_2, struct fscrypt_name *VAR_3,
    struct inode *VAR_4, nid_t VAR_5, umode_t VAR_6)
{
 struct qstr VAR_7;
 int VAR_8 = -VAR_0;

 VAR_7.name = FUNC_6(VAR_3);
 VAR_7.len = FUNC_5(VAR_3);

 if (FUNC_3(VAR_2))
  VAR_8 = FUNC_1(VAR_2, &VAR_7, VAR_3->usr_fname,
       VAR_4, VAR_5, VAR_6);
 if (VAR_8 == -VAR_0)
  VAR_8 = FUNC_2(VAR_2, &VAR_7, VAR_3->usr_fname,
       VAR_4, VAR_5, VAR_6);

 FUNC_4(FUNC_0(VAR_2), VAR_1);
 return VAR_8;
}
