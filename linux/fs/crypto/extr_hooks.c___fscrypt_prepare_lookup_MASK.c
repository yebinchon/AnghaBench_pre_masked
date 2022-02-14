
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fscrypt_name {scalar_t__ is_ciphertext_name; } ;
struct dentry {int d_lock; int d_flags; int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*,int *) ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,int *,int,struct fscrypt_name*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct inode *VAR_3, struct dentry *VAR_4,
        struct fscrypt_name *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_3, &VAR_4->d_name, 1, VAR_5);

 if (VAR_6 && VAR_6 != -VAR_1)
  return VAR_6;

 if (VAR_5->is_ciphertext_name) {
  FUNC_2(&VAR_4->d_lock);
  VAR_4->d_flags |= VAR_0;
  FUNC_3(&VAR_4->d_lock);
  FUNC_0(VAR_4, &VAR_2);
 }
 return VAR_6;
}
