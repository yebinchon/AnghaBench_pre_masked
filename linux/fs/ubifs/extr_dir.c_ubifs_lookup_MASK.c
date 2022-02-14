
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int inum; } ;
struct inode {int i_ino; int i_mode; TYPE_1__* i_sb; } ;
struct fscrypt_name {int minor_hash; scalar_t__ hash; } ;
struct dentry {int i_ino; int i_mode; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct inode* FUNC_5 (struct inode*,struct inode*) ;
 scalar_t__ FUNC_6 (struct ubifs_info*,struct ubifs_dent_node*,struct fscrypt_name*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (struct ubifs_info*,union ubifs_key*,int ,struct fscrypt_name*) ;
 int FUNC_9 (struct ubifs_info*,union ubifs_key*,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (struct fscrypt_name*) ;
 int * FUNC_11 (struct fscrypt_name*) ;
 int FUNC_12 (struct fscrypt_name*) ;
 int FUNC_13 (struct inode*,struct inode*) ;
 int FUNC_14 (struct inode*,struct inode*,struct fscrypt_name*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct ubifs_info*,int) ;
 scalar_t__ FUNC_20 (struct inode*) ;
 int FUNC_21 (struct ubifs_info*,char*,struct inode*,int) ;
 struct inode* FUNC_22 (TYPE_1__*,int ) ;
 int FUNC_23 (struct ubifs_info*,int) ;
 int FUNC_24 (struct ubifs_info*,union ubifs_key*,struct ubifs_dent_node*,int ) ;
 int FUNC_25 (struct ubifs_info*,union ubifs_key*,struct ubifs_dent_node*,struct fscrypt_name*) ;
 int FUNC_26 (struct ubifs_info*,char*,int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_27(struct inode *VAR_8, struct dentry *VAR_9,
       unsigned int VAR_10)
{
 int VAR_11;
 union ubifs_key VAR_12;
 struct inode *VAR_13 = ((void*)0);
 struct ubifs_dent_node *VAR_14 = ((void*)0);
 struct ubifs_info *VAR_15 = VAR_8->i_sb->s_fs_info;
 struct fscrypt_name VAR_16;

 FUNC_7("'%pd' in dir ino %lu", VAR_9, VAR_8->i_ino);

 VAR_11 = FUNC_14(VAR_8, VAR_9, &VAR_16);
 if (VAR_11 == -VAR_2)
  return FUNC_5(((void*)0), VAR_9);
 if (VAR_11)
  return FUNC_0(VAR_11);

 if (FUNC_10(&VAR_16) > VAR_7) {
  VAR_13 = FUNC_0(-VAR_1);
  goto done;
 }

 VAR_14 = FUNC_17(VAR_6, VAR_5);
 if (!VAR_14) {
  VAR_13 = FUNC_0(-VAR_3);
  goto done;
 }

 if (VAR_16.hash) {
  FUNC_19(VAR_15, FUNC_10(&VAR_16) == 0);
  FUNC_19(VAR_15, FUNC_11(&VAR_16) == ((void*)0));
  FUNC_9(VAR_15, &VAR_12, VAR_8->i_ino, VAR_16.hash);
  VAR_11 = FUNC_24(VAR_15, &VAR_12, VAR_14, VAR_16.minor_hash);
 } else {
  FUNC_8(VAR_15, &VAR_12, VAR_8->i_ino, &VAR_16);
  VAR_11 = FUNC_25(VAR_15, &VAR_12, VAR_14, &VAR_16);
 }

 if (VAR_11) {
  if (VAR_11 == -VAR_2)
   FUNC_7("not found");
  else
   VAR_13 = FUNC_0(VAR_11);
  goto done;
 }

 if (FUNC_6(VAR_15, VAR_14, &VAR_16)) {
  VAR_13 = FUNC_0(-VAR_0);
  goto done;
 }

 VAR_13 = FUNC_22(VAR_8->i_sb, FUNC_18(VAR_14->inum));
 if (FUNC_1(VAR_13)) {




  VAR_11 = FUNC_2(VAR_13);
  FUNC_21(VAR_15, "dead directory entry '%pd', error %d",
     VAR_9, VAR_11);
  FUNC_23(VAR_15, VAR_11);
  goto done;
 }

 if (FUNC_20(VAR_8) &&
     (FUNC_3(VAR_13->i_mode) || FUNC_4(VAR_13->i_mode)) &&
     !FUNC_13(VAR_8, VAR_13)) {
  FUNC_26(VAR_15, "Inconsistent encryption contexts: %lu/%lu",
      VAR_8->i_ino, VAR_13->i_ino);
  FUNC_15(VAR_13);
  VAR_13 = FUNC_0(-VAR_4);
 }

done:
 FUNC_16(VAR_14);
 FUNC_12(&VAR_16);
 return FUNC_5(VAR_13, VAR_9);
}
