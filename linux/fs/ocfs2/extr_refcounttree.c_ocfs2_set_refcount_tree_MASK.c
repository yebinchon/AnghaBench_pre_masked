
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_tree {int rf_ci; } ;
struct ocfs2_refcount_block {int rf_count; } ;
struct ocfs2_inode_info {int ip_lock; int ip_dyn_features; } ;
struct ocfs2_dinode {int i_refcount_loc; int i_dyn_features; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_3 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct ocfs2_super*,int *) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_14 (int *,int *,struct buffer_head*,int ) ;
 int FUNC_15 (int *,struct buffer_head*) ;
 int FUNC_16 (struct ocfs2_super*,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;
 int * FUNC_17 (struct ocfs2_super*,int ) ;
 int FUNC_18 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_3,
       struct buffer_head *VAR_4,
       u64 VAR_5)
{
 int VAR_6;
 handle_t *VAR_7 = ((void*)0);
 struct ocfs2_dinode *VAR_8 = (struct ocfs2_dinode *)VAR_4->b_data;
 struct ocfs2_inode_info *VAR_9 = FUNC_3(VAR_3);
 struct ocfs2_super *VAR_10 = FUNC_4(VAR_3->i_sb);
 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_refcount_block *VAR_12;
 struct ocfs2_refcount_tree *VAR_13;

 FUNC_0(FUNC_12(VAR_3));

 VAR_6 = FUNC_16(VAR_10, VAR_5, 1,
           &VAR_13, &VAR_11);
 if (VAR_6) {
  FUNC_10(VAR_6);
  return VAR_6;
 }

 VAR_7 = FUNC_17(VAR_10, VAR_2);
 if (FUNC_2(VAR_7)) {
  VAR_6 = FUNC_5(VAR_7);
  FUNC_10(VAR_6);
  goto out;
 }

 VAR_6 = FUNC_13(VAR_7, FUNC_1(VAR_3), VAR_4,
          VAR_1);
 if (VAR_6) {
  FUNC_10(VAR_6);
  goto out_commit;
 }

 VAR_6 = FUNC_14(VAR_7, &VAR_13->rf_ci, VAR_11,
          VAR_1);
 if (VAR_6) {
  FUNC_10(VAR_6);
  goto out_commit;
 }

 VAR_12 = (struct ocfs2_refcount_block *)VAR_11->b_data;
 FUNC_9(&VAR_12->rf_count, 1);

 FUNC_15(VAR_7, VAR_11);

 FUNC_19(&VAR_9->ip_lock);
 VAR_9->ip_dyn_features |= VAR_0;
 VAR_8->i_dyn_features = FUNC_7(VAR_9->ip_dyn_features);
 VAR_8->i_refcount_loc = FUNC_8(VAR_5);
 FUNC_20(&VAR_9->ip_lock);
 FUNC_15(VAR_7, VAR_4);

out_commit:
 FUNC_11(VAR_10, VAR_7);
out:
 FUNC_18(VAR_10, VAR_13, 1);
 FUNC_6(VAR_11);

 return VAR_6;
}
