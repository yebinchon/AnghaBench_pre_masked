
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union fscrypt_policy {int dummy; } fscrypt_policy ;
struct inode {int i_mode; int i_ino; } ;
struct fscrypt_mode {int dummy; } ;


 int VAR_0 ;
 struct fscrypt_mode* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,char*,int ,int) ;
 struct fscrypt_mode* VAR_2 ;
 size_t FUNC_5 (union fscrypt_policy const*) ;
 size_t FUNC_6 (union fscrypt_policy const*) ;

__attribute__((used)) static struct fscrypt_mode *
FUNC_7(const union fscrypt_policy *VAR_3,
         const struct inode *VAR_4)
{
 if (FUNC_3(VAR_4->i_mode))
  return &VAR_2[FUNC_5(VAR_3)];

 if (FUNC_1(VAR_4->i_mode) || FUNC_2(VAR_4->i_mode))
  return &VAR_2[FUNC_6(VAR_3)];

 FUNC_4(1, "fscrypt: filesystem tried to load encryption info for inode %lu, which is not encryptable (file type %d)\n",
    VAR_4->i_ino, (VAR_4->i_mode & VAR_1));
 return FUNC_0(-VAR_0);
}
