
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_2__* i_mapping; int i_ino; int * i_op; TYPE_1__* i_sb; } ;
struct fscrypt_str {unsigned char* name; int len; } ;
struct f2fs_sb_info {int sb; } ;
struct dentry {int dummy; } ;
struct TYPE_4__ {int * a_ops; } ;
struct TYPE_3__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (struct f2fs_sb_info*,int ) ;
 int FUNC_9 (struct f2fs_sb_info*,int) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 int FUNC_13 (struct f2fs_sb_info*) ;
 struct inode* FUNC_14 (struct inode*,int) ;
 int VAR_6 ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct inode*,struct dentry*) ;
 int FUNC_17 (struct f2fs_sb_info*) ;
 int FUNC_18 (TYPE_2__*,int ,int) ;
 int FUNC_19 (struct inode*,char const*,size_t,struct fscrypt_str*) ;
 int FUNC_20 (struct inode*,char const*,size_t,int ,struct fscrypt_str*) ;
 int FUNC_21 (struct inode*) ;
 int FUNC_22 (unsigned char*) ;
 int FUNC_23 (struct inode*,unsigned char*,int) ;
 size_t FUNC_24 (char const*) ;
 scalar_t__ FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct inode *VAR_7, struct dentry *VAR_8,
     const char *VAR_9)
{
 struct f2fs_sb_info *VAR_10 = FUNC_0(VAR_7);
 struct inode *VAR_11;
 size_t VAR_12 = FUNC_24(VAR_9);
 struct fscrypt_str VAR_13;
 int VAR_14;

 if (FUNC_25(FUNC_10(VAR_10)))
  return -VAR_0;
 if (!FUNC_12(VAR_10))
  return -VAR_1;

 VAR_14 = FUNC_20(VAR_7, VAR_9, VAR_12, VAR_7->i_sb->s_blocksize,
          &VAR_13);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_6(VAR_7);
 if (VAR_14)
  return VAR_14;

 VAR_11 = FUNC_14(VAR_7, VAR_2 | VAR_3);
 if (FUNC_3(VAR_11))
  return FUNC_4(VAR_11);

 if (FUNC_2(VAR_11))
  VAR_11->i_op = &VAR_5;
 else
  VAR_11->i_op = &VAR_6;
 FUNC_21(VAR_11);
 VAR_11->i_mapping->a_ops = &VAR_4;

 FUNC_13(VAR_10);
 VAR_14 = FUNC_7(VAR_8, VAR_11);
 if (VAR_14)
  goto out_f2fs_handle_failed_inode;
 FUNC_17(VAR_10);
 FUNC_8(VAR_10, VAR_11->i_ino);

 VAR_14 = FUNC_19(VAR_11, VAR_9, VAR_12, &VAR_13);
 if (VAR_14)
  goto err_out;

 VAR_14 = FUNC_23(VAR_11, VAR_13.name, VAR_13.len);

err_out:
 FUNC_5(VAR_8, VAR_11);
 if (!VAR_14) {
  FUNC_18(VAR_11->i_mapping, 0,
       VAR_13.len - 1);

  if (FUNC_1(VAR_7))
   FUNC_15(VAR_10->sb, 1);
 } else {
  FUNC_16(VAR_7, VAR_8);
 }

 FUNC_9(VAR_10, 1);
 goto out_free_encrypted_link;

out_f2fs_handle_failed_inode:
 FUNC_11(VAR_11);
out_free_encrypted_link:
 if (VAR_13.name != (unsigned char *)VAR_9)
  FUNC_22(VAR_13.name);
 return VAR_14;
}
