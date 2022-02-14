
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_caching_info {int dummy; } ;
struct ocfs2_refcount_tree {struct ocfs2_caching_info rf_ci; } ;
struct ocfs2_inode_info {int ip_dyn_features; int ip_lock; } ;
struct ocfs2_dinode {int i_dyn_features; scalar_t__ i_xattr_loc; scalar_t__ i_refcount_loc; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 struct ocfs2_inode_info* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int FUNC_11 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 int FUNC_13 (int ,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;
 int * FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,struct ocfs2_refcount_tree*,int) ;
 int FUNC_17 (int *,struct inode*,int ) ;
 int FUNC_18 (struct inode*,int ,struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_19 (struct inode*,struct buffer_head*,struct ocfs2_caching_info*,struct buffer_head*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct inode *VAR_4, struct buffer_head *VAR_5)
{
 struct ocfs2_inode_info *VAR_6 = FUNC_2(VAR_4);
 struct ocfs2_dinode *VAR_7 = (struct ocfs2_dinode *)VAR_5->b_data;
 struct ocfs2_refcount_tree *VAR_8 = ((void*)0);
 struct buffer_head *VAR_9 = ((void*)0);
 struct ocfs2_caching_info *VAR_10 = ((void*)0);
 handle_t *VAR_11;
 int VAR_12;

 if (!FUNC_15(FUNC_3(VAR_4->i_sb)))
  return 0;

 if (!(VAR_6->ip_dyn_features & VAR_0))
  return 0;

 if (FUNC_10(VAR_4)) {
  VAR_12 = FUNC_13(FUNC_3(VAR_4->i_sb),
            FUNC_7(VAR_7->i_refcount_loc),
            1, &VAR_8, &VAR_9);
  if (VAR_12) {
   FUNC_8(VAR_12);
   goto out;
  }
  VAR_10 = &VAR_8->rf_ci;

 }

 if (VAR_6->ip_dyn_features & VAR_1) {
  VAR_12 = FUNC_19(VAR_4, VAR_5,
            VAR_10, VAR_9);
  if (VAR_12 < 0) {
   FUNC_8(VAR_12);
   goto out;
  }
 }

 if (VAR_7->i_xattr_loc) {
  VAR_12 = FUNC_18(VAR_4,
          FUNC_7(VAR_7->i_xattr_loc),
          VAR_10, VAR_9);
  if (VAR_12 < 0) {
   FUNC_8(VAR_12);
   goto out;
  }
 }

 VAR_11 = FUNC_14((FUNC_3(VAR_4->i_sb)),
       VAR_2);
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_4(VAR_11);
  FUNC_8(VAR_12);
  goto out;
 }
 VAR_12 = FUNC_11(VAR_11, FUNC_0(VAR_4), VAR_5,
          VAR_3);
 if (VAR_12) {
  FUNC_8(VAR_12);
  goto out_commit;
 }

 VAR_7->i_xattr_loc = 0;

 FUNC_20(&VAR_6->ip_lock);
 VAR_6->ip_dyn_features &= ~(VAR_1 | VAR_0);
 VAR_7->i_dyn_features = FUNC_6(VAR_6->ip_dyn_features);
 FUNC_21(&VAR_6->ip_lock);
 FUNC_17(VAR_11, VAR_4, 0);

 FUNC_12(VAR_11, VAR_5);
out_commit:
 FUNC_9(FUNC_3(VAR_4->i_sb), VAR_11);
out:
 if (VAR_8)
  FUNC_16(FUNC_3(VAR_4->i_sb), VAR_8, 1);
 FUNC_5(VAR_9);
 return VAR_12;
}
