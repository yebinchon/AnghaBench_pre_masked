
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_super {int sb; } ;
struct ocfs2_security_xattr_info {int enable; int value; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct TYPE_6__ {scalar_t__ i_symlink; } ;
struct ocfs2_dinode {int i_blkno; TYPE_2__ id2; } ;
struct ocfs2_dentry_lock {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {scalar_t__ i_blocks; TYPE_1__* i_mapping; int * i_op; scalar_t__ i_rdev; int i_mode; struct super_block* i_sb; } ;
struct TYPE_7__ {int name; int len; } ;
struct dentry {struct ocfs2_dentry_lock* d_fsdata; TYPE_3__ d_name; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sigset_t ;
typedef struct inode handle_t ;
struct TYPE_8__ {int ip_flags; scalar_t__ ip_blkno; } ;
struct TYPE_5__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int VAR_5 ;
 struct ocfs2_super* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*,struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (char*,char const*,int) ;
 int FUNC_19 (int ,char*,unsigned long long) ;
 int FUNC_20 (int) ;
 int FUNC_21 (struct inode*,struct dentry*,struct inode*,int ,struct buffer_head*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_22 (struct ocfs2_super*,struct inode*,int *,int,int ,struct buffer_head*,struct inode*,struct ocfs2_alloc_context*,int *,int *) ;
 int VAR_8 ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct inode*,struct ocfs2_security_xattr_info*,int*,int*,struct ocfs2_alloc_context**) ;
 int FUNC_25 (struct super_block*) ;
 int FUNC_26 (struct inode*,int ,int ) ;
 int FUNC_27 (struct ocfs2_super*,struct dentry*,struct inode*) ;
 int FUNC_28 (int ,int) ;
 int FUNC_29 (struct ocfs2_super*,struct inode*) ;
 int FUNC_30 (struct ocfs2_super*,struct inode*,struct inode*,char const*) ;
 int FUNC_31 (struct dentry*,struct inode*,scalar_t__) ;
 int VAR_9 ;
 int FUNC_32 (struct super_block*) ;
 int FUNC_33 (struct ocfs2_alloc_context*) ;
 int FUNC_34 (struct ocfs2_dir_lookup_result*) ;
 struct inode* FUNC_35 (struct inode*,int) ;
 int FUNC_36 (struct inode*,struct inode*,TYPE_3__*,struct ocfs2_security_xattr_info*) ;
 int FUNC_37 (struct inode*,struct inode*,struct buffer_head*,struct ocfs2_security_xattr_info*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;
 int FUNC_38 (struct inode*) ;
 int FUNC_39 (struct inode*,struct buffer_head**,int) ;
 scalar_t__ FUNC_40 (struct inode*) ;
 int FUNC_41 (struct inode*,int) ;
 int FUNC_42 (struct inode*,struct inode*,struct buffer_head*) ;
 int FUNC_43 (struct ocfs2_super*,struct inode*,struct inode*,int ,struct buffer_head**,struct buffer_head*,struct inode*,struct ocfs2_alloc_context*) ;
 int FUNC_44 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int ,struct ocfs2_dir_lookup_result*) ;
 int FUNC_45 (struct ocfs2_dinode*) ;
 int FUNC_46 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_47 (struct ocfs2_super*,struct ocfs2_alloc_context**) ;
 struct inode* FUNC_48 (struct ocfs2_super*,int) ;
 int VAR_10 ;
 int FUNC_49 (int *) ;
 int FUNC_50 (char const*) ;
 int FUNC_51 (struct inode*,struct dentry*,char const*,int ,int ) ;
 int FUNC_52 (struct inode*,struct dentry*,int ,int ,unsigned long long,int ) ;

__attribute__((used)) static int FUNC_53(struct inode *VAR_11,
    struct dentry *VAR_12,
    const char *VAR_13)
{
 int VAR_14, VAR_15, VAR_16;
 u64 VAR_17;
 struct ocfs2_super *VAR_18 = ((void*)0);
 struct inode *VAR_19 = ((void*)0);
 struct super_block *VAR_20;
 struct buffer_head *VAR_21 = ((void*)0);
 struct buffer_head *VAR_22 = ((void*)0);
 struct ocfs2_dinode *VAR_23 = ((void*)0);
 struct ocfs2_dinode *VAR_24;
 handle_t *VAR_25 = ((void*)0);
 struct ocfs2_alloc_context *VAR_26 = ((void*)0);
 struct ocfs2_alloc_context *VAR_27 = ((void*)0);
 struct ocfs2_alloc_context *VAR_28 = ((void*)0);
 int VAR_29 = 0;
 int VAR_30 = 0;
 struct ocfs2_security_xattr_info VAR_31 = {
  .enable = 1,
 };
 int VAR_32 = 0, VAR_33 = 0;
 struct ocfs2_dir_lookup_result VAR_34 = { ((void*)0), };
 sigset_t VAR_35;
 int VAR_36 = 0;
 struct ocfs2_dentry_lock *VAR_37 = ((void*)0);

 FUNC_51(VAR_11, VAR_12, VAR_13,
      VAR_12->d_name.len, VAR_12->d_name.name);

 VAR_14 = FUNC_11(VAR_11);
 if (VAR_14) {
  FUNC_20(VAR_14);
  goto bail;
 }

 VAR_20 = VAR_11->i_sb;
 VAR_18 = FUNC_2(VAR_20);

 VAR_15 = FUNC_50(VAR_13) + 1;

 VAR_16 = FUNC_25(VAR_20);


 VAR_14 = FUNC_39(VAR_11, &VAR_22, 1);
 if (VAR_14 < 0) {
  if (VAR_14 != -VAR_1)
   FUNC_20(VAR_14);
  return VAR_14;
 }

 VAR_24 = (struct ocfs2_dinode *) VAR_22->b_data;
 if (!FUNC_45(VAR_24)) {

  VAR_14 = -VAR_1;
  goto bail;
 }

 VAR_14 = FUNC_26(VAR_11, VAR_12->d_name.name,
        VAR_12->d_name.len);
 if (VAR_14)
  goto bail;

 VAR_14 = FUNC_44(VAR_18, VAR_11, VAR_22,
           VAR_12->d_name.name,
           VAR_12->d_name.len, &VAR_34);
 if (VAR_14 < 0) {
  FUNC_20(VAR_14);
  goto bail;
 }

 VAR_14 = FUNC_47(VAR_18, &VAR_26);
 if (VAR_14 < 0) {
  if (VAR_14 != -VAR_2)
   FUNC_20(VAR_14);
  goto bail;
 }

 VAR_19 = FUNC_35(VAR_11, VAR_6 | VAR_7);
 if (FUNC_0(VAR_19)) {
  VAR_14 = FUNC_3(VAR_19);
  VAR_19 = ((void*)0);
  FUNC_20(VAR_14);
  goto bail;
 }


 VAR_14 = FUNC_36(VAR_19, VAR_11, &VAR_12->d_name, &VAR_31);
 if (VAR_14) {
  if (VAR_14 == -VAR_3)
   VAR_31.enable = 0;
  else {
   FUNC_20(VAR_14);
   goto bail;
  }
 }


 if (VAR_31.enable) {
  VAR_14 = FUNC_24(VAR_11, &VAR_31, &VAR_29,
        &VAR_30, &VAR_28);
  if (VAR_14 < 0) {
   FUNC_20(VAR_14);
   goto bail;
  }
 }


 if (VAR_15 > FUNC_32(VAR_20))
  VAR_29 += 1;

 VAR_14 = FUNC_46(VAR_18, VAR_29, &VAR_27);
 if (VAR_14 < 0) {
  if (VAR_14 != -VAR_2)
   FUNC_20(VAR_14);
  goto bail;
 }

 VAR_25 = FUNC_48(VAR_18, VAR_16 + VAR_30);
 if (FUNC_0(VAR_25)) {
  VAR_14 = FUNC_3(VAR_25);
  VAR_25 = ((void*)0);
  FUNC_20(VAR_14);
  goto bail;
 }


 FUNC_23(&VAR_35);
 VAR_36 = 1;

 VAR_14 = FUNC_7(VAR_19);
 if (VAR_14)
  goto bail;
 VAR_33 = 1;

 FUNC_52(VAR_11, VAR_12, VAR_12->d_name.len,
       VAR_12->d_name.name,
       (unsigned long long)FUNC_1(VAR_11)->ip_blkno,
       VAR_19->i_mode);

 VAR_14 = FUNC_43(VAR_18, VAR_11, VAR_19,
        0, &VAR_21, VAR_22, VAR_25,
        VAR_26);
 if (VAR_14 < 0) {
  FUNC_20(VAR_14);
  goto bail;
 }

 VAR_23 = (struct ocfs2_dinode *) VAR_21->b_data;
 VAR_19->i_rdev = 0;
 VAR_17 = VAR_15 - 1;
 VAR_19->i_op = &VAR_10;
 FUNC_13(VAR_19);
 if (VAR_15 > FUNC_32(VAR_20)) {
  u32 VAR_38 = 0;

  VAR_14 = FUNC_8(VAR_19,
      FUNC_28(VAR_18->sb, 1));
  if (VAR_14)
   goto bail;
  VAR_32 = 1;
  VAR_19->i_mapping->a_ops = &VAR_8;
  VAR_14 = FUNC_22(VAR_18, VAR_19, &VAR_38, 1, 0,
           VAR_21,
           VAR_25, VAR_27, ((void*)0),
           ((void*)0));
  if (VAR_14 < 0) {
   if (VAR_14 != -VAR_2 && VAR_14 != -VAR_0) {
    FUNC_19(VAR_4,
         "Failed to extend file to %llu\n",
         (unsigned long long)VAR_17);
    FUNC_20(VAR_14);
    VAR_14 = -VAR_2;
   }
   goto bail;
  }
  FUNC_12(VAR_19, VAR_17);
  VAR_19->i_blocks = FUNC_40(VAR_19);
 } else {
  VAR_19->i_mapping->a_ops = &VAR_9;
  FUNC_18((char *) VAR_23->id2.i_symlink, VAR_13, VAR_15);
  FUNC_12(VAR_19, VAR_17);
  VAR_19->i_blocks = 0;
 }

 VAR_14 = FUNC_42(VAR_25, VAR_19, VAR_21);
 if (VAR_14 < 0) {
  FUNC_20(VAR_14);
  goto bail;
 }

 if (!FUNC_38(VAR_19)) {
  VAR_14 = FUNC_30(VAR_18, VAR_25, VAR_19,
         VAR_13);
  if (VAR_14 < 0) {
   FUNC_20(VAR_14);
   goto bail;
  }
 }

 if (VAR_31.enable) {
  VAR_14 = FUNC_37(VAR_25, VAR_19, VAR_21, &VAR_31,
       VAR_28, VAR_27);
  if (VAR_14 < 0) {
   FUNC_20(VAR_14);
   goto bail;
  }
 }






 VAR_14 = FUNC_31(VAR_12, VAR_19, FUNC_1(VAR_11)->ip_blkno);
 if (VAR_14) {
  FUNC_20(VAR_14);
  goto bail;
 }

 VAR_37 = VAR_12->d_fsdata;

 VAR_14 = FUNC_21(VAR_25, VAR_12, VAR_19,
     FUNC_17(VAR_23->i_blkno), VAR_22,
     &VAR_34);
 if (VAR_14 < 0) {
  FUNC_20(VAR_14);
  goto bail;
 }

 FUNC_14(VAR_19);
 FUNC_6(VAR_12, VAR_19);
bail:
 if (VAR_14 < 0 && VAR_32)
  FUNC_10(VAR_19,
     FUNC_28(VAR_18->sb, 1));
 if (VAR_14 < 0 && VAR_33)
  FUNC_9(VAR_19);
 if (VAR_25)
  FUNC_29(VAR_18, VAR_25);

 FUNC_41(VAR_11, 1);
 if (VAR_36)
  FUNC_49(&VAR_35);

 FUNC_4(VAR_21);
 FUNC_4(VAR_22);
 FUNC_16(VAR_31.value);
 FUNC_34(&VAR_34);
 if (VAR_26)
  FUNC_33(VAR_26);
 if (VAR_27)
  FUNC_33(VAR_27);
 if (VAR_28)
  FUNC_33(VAR_28);
 if ((VAR_14 < 0) && VAR_19) {
  if (VAR_37)
   FUNC_27(VAR_18, VAR_12, VAR_19);

  FUNC_1(VAR_19)->ip_flags |= VAR_5;
  FUNC_5(VAR_19);
  FUNC_15(VAR_19);
 }

 if (VAR_14)
  FUNC_20(VAR_14);

 return VAR_14;
}
