
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_super {int sb; struct inode* osb_tl_inode; } ;
struct ocfs2_refcount_tree {int dummy; } ;
struct ocfs2_extent_tree {int et_root_bh; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ocfs2_super*) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct ocfs2_super*,int *) ;
 int FUNC_13 (struct inode*,int *,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*,int) ;
 int FUNC_14 (int *,struct ocfs2_extent_tree*,int ) ;
 int FUNC_15 (struct ocfs2_extent_tree*,int ) ;
 int FUNC_16 (struct ocfs2_alloc_context*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (struct ocfs2_super*,scalar_t__,int,struct ocfs2_refcount_tree**,int *) ;
 int FUNC_20 (struct inode*,scalar_t__,scalar_t__,int ,int*,int*) ;
 int FUNC_21 (int *,struct ocfs2_extent_tree*,int ,int ,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 scalar_t__ FUNC_22 (int ) ;
 int FUNC_23 (struct inode*,struct ocfs2_extent_tree*,int,struct ocfs2_alloc_context**,int) ;
 int * FUNC_24 (struct ocfs2_super*,scalar_t__) ;
 int FUNC_25 (struct ocfs2_super*,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_26 (struct ocfs2_super*) ;
 int FUNC_27 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 int FUNC_28 (int *,struct inode*,int) ;

int FUNC_29(struct inode *VAR_2,
        struct ocfs2_extent_tree *VAR_3,
        u32 VAR_4, u32 VAR_5, u32 VAR_6, int VAR_7,
        struct ocfs2_cached_dealloc_ctxt *VAR_8,
        u64 VAR_9, bool VAR_10)
{
 int VAR_11, VAR_12 = 0, VAR_13 = 0;
 u64 VAR_14 = FUNC_10(VAR_2->i_sb, VAR_5);
 struct ocfs2_super *VAR_15 = FUNC_2(VAR_2->i_sb);
 struct inode *VAR_16 = VAR_15->osb_tl_inode;
 handle_t *VAR_17;
 struct ocfs2_alloc_context *VAR_18 = ((void*)0);
 struct ocfs2_refcount_tree *VAR_19 = ((void*)0);

 if ((VAR_7 & VAR_0) && VAR_6) {
  FUNC_0(!FUNC_17(VAR_2));

  if (!VAR_10) {
   VAR_11 = FUNC_19(VAR_15, VAR_9, 1,
             &VAR_19, ((void*)0));
   if (VAR_11) {
    FUNC_8(VAR_11);
    goto bail;
   }
  }

  VAR_11 = FUNC_20(VAR_2,
           VAR_9,
           VAR_14,
           VAR_6,
           &VAR_12,
           &VAR_13);
  if (VAR_11 < 0) {
   FUNC_8(VAR_11);
   goto bail;
  }
 }

 VAR_11 = FUNC_23(VAR_2, VAR_3, 1, &VAR_18,
       VAR_13);
 if (VAR_11) {
  FUNC_8(VAR_11);
  goto bail;
 }

 FUNC_6(VAR_16);

 if (FUNC_26(VAR_15)) {
  VAR_11 = FUNC_4(VAR_15);
  if (VAR_11 < 0) {
   FUNC_8(VAR_11);
   goto out;
  }
 }

 VAR_17 = FUNC_24(VAR_15,
   FUNC_22(VAR_15->sb) + VAR_12);
 if (FUNC_1(VAR_17)) {
  VAR_11 = FUNC_3(VAR_17);
  FUNC_8(VAR_11);
  goto out;
 }

 VAR_11 = FUNC_14(VAR_17, VAR_3,
        VAR_1);
 if (VAR_11) {
  FUNC_8(VAR_11);
  goto out_commit;
 }

 FUNC_5(VAR_2,
      FUNC_11(VAR_2->i_sb, VAR_6));

 VAR_11 = FUNC_21(VAR_17, VAR_3, VAR_4, VAR_6, VAR_18, VAR_8);
 if (VAR_11) {
  FUNC_8(VAR_11);
  goto out_commit;
 }

 FUNC_15(VAR_3, -VAR_6);
 FUNC_28(VAR_17, VAR_2, 1);

 FUNC_18(VAR_17, VAR_3->et_root_bh);

 if (VAR_14) {
  if (VAR_7 & VAR_0)
   VAR_11 = FUNC_13(VAR_2, VAR_17,
     FUNC_9(VAR_15->sb,
         VAR_14),
     VAR_6, VAR_18,
     VAR_8, 1);
  else
   VAR_11 = FUNC_25(VAR_15, VAR_17,
       VAR_14, VAR_6);
  if (VAR_11)
   FUNC_8(VAR_11);

 }

out_commit:
 FUNC_12(VAR_15, VAR_17);
out:
 FUNC_7(VAR_16);
bail:
 if (VAR_18)
  FUNC_16(VAR_18);

 if (VAR_19)
  FUNC_27(VAR_15, VAR_19, 1);

 return VAR_11;
}
