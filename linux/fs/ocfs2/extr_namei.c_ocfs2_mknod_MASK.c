
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int umode_t ;
struct ocfs2_super {int sb; } ;
struct ocfs2_security_xattr_info {int enable; int value; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_dentry_lock {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {scalar_t__ i_nlink; int i_sb; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {struct ocfs2_dentry_lock* d_fsdata; TYPE_1__ d_name; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sigset_t ;
typedef struct inode handle_t ;
typedef scalar_t__ dev_t ;
struct TYPE_4__ {int ip_flags; scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*,struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct inode*,struct dentry*,struct inode*,scalar_t__,struct buffer_head*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_18 (struct ocfs2_dinode*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct inode*,struct buffer_head*,int ,struct ocfs2_security_xattr_info*,int*,int*,int*) ;
 int FUNC_21 (struct inode*,int ,int ) ;
 int FUNC_22 (struct ocfs2_super*,struct dentry*,struct inode*) ;
 int FUNC_23 (struct ocfs2_super*,struct inode*) ;
 int FUNC_24 (struct dentry*,struct inode*,scalar_t__) ;
 int FUNC_25 (struct ocfs2_super*,struct inode*,struct inode*,struct inode*,struct buffer_head*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;
 int FUNC_26 (struct ocfs2_alloc_context*) ;
 int FUNC_27 (struct ocfs2_dir_lookup_result*) ;
 struct inode* FUNC_28 (struct inode*,int ) ;
 int FUNC_29 (struct inode*,struct inode*,struct inode*,struct buffer_head*,struct buffer_head*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;
 int FUNC_30 (struct inode*,struct inode*,TYPE_1__*,struct ocfs2_security_xattr_info*) ;
 int FUNC_31 (struct inode*,struct inode*,struct buffer_head*,struct ocfs2_security_xattr_info*,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*) ;
 int FUNC_32 (struct inode*,struct buffer_head**,int) ;
 int FUNC_33 (struct inode*,int) ;
 int FUNC_34 (struct inode*,int ,struct buffer_head*,int ) ;
 int FUNC_35 (struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_36 (struct ocfs2_super*) ;
 int FUNC_37 (int ,scalar_t__,int) ;
 int FUNC_38 (struct ocfs2_super*,struct inode*,struct inode*,scalar_t__,struct buffer_head**,struct buffer_head*,struct inode*,struct ocfs2_alloc_context*) ;
 int FUNC_39 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int ,struct ocfs2_dir_lookup_result*) ;
 int FUNC_40 (struct ocfs2_dinode*) ;
 int FUNC_41 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_42 (struct ocfs2_super*,struct ocfs2_alloc_context**) ;
 int FUNC_43 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 struct inode* FUNC_44 (struct ocfs2_super*,int ) ;
 scalar_t__ FUNC_45 (struct ocfs2_super*) ;
 int FUNC_46 (struct ocfs2_super*) ;
 int FUNC_47 (int *) ;
 int FUNC_48 (struct inode*,struct dentry*,int ,int ,unsigned long long,unsigned long,int ) ;

__attribute__((used)) static int FUNC_49(struct inode *VAR_6,
         struct dentry *VAR_7,
         umode_t VAR_8,
         dev_t VAR_9)
{
 int VAR_10 = 0;
 struct buffer_head *VAR_11 = ((void*)0);
 handle_t *VAR_12 = ((void*)0);
 struct ocfs2_super *VAR_13;
 struct ocfs2_dinode *VAR_14;
 struct buffer_head *VAR_15 = ((void*)0);
 struct inode *VAR_16 = ((void*)0);
 struct ocfs2_alloc_context *VAR_17 = ((void*)0);
 struct ocfs2_alloc_context *VAR_18 = ((void*)0);
 struct ocfs2_alloc_context *VAR_19 = ((void*)0);
 int VAR_20 = 0;
 int VAR_21 = 0;
 int VAR_22 = 0;
 struct ocfs2_security_xattr_info VAR_23 = {
  .enable = 1,
 };
 int VAR_24 = 0;
 struct ocfs2_dir_lookup_result VAR_25 = { ((void*)0), };
 sigset_t VAR_26;
 int VAR_27 = 0;
 struct ocfs2_dentry_lock *VAR_28 = ((void*)0);

 FUNC_48(VAR_6, VAR_7, VAR_7->d_name.len, VAR_7->d_name.name,
     (unsigned long long)FUNC_2(VAR_6)->ip_blkno,
     (unsigned long)VAR_9, VAR_8);

 VAR_10 = FUNC_11(VAR_6);
 if (VAR_10) {
  FUNC_16(VAR_10);
  return VAR_10;
 }


 VAR_13 = FUNC_3(VAR_6->i_sb);

 VAR_10 = FUNC_32(VAR_6, &VAR_11, 1);
 if (VAR_10 < 0) {
  if (VAR_10 != -VAR_1)
   FUNC_16(VAR_10);
  return VAR_10;
 }

 if (FUNC_5(VAR_8) && (VAR_6->i_nlink >= FUNC_36(VAR_13))) {
  VAR_10 = -VAR_0;
  goto leave;
 }

 VAR_14 = (struct ocfs2_dinode *) VAR_11->b_data;
 if (!FUNC_40(VAR_14)) {

  VAR_10 = -VAR_1;
  goto leave;
 }

 VAR_10 = FUNC_21(VAR_6, VAR_7->d_name.name,
        VAR_7->d_name.len);
 if (VAR_10)
  goto leave;


 VAR_10 = FUNC_39(VAR_13, VAR_6, VAR_11,
           VAR_7->d_name.name,
           VAR_7->d_name.len, &VAR_25);
 if (VAR_10 < 0) {
  FUNC_16(VAR_10);
  goto leave;
 }


 VAR_10 = FUNC_42(VAR_13, &VAR_17);
 if (VAR_10 < 0) {
  if (VAR_10 != -VAR_2)
   FUNC_16(VAR_10);
  goto leave;
 }

 VAR_16 = FUNC_28(VAR_6, VAR_8);
 if (FUNC_1(VAR_16)) {
  VAR_10 = FUNC_4(VAR_16);
  VAR_16 = ((void*)0);
  FUNC_16(VAR_10);
  goto leave;
 }


 VAR_10 = FUNC_30(VAR_16, VAR_6, &VAR_7->d_name, &VAR_23);
 if (VAR_10) {
  if (VAR_10 == -VAR_3)
   VAR_23.enable = 0;
  else {
   FUNC_16(VAR_10);
   goto leave;
  }
 }


 VAR_10 = FUNC_20(VAR_6, VAR_11, VAR_8,
           &VAR_23, &VAR_20,
           &VAR_22, &VAR_21);
 if (VAR_10 < 0) {
  FUNC_16(VAR_10);
  goto leave;
 }


 if (FUNC_5(VAR_8) && !FUNC_46(VAR_13)) {
  VAR_20 += 1;


  if (FUNC_45(VAR_13))
   VAR_21++;
 }

 VAR_10 = FUNC_43(VAR_13, VAR_21, &VAR_19);
 if (VAR_10 < 0) {
  if (VAR_10 != -VAR_2)
   FUNC_16(VAR_10);
  goto leave;
 }

 VAR_10 = FUNC_41(VAR_13, VAR_20, &VAR_18);
 if (VAR_10 < 0) {
  if (VAR_10 != -VAR_2)
   FUNC_16(VAR_10);
  goto leave;
 }

 VAR_12 = FUNC_44(VAR_13, FUNC_37(VAR_13->sb,
           FUNC_5(VAR_8),
           VAR_22));
 if (FUNC_1(VAR_12)) {
  VAR_10 = FUNC_4(VAR_12);
  VAR_12 = ((void*)0);
  FUNC_16(VAR_10);
  goto leave;
 }


 FUNC_19(&VAR_26);
 VAR_27 = 1;

 VAR_10 = FUNC_9(VAR_16);
 if (VAR_10)
  goto leave;
 VAR_24 = 1;


 VAR_10 = FUNC_38(VAR_13, VAR_6, VAR_16, VAR_9,
        &VAR_15, VAR_11, VAR_12,
        VAR_17);
 if (VAR_10 < 0) {
  FUNC_16(VAR_10);
  goto leave;
 }

 if (FUNC_5(VAR_8)) {
  VAR_10 = FUNC_25(VAR_13, VAR_12, VAR_6, VAR_16,
         VAR_15, VAR_18, VAR_19);
  if (VAR_10 < 0) {
   FUNC_16(VAR_10);
   goto leave;
  }

  VAR_10 = FUNC_34(VAR_12, FUNC_0(VAR_6),
       VAR_11,
       VAR_5);
  if (VAR_10 < 0) {
   FUNC_16(VAR_10);
   goto leave;
  }
  FUNC_18(VAR_14, 1);
  FUNC_35(VAR_12, VAR_11);
  FUNC_12(VAR_6);
 }

 VAR_10 = FUNC_29(VAR_12, VAR_16, VAR_6, VAR_15, VAR_11,
    VAR_19, VAR_18);

 if (VAR_10 < 0) {
  FUNC_16(VAR_10);
  goto leave;
 }

 if (VAR_23.enable) {
  VAR_10 = FUNC_31(VAR_12, VAR_16, VAR_15, &VAR_23,
       VAR_19, VAR_18);
  if (VAR_10 < 0) {
   FUNC_16(VAR_10);
   goto leave;
  }
 }






 VAR_10 = FUNC_24(VAR_7, VAR_16,
       FUNC_2(VAR_6)->ip_blkno);
 if (VAR_10) {
  FUNC_16(VAR_10);
  goto leave;
 }

 VAR_28 = VAR_7->d_fsdata;

 VAR_10 = FUNC_17(VAR_12, VAR_7, VAR_16,
     FUNC_2(VAR_16)->ip_blkno, VAR_11,
     &VAR_25);
 if (VAR_10 < 0) {
  FUNC_16(VAR_10);
  goto leave;
 }

 FUNC_13(VAR_16);
 FUNC_8(VAR_7, VAR_16);
 VAR_10 = 0;
leave:
 if (VAR_10 < 0 && VAR_24)
  FUNC_10(VAR_16);
 if (VAR_12)
  FUNC_23(VAR_13, VAR_12);

 FUNC_33(VAR_6, 1);
 if (VAR_27)
  FUNC_47(&VAR_26);

 FUNC_6(VAR_15);
 FUNC_6(VAR_11);
 FUNC_15(VAR_23.value);

 FUNC_27(&VAR_25);

 if (VAR_17)
  FUNC_26(VAR_17);

 if (VAR_18)
  FUNC_26(VAR_18);

 if (VAR_19)
  FUNC_26(VAR_19);






 if ((VAR_10 < 0) && VAR_16) {
  if (VAR_28)
   FUNC_22(VAR_13, VAR_7, VAR_16);

  FUNC_2(VAR_16)->ip_flags |= VAR_4;
  FUNC_7(VAR_16);
  FUNC_14(VAR_16);
 }

 if (VAR_10)
  FUNC_16(VAR_10);

 return VAR_10;
}
