
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ocfs2_super {struct inode* osb_tl_inode; } ;
struct ocfs2_refcount_tree {int dummy; } ;
struct ocfs2_move_extents_context {int * meta_ac; struct inode* inode; int et; int refcount_loc; TYPE_1__* range; } ;
struct ocfs2_group_desc {int bg_chain; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int me_threshold; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ocfs2_move_extents_context*,int ,int ,int ,int ,int) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct inode*,int *,struct buffer_head*,int ,int ) ;
 int FUNC_13 (int *,struct inode*,struct ocfs2_group_desc*,struct buffer_head*,int,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct ocfs2_super*,int *) ;
 int FUNC_17 (int ,struct inode*,int ,int ) ;
 int FUNC_18 (struct inode*,int ,int ,int ,int*,struct buffer_head**) ;
 int FUNC_19 (int *) ;
 struct inode* FUNC_20 (struct ocfs2_super*,int ,int ) ;
 int FUNC_21 (struct inode*,struct buffer_head**,int) ;
 int FUNC_22 (struct inode*,int) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*,int *,int ,int,int **,int,int*) ;
 int FUNC_25 (struct ocfs2_super*,int ,int,struct ocfs2_refcount_tree**,int *) ;
 int FUNC_26 (struct inode*,int ,int ,int ,int*,int*) ;
 int FUNC_27 (struct inode*,struct buffer_head*,int*,int ,int ,int *) ;
 int FUNC_28 (struct inode*,struct buffer_head*,int ,int ) ;
 int * FUNC_29 (struct ocfs2_super*,int) ;
 int FUNC_30 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;

__attribute__((used)) static int FUNC_31(struct ocfs2_move_extents_context *VAR_7,
        u32 VAR_8, u32 VAR_9, u32 *VAR_10,
        u32 VAR_11, int VAR_12)
{
 int VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 handle_t *VAR_17;
 struct inode *VAR_18 = VAR_7->inode;
 struct ocfs2_super *VAR_19 = FUNC_2(VAR_18->i_sb);
 struct inode *VAR_20 = VAR_19->osb_tl_inode;
 struct inode *VAR_21 = ((void*)0);
 struct buffer_head *VAR_22 = ((void*)0);
 struct buffer_head *VAR_23 = ((void*)0);
 struct ocfs2_group_desc *VAR_24;
 struct ocfs2_refcount_tree *VAR_25 = ((void*)0);
 u32 VAR_26 = FUNC_14(VAR_18->i_sb,
          VAR_7->range->me_threshold);
 u64 VAR_27, VAR_28;

 VAR_27 = FUNC_15(VAR_18->i_sb, VAR_9);

 if ((VAR_12 & VAR_4) && VAR_11) {
  FUNC_0(!FUNC_23(VAR_18));
  FUNC_0(!VAR_7->refcount_loc);

  VAR_13 = FUNC_25(VAR_19, VAR_7->refcount_loc, 1,
            &VAR_25, ((void*)0));
  if (VAR_13) {
   FUNC_11(VAR_13);
   return VAR_13;
  }

  VAR_13 = FUNC_26(VAR_18,
       VAR_7->refcount_loc,
       VAR_27,
       VAR_11,
       &VAR_14,
       &VAR_15);
  if (VAR_13) {
   FUNC_11(VAR_13);
   goto out;
  }
 }

 VAR_13 = FUNC_24(VAR_18, &VAR_7->et,
      VAR_11, 1,
      &VAR_7->meta_ac,
      VAR_15, &VAR_14);
 if (VAR_13) {
  FUNC_11(VAR_13);
  goto out;
 }





 VAR_14 += VAR_5 + 1;





 VAR_21 = FUNC_20(VAR_19, VAR_2,
            VAR_6);
 if (!VAR_21) {
  FUNC_10(VAR_3, "unable to get global_bitmap inode\n");
  VAR_13 = -VAR_0;
  goto out;
 }

 FUNC_6(VAR_21);

 VAR_13 = FUNC_21(VAR_21, &VAR_22, 1);
 if (VAR_13) {
  FUNC_11(VAR_13);
  goto out_unlock_gb_mutex;
 }

 FUNC_6(VAR_20);

 VAR_17 = FUNC_29(VAR_19, VAR_14);
 if (FUNC_1(VAR_17)) {
  VAR_13 = FUNC_3(VAR_17);
  FUNC_11(VAR_13);
  goto out_unlock_tl_inode;
 }

 VAR_28 = FUNC_15(VAR_18->i_sb, *VAR_10);
 VAR_13 = FUNC_18(VAR_18, VAR_28,
         VAR_2,
         VAR_6,
         &VAR_16, &VAR_23);
 if (VAR_13) {
  FUNC_11(VAR_13);
  goto out_commit;
 }







 FUNC_27(VAR_18, VAR_23, &VAR_16, VAR_11, VAR_26,
    VAR_10);
 if (!*VAR_10) {
  VAR_13 = -VAR_1;
  goto out_commit;
 }

 VAR_13 = FUNC_4(VAR_17, VAR_7, VAR_8, VAR_11, VAR_9,
      *VAR_10, VAR_12);
 if (VAR_13) {
  FUNC_11(VAR_13);
  goto out_commit;
 }

 VAR_24 = (struct ocfs2_group_desc *)VAR_23->b_data;
 VAR_13 = FUNC_12(VAR_21, VAR_17, VAR_22, VAR_11,
            FUNC_9(VAR_24->bg_chain));
 if (VAR_13) {
  FUNC_11(VAR_13);
  goto out_commit;
 }

 VAR_13 = FUNC_13(VAR_17, VAR_21, VAR_24, VAR_23,
      VAR_16, VAR_11);
 if (VAR_13) {
  FUNC_28(VAR_21, VAR_22, VAR_11,
            FUNC_9(VAR_24->bg_chain));
  FUNC_11(VAR_13);
 }





 VAR_13 = FUNC_17(VAR_18->i_sb, VAR_7->inode, VAR_8, VAR_11);
 if (VAR_13)
  FUNC_11(VAR_13);

out_commit:
 FUNC_16(VAR_19, VAR_17);
 FUNC_5(VAR_23);

out_unlock_tl_inode:
 FUNC_7(VAR_20);

 FUNC_22(VAR_21, 1);
out_unlock_gb_mutex:
 FUNC_7(VAR_21);
 FUNC_5(VAR_22);
 FUNC_8(VAR_21);

out:
 if (VAR_7->meta_ac) {
  FUNC_19(VAR_7->meta_ac);
  VAR_7->meta_ac = ((void*)0);
 }

 if (VAR_25)
  FUNC_30(VAR_19, VAR_25, 1);

 return VAR_13;
}
