
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_super {int sb; struct inode* osb_tl_inode; } ;
struct ocfs2_refcount_tree {int dummy; } ;
struct ocfs2_move_extents_context {int partial; struct ocfs2_alloc_context* meta_ac; struct ocfs2_alloc_context* data_ac; struct inode* inode; TYPE_1__* range; int et; int refcount_loc; } ;
struct ocfs2_alloc_context {scalar_t__ ac_which; int ac_bh; int ac_inode; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;
struct TYPE_2__ {int me_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ocfs2_alloc_context*,int,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct ocfs2_super*) ;
 int FUNC_6 (int *,struct ocfs2_move_extents_context*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (struct ocfs2_super*,int *) ;
 int FUNC_13 (int ,struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct ocfs2_alloc_context*) ;
 int FUNC_15 (int *,int ,int ,int ,scalar_t__) ;
 int FUNC_16 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,scalar_t__,scalar_t__) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*,int *,scalar_t__,int,struct ocfs2_alloc_context**,int,int*) ;
 int FUNC_19 (struct ocfs2_super*,int ,int,struct ocfs2_refcount_tree**,int *) ;
 int FUNC_20 (struct inode*,int ,int ,scalar_t__,int*,int*) ;
 int FUNC_21 (struct ocfs2_super*,scalar_t__,struct ocfs2_alloc_context**) ;
 int * FUNC_22 (struct ocfs2_super*,int) ;
 scalar_t__ FUNC_23 (struct ocfs2_super*) ;
 int FUNC_24 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;

__attribute__((used)) static int FUNC_25(struct ocfs2_move_extents_context *VAR_4,
          u32 VAR_5, u32 VAR_6, u32 *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12 = VAR_4->partial;
 handle_t *VAR_13;
 struct inode *VAR_14 = VAR_4->inode;
 struct ocfs2_super *VAR_15 = FUNC_2(VAR_14->i_sb);
 struct inode *VAR_16 = VAR_15->osb_tl_inode;
 struct ocfs2_refcount_tree *VAR_17 = ((void*)0);
 u32 VAR_18, VAR_19;
 u64 VAR_20 = FUNC_11(VAR_14->i_sb, VAR_6);
 int VAR_21 = 0;

 if ((VAR_8 & VAR_2) && *VAR_7) {
  FUNC_0(!FUNC_17(VAR_14));
  FUNC_0(!VAR_4->refcount_loc);

  VAR_9 = FUNC_19(VAR_15, VAR_4->refcount_loc, 1,
            &VAR_17, ((void*)0));
  if (VAR_9) {
   FUNC_10(VAR_9);
   return VAR_9;
  }

  VAR_9 = FUNC_20(VAR_14,
       VAR_4->refcount_loc,
       VAR_20,
       *VAR_7,
       &VAR_10,
       &VAR_11);
  if (VAR_9) {
   FUNC_10(VAR_9);
   goto out;
  }
 }

 VAR_9 = FUNC_18(VAR_14, &VAR_4->et,
      *VAR_7, 1,
      &VAR_4->meta_ac,
      VAR_11, &VAR_10);
 if (VAR_9) {
  FUNC_10(VAR_9);
  goto out;
 }
 FUNC_7(VAR_16);

 if (FUNC_23(VAR_15)) {
  VAR_9 = FUNC_5(VAR_15);
  if (VAR_9 < 0) {
   FUNC_10(VAR_9);
   goto out_unlock_mutex;
  }
 }
 VAR_9 = FUNC_21(VAR_15, *VAR_7, &VAR_4->data_ac);
 if (VAR_9) {
  FUNC_10(VAR_9);
  goto out_unlock_mutex;
 }

 VAR_13 = FUNC_22(VAR_15, VAR_10);
 if (FUNC_1(VAR_13)) {
  VAR_9 = FUNC_3(VAR_13);
  FUNC_10(VAR_9);
  goto out_unlock_mutex;
 }

 VAR_9 = FUNC_4(VAR_13, VAR_4->data_ac, 1, *VAR_7,
         &VAR_18, &VAR_19);
 if (VAR_9) {
  FUNC_10(VAR_9);
  goto out_commit;
 }







 if (VAR_19 != *VAR_7) {
  FUNC_9(0, "len_claimed: %u, len: %u\n", VAR_19, *VAR_7);
  if (!VAR_12) {
   VAR_4->range->me_flags &= ~VAR_3;
   VAR_9 = -VAR_0;
   VAR_21 = 1;
   goto out_commit;
  }
 }

 FUNC_9(0, "cpos: %u, phys_cpos: %u, new_phys_cpos: %u\n", VAR_5,
      VAR_6, VAR_18);

 VAR_9 = FUNC_6(VAR_13, VAR_4, VAR_5, VAR_19, VAR_6,
      VAR_18, VAR_8);
 if (VAR_9)
  FUNC_10(VAR_9);

 if (VAR_12 && (VAR_19 != *VAR_7))
  *VAR_7 = VAR_19;





 VAR_9 = FUNC_13(VAR_14->i_sb, VAR_4->inode, VAR_5, *VAR_7);
 if (VAR_9)
  FUNC_10(VAR_9);

out_commit:
 if (VAR_21 && VAR_4->data_ac) {
  struct ocfs2_alloc_context *VAR_22 = VAR_4->data_ac;

  if (VAR_4->data_ac->ac_which == VAR_1)
   FUNC_16(VAR_15, VAR_13, VAR_22,
     VAR_18, VAR_19);
  else
   FUNC_15(VAR_13,
     VAR_22->ac_inode,
     VAR_22->ac_bh,
     FUNC_11(VAR_15->sb, VAR_18),
     VAR_19);
 }

 FUNC_12(VAR_15, VAR_13);

out_unlock_mutex:
 FUNC_8(VAR_16);

 if (VAR_4->data_ac) {
  FUNC_14(VAR_4->data_ac);
  VAR_4->data_ac = ((void*)0);
 }

 if (VAR_4->meta_ac) {
  FUNC_14(VAR_4->meta_ac);
  VAR_4->meta_ac = ((void*)0);
 }

out:
 if (VAR_17)
  FUNC_24(VAR_15, VAR_17, 1);

 return VAR_9;
}
