
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_info {int dummy; } ;
struct ubifs_dent_node {int inum; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct fscrypt_name {int disk_name; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ubifs_info*,struct inode*,struct inode*,void const*,size_t) ;
 int FUNC_4 (struct ubifs_info*,struct inode*,struct fscrypt_name*,void const*,size_t) ;
 scalar_t__ FUNC_5 (struct fscrypt_name*) ;
 struct inode* FUNC_6 (struct ubifs_info*,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (struct ubifs_info*,int ) ;
 int FUNC_14 (struct ubifs_info*,union ubifs_key*,struct ubifs_dent_node*,struct fscrypt_name*) ;
 int FUNC_15 (struct ubifs_info*,union ubifs_key*,int ,struct fscrypt_name*) ;

int FUNC_16(struct inode *VAR_12, const char *VAR_13, const void *VAR_14,
      size_t VAR_15, int VAR_16, bool VAR_17)
{
 struct inode *VAR_18;
 struct ubifs_info *VAR_19 = VAR_12->i_sb->s_fs_info;
 struct fscrypt_name VAR_20 = { .disk_name = FUNC_0((char *)VAR_13, FUNC_12(VAR_13))};
 struct ubifs_dent_node *VAR_21;
 union ubifs_key VAR_22;
 int VAR_23;

 if (VAR_17)
  FUNC_13(VAR_19, FUNC_7(VAR_12));

 if (VAR_15 > VAR_7)
  return -VAR_5;

 if (FUNC_5(&VAR_20) > VAR_8)
  return -VAR_1;

 VAR_21 = FUNC_10(VAR_9, VAR_6);
 if (!VAR_21)
  return -VAR_4;





 FUNC_15(VAR_19, &VAR_22, VAR_12->i_ino, &VAR_20);
 VAR_23 = FUNC_14(VAR_19, &VAR_22, VAR_21, &VAR_20);
 if (VAR_23) {
  if (VAR_23 != -VAR_3)
   goto out_free;

  if (VAR_16 & VAR_11)

   VAR_23 = -VAR_2;
  else
   VAR_23 = FUNC_4(VAR_19, VAR_12, &VAR_20, VAR_14, VAR_15);
  goto out_free;
 }

 if (VAR_16 & VAR_10) {

  VAR_23 = -VAR_0;
  goto out_free;
 }

 VAR_18 = FUNC_6(VAR_19, FUNC_11(VAR_21->inum));
 if (FUNC_1(VAR_18)) {
  VAR_23 = FUNC_2(VAR_18);
  goto out_free;
 }

 VAR_23 = FUNC_3(VAR_19, VAR_12, VAR_18, VAR_14, VAR_15);
 FUNC_8(VAR_18);

out_free:
 FUNC_9(VAR_21);
 return VAR_23;
}
