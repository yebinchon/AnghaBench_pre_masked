
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fscrypt_symlink_data {int dummy; } ;
struct fscrypt_str {int len; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,unsigned int,unsigned int,int*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;

int FUNC_3(struct inode *VAR_2, unsigned int VAR_3,
         unsigned int VAR_4,
         struct fscrypt_str *VAR_5)
{
 int VAR_6;
 VAR_6 = FUNC_1(VAR_2);
 if (VAR_6)
  return VAR_6;
 if (!FUNC_2(VAR_2))
  return -VAR_1;
 if (!FUNC_0(VAR_2, VAR_3,
       VAR_4 - sizeof(struct fscrypt_symlink_data),
       &VAR_5->len))
  return -VAR_0;
 VAR_5->len += sizeof(struct fscrypt_symlink_data);

 VAR_5->name = ((void*)0);
 return 0;
}
