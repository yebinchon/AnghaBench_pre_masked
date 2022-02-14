
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {int sb; struct inode* root_inode; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_nlink; int i_mode; int i_mtime; int i_ctime; int i_sb; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct dentry* d_parent; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ ip_blkno; int ip_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct dentry*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct ocfs2_super*,int *) ;
 int FUNC_17 (int *,struct inode*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (int ,int ,scalar_t__*,struct inode*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_20 (struct ocfs2_dir_lookup_result*) ;
 scalar_t__ FUNC_21 (struct inode*) ;
 int FUNC_22 (struct inode*,struct buffer_head**,int) ;
 int FUNC_23 (struct inode*,struct buffer_head**,int,int ) ;
 int FUNC_24 (struct inode*,int) ;
 int FUNC_25 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_26 (int *,struct buffer_head*) ;
 int FUNC_27 (int *,struct inode*,struct buffer_head*) ;
 int FUNC_28 (struct ocfs2_super*,int *,struct inode*,struct buffer_head*,char*,struct ocfs2_dir_lookup_result*,struct inode*,int) ;
 int FUNC_29 (struct ocfs2_super*,struct inode**,scalar_t__,char*,struct ocfs2_dir_lookup_result*,int) ;
 int FUNC_30 (struct dentry*) ;
 int FUNC_31 (struct ocfs2_dinode*,int) ;
 int * FUNC_32 (struct ocfs2_super*,int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (struct inode*,struct dentry*,int ,int ,unsigned long long,unsigned long long) ;
 int FUNC_35 (unsigned long long,unsigned long long,int ) ;

__attribute__((used)) static int FUNC_36(struct inode *VAR_6,
   struct dentry *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 bool VAR_10 = 0;
 struct inode *VAR_11 = FUNC_9(VAR_7);
 struct inode *VAR_12 = ((void*)0);
 struct ocfs2_super *VAR_13 = FUNC_4(VAR_6->i_sb);
 u64 VAR_14;
 struct ocfs2_dinode *VAR_15 = ((void*)0);
 struct buffer_head *VAR_16 = ((void*)0);
 struct buffer_head *VAR_17 = ((void*)0);
 handle_t *VAR_18 = ((void*)0);
 char VAR_19[VAR_4 + 1];
 struct ocfs2_dir_lookup_result VAR_20 = { ((void*)0), };
 struct ocfs2_dir_lookup_result VAR_21 = { ((void*)0), };

 FUNC_34(VAR_6, VAR_7, VAR_7->d_name.len,
      VAR_7->d_name.name,
      (unsigned long long)FUNC_3(VAR_6)->ip_blkno,
      (unsigned long long)FUNC_3(VAR_11)->ip_blkno);

 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8) {
  FUNC_15(VAR_8);
  return VAR_8;
 }

 FUNC_0(FUNC_9(VAR_7->d_parent) != VAR_6);

 if (VAR_11 == VAR_13->root_inode)
  return -VAR_2;

 VAR_8 = FUNC_23(VAR_6, &VAR_17, 1,
      VAR_5);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_0)
   FUNC_15(VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_19(VAR_7->d_name.name,
       VAR_7->d_name.len, &VAR_14, VAR_6,
       &VAR_20);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_0)
   FUNC_15(VAR_8);
  goto leave;
 }

 if (FUNC_3(VAR_11)->ip_blkno != VAR_14) {
  VAR_8 = -VAR_0;

  FUNC_35(
    (unsigned long long)FUNC_3(VAR_11)->ip_blkno,
    (unsigned long long)VAR_14,
    FUNC_3(VAR_11)->ip_flags);
  goto leave;
 }

 VAR_8 = FUNC_22(VAR_11, &VAR_16, 1);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_0)
   FUNC_15(VAR_8);
  goto leave;
 }
 VAR_9 = 1;

 if (FUNC_6(VAR_11->i_mode)) {
  if (VAR_11->i_nlink != 2 || !FUNC_18(VAR_11)) {
   VAR_8 = -VAR_1;
   goto leave;
  }
 }

 VAR_8 = FUNC_30(VAR_7);
 if (VAR_8 < 0) {


  FUNC_15(VAR_8);
  goto leave;
 }

 if (FUNC_21(VAR_11)) {
  VAR_8 = FUNC_29(VAR_13, &VAR_12,
        FUNC_3(VAR_11)->ip_blkno,
        VAR_19, &VAR_21,
        0);
  if (VAR_8 < 0) {
   FUNC_15(VAR_8);
   goto leave;
  }
  VAR_10 = 1;
 }

 VAR_18 = FUNC_32(VAR_13, FUNC_33(VAR_13->sb));
 if (FUNC_2(VAR_18)) {
  VAR_8 = FUNC_5(VAR_18);
  VAR_18 = ((void*)0);
  FUNC_15(VAR_8);
  goto leave;
 }

 VAR_8 = FUNC_25(VAR_18, FUNC_1(VAR_11), VAR_16,
      VAR_3);
 if (VAR_8 < 0) {
  FUNC_15(VAR_8);
  goto leave;
 }

 VAR_15 = (struct ocfs2_dinode *) VAR_16->b_data;


 VAR_8 = FUNC_17(VAR_18, VAR_6, &VAR_20);
 if (VAR_8 < 0) {
  FUNC_15(VAR_8);
  goto leave;
 }

 if (FUNC_6(VAR_11->i_mode))
  FUNC_11(VAR_11);
 FUNC_11(VAR_11);
 FUNC_31(VAR_15, VAR_11->i_nlink);
 FUNC_26(VAR_18, VAR_16);

 VAR_6->i_ctime = VAR_6->i_mtime = FUNC_8(VAR_6);
 if (FUNC_6(VAR_11->i_mode))
  FUNC_11(VAR_6);

 VAR_8 = FUNC_27(VAR_18, VAR_6, VAR_17);
 if (VAR_8 < 0) {
  FUNC_15(VAR_8);
  if (FUNC_6(VAR_11->i_mode))
   FUNC_12(VAR_6);
  goto leave;
 }

 if (VAR_10) {
  VAR_8 = FUNC_28(VAR_13, VAR_18, VAR_11, VAR_16,
    VAR_19, &VAR_21, VAR_12, 0);
  if (VAR_8 < 0)
   FUNC_15(VAR_8);
 }

leave:
 if (VAR_18)
  FUNC_16(VAR_13, VAR_18);

 if (VAR_12) {

  FUNC_24(VAR_12, 1);
  FUNC_13(VAR_12);
  FUNC_14(VAR_12);
 }

 if (VAR_9)
  FUNC_24(VAR_11, 1);

 FUNC_24(VAR_6, 1);

 FUNC_7(VAR_16);
 FUNC_7(VAR_17);

 FUNC_20(&VAR_21);
 FUNC_20(&VAR_20);

 if (VAR_8 && (VAR_8 != -VAR_1) && (VAR_8 != -VAR_0))
  FUNC_15(VAR_8);

 return VAR_8;
}
