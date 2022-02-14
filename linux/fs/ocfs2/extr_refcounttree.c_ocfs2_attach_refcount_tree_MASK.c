
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_tree {int rf_ci; } ;
struct ocfs2_inode_info {int ip_dyn_features; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_dinode {int i_refcount_loc; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_inode_info* FUNC_2 (struct inode*) ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct inode*,struct ocfs2_extent_tree*,int *,struct buffer_head*,scalar_t__,scalar_t__,scalar_t__,struct ocfs2_cached_dealloc_ctxt*,int *) ;
 int FUNC_9 (struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_12 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_13 (struct inode*,int ) ;
 int FUNC_14 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,unsigned int*) ;
 int FUNC_15 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_16 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct ocfs2_super*,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;
 int FUNC_19 (struct ocfs2_super*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_20 (struct ocfs2_super*,int) ;
 int FUNC_21 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 int FUNC_22 (struct inode*,struct buffer_head*,int *,struct buffer_head*,struct ocfs2_cached_dealloc_ctxt*) ;

__attribute__((used)) static int FUNC_23(struct inode *VAR_3,
          struct buffer_head *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_inode_info *VAR_8 = FUNC_2(VAR_3);
 struct ocfs2_dinode *VAR_9 = (struct ocfs2_dinode *)VAR_4->b_data;
 struct ocfs2_super *VAR_10 = FUNC_3(VAR_3->i_sb);
 struct ocfs2_refcount_tree *VAR_11;
 unsigned int VAR_12;
 loff_t VAR_13;
 u32 VAR_14, VAR_15, VAR_16, VAR_17;
 struct ocfs2_cached_dealloc_ctxt VAR_18;
 struct ocfs2_extent_tree VAR_19;

 FUNC_15(&VAR_18);

 if (!FUNC_17(VAR_3)) {
  VAR_5 = FUNC_11(VAR_3, VAR_4);
  if (VAR_5) {
   FUNC_7(VAR_5);
   goto out;
  }
 }

 FUNC_0(!VAR_9->i_refcount_loc);
 VAR_5 = FUNC_18(VAR_10,
           FUNC_6(VAR_9->i_refcount_loc), 1,
           &VAR_11, &VAR_7);
 if (VAR_5) {
  FUNC_7(VAR_5);
  goto out;
 }

 if (VAR_8->ip_dyn_features & VAR_2)
  goto attach_xattr;

 FUNC_16(&VAR_19, FUNC_1(VAR_3), VAR_4);

 VAR_13 = FUNC_5(VAR_3);
 VAR_16 = FUNC_10(VAR_3->i_sb, VAR_13);

 VAR_14 = 0;
 while (VAR_14 < VAR_16) {
  VAR_5 = FUNC_14(VAR_3, VAR_14, &VAR_17,
      &VAR_15, &VAR_12);
  if (VAR_5) {
   FUNC_7(VAR_5);
   goto unlock;
  }
  if (VAR_17 && !(VAR_12 & VAR_0)) {
   VAR_5 = FUNC_8(VAR_3, &VAR_19,
            &VAR_11->rf_ci,
            VAR_7, VAR_14,
            VAR_17, VAR_15,
            &VAR_18, ((void*)0));
   if (VAR_5) {
    FUNC_7(VAR_5);
    goto unlock;
   }

   VAR_6 = 1;
  }
  VAR_14 += VAR_15;
 }

attach_xattr:
 if (VAR_8->ip_dyn_features & VAR_1) {
  VAR_5 = FUNC_22(VAR_3, VAR_4,
             &VAR_11->rf_ci,
             VAR_7,
             &VAR_18);
  if (VAR_5) {
   FUNC_7(VAR_5);
   goto unlock;
  }
 }

 if (VAR_6) {
  VAR_5 = FUNC_9(VAR_3, VAR_4);
  if (VAR_5)
   FUNC_7(VAR_5);
 }

unlock:
 FUNC_21(VAR_10, VAR_11, 1);
 FUNC_4(VAR_7);

 if (!VAR_5 && FUNC_12(&VAR_18)) {
  FUNC_20(VAR_10, 1);
  FUNC_19(VAR_10, &VAR_18);
 }
out:




 FUNC_13(VAR_3, 0);

 return VAR_5;
}
