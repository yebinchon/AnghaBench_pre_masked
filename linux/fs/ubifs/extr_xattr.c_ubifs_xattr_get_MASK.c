
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_inode {size_t data_len; size_t xattr_size; int ui_mutex; int data; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int inum; } ;
struct inode {size_t i_size; int i_ino; TYPE_1__* i_sb; } ;
struct fscrypt_name {int disk_name; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (struct fscrypt_name*) ;
 struct inode* FUNC_4 (struct ubifs_info*,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*,int ,size_t) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (struct ubifs_info*,int) ;
 struct ubifs_inode* FUNC_14 (struct inode*) ;
 int FUNC_15 (struct ubifs_info*,union ubifs_key*,struct ubifs_dent_node*,struct fscrypt_name*) ;
 int FUNC_16 (struct ubifs_info*,union ubifs_key*,int ,struct fscrypt_name*) ;

ssize_t FUNC_17(struct inode *VAR_8, const char *VAR_9, void *VAR_10,
   size_t VAR_11)
{
 struct inode *VAR_12;
 struct ubifs_info *VAR_13 = VAR_8->i_sb->s_fs_info;
 struct fscrypt_name VAR_14 = { .disk_name = FUNC_0((char *)VAR_9, FUNC_12(VAR_9))};
 struct ubifs_inode *VAR_15;
 struct ubifs_dent_node *VAR_16;
 union ubifs_key VAR_17;
 int VAR_18;

 if (FUNC_3(&VAR_14) > VAR_6)
  return -VAR_0;

 VAR_16 = FUNC_7(VAR_7, VAR_5);
 if (!VAR_16)
  return -VAR_3;

 FUNC_16(VAR_13, &VAR_17, VAR_8->i_ino, &VAR_14);
 VAR_18 = FUNC_15(VAR_13, &VAR_17, VAR_16, &VAR_14);
 if (VAR_18) {
  if (VAR_18 == -VAR_2)
   VAR_18 = -VAR_1;
  goto out_unlock;
 }

 VAR_12 = FUNC_4(VAR_13, FUNC_8(VAR_16->inum));
 if (FUNC_1(VAR_12)) {
  VAR_18 = FUNC_2(VAR_12);
  goto out_unlock;
 }

 VAR_15 = FUNC_14(VAR_12);
 FUNC_13(VAR_13, VAR_12->i_size == VAR_15->data_len);
 FUNC_13(VAR_13, FUNC_14(VAR_8)->xattr_size > VAR_15->data_len);

 FUNC_10(&VAR_15->ui_mutex);
 if (VAR_10) {

  if (VAR_15->data_len > VAR_11) {
   VAR_18 = -VAR_4;
   goto out_iput;
  }

  FUNC_9(VAR_10, VAR_15->data, VAR_15->data_len);
 }
 VAR_18 = VAR_15->data_len;

out_iput:
 FUNC_11(&VAR_15->ui_mutex);
 FUNC_5(VAR_12);
out_unlock:
 FUNC_6(VAR_16);
 return VAR_18;
}
