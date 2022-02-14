
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int inum; } ;
struct inode {int i_nlink; int i_ino; TYPE_1__* i_sb; } ;
struct fscrypt_name {int disk_name; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct fscrypt_name*) ;
 struct inode* FUNC_5 (struct ubifs_info*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct ubifs_info*,struct inode*,struct inode*,struct fscrypt_name*) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (struct ubifs_info*,union ubifs_key*,struct ubifs_dent_node*,struct fscrypt_name*) ;
 int FUNC_16 (struct ubifs_info*,union ubifs_key*,int ,struct fscrypt_name*) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_7, const char *VAR_8)
{
 struct inode *VAR_9;
 struct ubifs_info *VAR_10 = VAR_7->i_sb->s_fs_info;
 struct fscrypt_name VAR_11 = { .disk_name = FUNC_0((char *)VAR_8, FUNC_13(VAR_8))};
 struct ubifs_dent_node *VAR_12;
 union ubifs_key VAR_13;
 int VAR_14;

 FUNC_14(VAR_10, FUNC_6(VAR_7));

 if (FUNC_4(&VAR_11) > VAR_5)
  return -VAR_0;

 VAR_12 = FUNC_9(VAR_6, VAR_4);
 if (!VAR_12)
  return -VAR_3;

 FUNC_16(VAR_10, &VAR_13, VAR_7->i_ino, &VAR_11);
 VAR_14 = FUNC_15(VAR_10, &VAR_13, VAR_12, &VAR_11);
 if (VAR_14) {
  if (VAR_14 == -VAR_2)
   VAR_14 = -VAR_1;
  goto out_free;
 }

 VAR_9 = FUNC_5(VAR_10, FUNC_10(VAR_12->inum));
 if (FUNC_1(VAR_9)) {
  VAR_14 = FUNC_2(VAR_9);
  goto out_free;
 }

 FUNC_14(VAR_10, VAR_9->i_nlink == 1);
 FUNC_3(VAR_9);
 VAR_14 = FUNC_11(VAR_10, VAR_7, VAR_9, &VAR_11);
 if (VAR_14)
  FUNC_12(VAR_9, 1);


 FUNC_7(VAR_9);

out_free:
 FUNC_8(VAR_12);
 return VAR_14;
}
