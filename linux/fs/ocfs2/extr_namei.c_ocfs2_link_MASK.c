
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {int sb; int uuid_str; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct ocfs2_dinode {int i_ctime_nsec; int i_ctime; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct inode {TYPE_2__ i_ctime; int i_nlink; int i_mode; int i_sb; } ;
struct TYPE_4__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct dentry* d_parent; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int sigset_t ;
typedef int handle_t ;
struct TYPE_6__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_4 ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 int VAR_5 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_2__ FUNC_9 (struct inode*) ;
 struct inode* FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct dentry*,struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;
 int FUNC_17 (int ,char*,int ) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int *,struct dentry*,struct inode*,scalar_t__,struct buffer_head*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_20 (struct ocfs2_dinode*,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct inode*,int ,int ) ;
 int FUNC_23 (struct ocfs2_super*,int *) ;
 int FUNC_24 (struct dentry*,struct inode*,scalar_t__) ;
 int FUNC_25 (struct ocfs2_super*,struct buffer_head**,struct inode*,struct buffer_head**,struct inode*,int ) ;
 int FUNC_26 (struct inode*,struct inode*) ;
 int FUNC_27 (struct ocfs2_dir_lookup_result*) ;
 int FUNC_28 (struct inode*,struct buffer_head**,int) ;
 int FUNC_29 (struct inode*,int) ;
 int FUNC_30 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_31 (int *,struct buffer_head*) ;
 int FUNC_32 (int ) ;
 scalar_t__ FUNC_33 (struct ocfs2_super*) ;
 int FUNC_34 (struct inode*,int ,int ,scalar_t__*) ;
 int FUNC_35 (struct ocfs2_super*,struct inode*,struct buffer_head*,int ,int ,struct ocfs2_dir_lookup_result*) ;
 scalar_t__ FUNC_36 (struct ocfs2_dinode*) ;
 int FUNC_37 (struct ocfs2_dinode*,int ) ;
 int * FUNC_38 (struct ocfs2_super*,int ) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (unsigned long long,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_41(struct dentry *VAR_6,
        struct inode *VAR_7,
        struct dentry *VAR_8)
{
 handle_t *VAR_9;
 struct inode *VAR_10 = FUNC_10(VAR_6);
 struct inode *VAR_11 = FUNC_10(VAR_6->d_parent);
 int VAR_12;
 struct buffer_head *VAR_13 = ((void*)0);
 struct buffer_head *VAR_14 = ((void*)0);
 struct buffer_head *VAR_15 = ((void*)0);
 struct ocfs2_dinode *VAR_16 = ((void*)0);
 struct ocfs2_super *VAR_17 = FUNC_3(VAR_7->i_sb);
 struct ocfs2_dir_lookup_result VAR_18 = { ((void*)0), };
 sigset_t VAR_19;
 u64 VAR_20;

 FUNC_40((unsigned long long)FUNC_2(VAR_10)->ip_blkno,
    VAR_6->d_name.len, VAR_6->d_name.name,
    VAR_8->d_name.len, VAR_8->d_name.name);

 if (FUNC_5(VAR_10->i_mode))
  return -VAR_3;

 VAR_12 = FUNC_12(VAR_7);
 if (VAR_12) {
  FUNC_18(VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_25(VAR_17, &VAR_14, VAR_11,
   &VAR_15, VAR_7, 0);
 if (VAR_12 < 0) {
  if (VAR_12 != -VAR_2)
   FUNC_18(VAR_12);
  return VAR_12;
 }



 if (!VAR_15) {
  if (VAR_14) {
   VAR_15 = VAR_14;
   FUNC_14(VAR_15);
  } else {
   FUNC_17(VAR_4, "%s: no old_dir_bh!\n", VAR_17->uuid_str);
   VAR_12 = -VAR_0;
   goto out;
  }
 }

 if (!VAR_7->i_nlink) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_12 = FUNC_34(VAR_11, VAR_6->d_name.name,
   VAR_6->d_name.len, &VAR_20);
 if (VAR_12) {
  VAR_12 = -VAR_2;
  goto out;
 }





 if (VAR_20 != FUNC_2(VAR_10)->ip_blkno) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_12 = FUNC_22(VAR_7, VAR_8->d_name.name,
     VAR_8->d_name.len);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_35(VAR_17, VAR_7, VAR_15,
        VAR_8->d_name.name,
        VAR_8->d_name.len, &VAR_18);
 if (VAR_12 < 0) {
  FUNC_18(VAR_12);
  goto out;
 }

 VAR_12 = FUNC_28(VAR_10, &VAR_13, 1);
 if (VAR_12 < 0) {
  if (VAR_12 != -VAR_2)
   FUNC_18(VAR_12);
  goto out;
 }

 VAR_16 = (struct ocfs2_dinode *) VAR_13->b_data;
 if (FUNC_36(VAR_16) >= FUNC_33(VAR_17)) {
  VAR_12 = -VAR_1;
  goto out_unlock_inode;
 }

 VAR_9 = FUNC_38(VAR_17, FUNC_32(VAR_17->sb));
 if (FUNC_1(VAR_9)) {
  VAR_12 = FUNC_4(VAR_9);
  VAR_9 = ((void*)0);
  FUNC_18(VAR_12);
  goto out_unlock_inode;
 }


 FUNC_21(&VAR_19);

 VAR_12 = FUNC_30(VAR_9, FUNC_0(VAR_10), VAR_13,
          VAR_5);
 if (VAR_12 < 0) {
  FUNC_18(VAR_12);
  goto out_commit;
 }

 FUNC_16(VAR_10);
 VAR_10->i_ctime = FUNC_9(VAR_10);
 FUNC_37(VAR_16, VAR_10->i_nlink);
 VAR_16->i_ctime = FUNC_8(VAR_10->i_ctime.tv_sec);
 VAR_16->i_ctime_nsec = FUNC_7(VAR_10->i_ctime.tv_nsec);
 FUNC_31(VAR_9, VAR_13);

 VAR_12 = FUNC_19(VAR_9, VAR_8, VAR_10,
         FUNC_2(VAR_10)->ip_blkno,
         VAR_15, &VAR_18);
 if (VAR_12) {
  FUNC_20(VAR_16, -1);
  FUNC_13(VAR_10);
  FUNC_18(VAR_12);
  goto out_commit;
 }

 VAR_12 = FUNC_24(VAR_8, VAR_10, FUNC_2(VAR_7)->ip_blkno);
 if (VAR_12) {
  FUNC_18(VAR_12);
  goto out_commit;
 }

 FUNC_15(VAR_10);
 FUNC_11(VAR_8, VAR_10);

out_commit:
 FUNC_23(VAR_17, VAR_9);
 FUNC_39(&VAR_19);
out_unlock_inode:
 FUNC_29(VAR_10, 1);

out:
 FUNC_26(VAR_11, VAR_7);

 FUNC_6(VAR_13);
 FUNC_6(VAR_15);
 FUNC_6(VAR_14);

 FUNC_27(&VAR_18);

 if (VAR_12)
  FUNC_18(VAR_12);

 return VAR_12;
}
