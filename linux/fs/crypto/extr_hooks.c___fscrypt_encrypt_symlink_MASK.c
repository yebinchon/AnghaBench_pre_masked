
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int i_link; } ;
struct fscrypt_symlink_data {char* encrypted_path; int len; } ;
struct fscrypt_str {unsigned char* name; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct qstr FUNC_0 (char const*,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct inode*,struct qstr*,char*,unsigned int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct fscrypt_symlink_data*) ;
 struct fscrypt_symlink_data* FUNC_5 (int,int ) ;
 int FUNC_6 (char const*,unsigned int,int ) ;

int FUNC_7(struct inode *VAR_2, const char *VAR_3,
         unsigned int VAR_4, struct fscrypt_str *VAR_5)
{
 int VAR_6;
 struct qstr VAR_7 = FUNC_0(VAR_3, VAR_4);
 struct fscrypt_symlink_data *VAR_8;
 unsigned int VAR_9;

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->name) {

  VAR_8 = (struct fscrypt_symlink_data *)VAR_5->name;
 } else {
  VAR_8 = FUNC_5(VAR_5->len, VAR_1);
  if (!VAR_8)
   return -VAR_0;
 }
 VAR_9 = VAR_5->len - sizeof(*VAR_8);
 VAR_8->len = FUNC_1(VAR_9);

 VAR_6 = FUNC_2(VAR_2, &VAR_7, VAR_8->encrypted_path, VAR_9);
 if (VAR_6)
  goto err_free_sd;






 VAR_8->encrypted_path[VAR_9] = '\0';


 VAR_6 = -VAR_0;
 VAR_2->i_link = FUNC_6(VAR_3, VAR_4 + 1, VAR_1);
 if (!VAR_2->i_link)
  goto err_free_sd;

 if (!VAR_5->name)
  VAR_5->name = (unsigned char *)VAR_8;
 return 0;

err_free_sd:
 if (!VAR_5->name)
  FUNC_4(VAR_8);
 return VAR_6;
}
