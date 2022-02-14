
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_refcount_tree {int dummy; } ;
struct ocfs2_path {int p_tree_depth; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_extent_rec {int e_flags; scalar_t__ e_int_clusters; int e_blkno; int e_cpos; } ;
struct ocfs2_extent_list {scalar_t__ l_tree_depth; struct ocfs2_extent_rec* l_recs; scalar_t__ l_next_free_rec; } ;
struct TYPE_4__ {struct ocfs2_extent_list i_list; } ;
struct ocfs2_dinode {TYPE_1__ id2; int i_refcount_loc; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int i_sb; int i_ino; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_6__ {scalar_t__ ip_clusters; scalar_t__ ip_blkno; } ;
struct TYPE_5__ {scalar_t__ b_blocknr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,scalar_t__) ;
 int FUNC_11 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_12 (struct inode*,scalar_t__) ;
 int FUNC_13 (int ,struct ocfs2_path*,int ) ;
 int FUNC_14 (struct ocfs2_path*) ;
 int FUNC_15 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_16 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 scalar_t__ FUNC_17 (struct ocfs2_extent_rec*) ;
 int VAR_5 ;
 int FUNC_18 (struct ocfs2_super*,scalar_t__,int,struct ocfs2_refcount_tree**,int *) ;
 struct ocfs2_path* FUNC_19 (struct buffer_head*,struct ocfs2_extent_list*,int ) ;
 scalar_t__ FUNC_20 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;
 int FUNC_21 (struct ocfs2_path*,int) ;
 int FUNC_22 (struct inode*,struct ocfs2_extent_tree*,scalar_t__,scalar_t__,scalar_t__,int,struct ocfs2_cached_dealloc_ctxt*,scalar_t__,int) ;
 int FUNC_23 (struct ocfs2_super*,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_24 (struct ocfs2_super*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_25 (struct ocfs2_super*,int) ;
 int FUNC_26 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;
 TYPE_2__* FUNC_27 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_28 (struct ocfs2_path*) ;
 int FUNC_29 (unsigned long long,scalar_t__,scalar_t__,int ) ;

int FUNC_30(struct ocfs2_super *VAR_6,
     struct inode *VAR_7,
     struct buffer_head *VAR_8)
{
 int VAR_9 = 0, VAR_10, VAR_11 = 0;
 u32 VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 u64 VAR_18 = 0;
 struct ocfs2_extent_list *VAR_19;
 struct ocfs2_extent_rec *VAR_20;
 struct ocfs2_path *VAR_21 = ((void*)0);
 struct ocfs2_dinode *VAR_22 = (struct ocfs2_dinode *)VAR_8->b_data;
 struct ocfs2_extent_list *VAR_23 = &(VAR_22->id2.i_list);
 u64 VAR_24 = FUNC_5(VAR_22->i_refcount_loc);
 struct ocfs2_extent_tree VAR_25;
 struct ocfs2_cached_dealloc_ctxt VAR_26;
 struct ocfs2_refcount_tree *VAR_27 = ((void*)0);

 FUNC_16(&VAR_25, FUNC_0(VAR_7), VAR_8);
 FUNC_15(&VAR_26);

 VAR_12 = FUNC_9(VAR_6->sb,
           FUNC_2(VAR_7));

 VAR_21 = FUNC_19(VAR_8, &VAR_22->id2.i_list,
         VAR_5);
 if (!VAR_21) {
  VAR_9 = -VAR_0;
  FUNC_7(VAR_9);
  goto bail;
 }

 FUNC_12(VAR_7, VAR_12);

start:



 if (FUNC_1(VAR_7)->ip_clusters == 0) {
  VAR_9 = 0;
  goto bail;
 }




 VAR_9 = FUNC_13(FUNC_0(VAR_7), VAR_21, VAR_4);
 if (VAR_9) {
  FUNC_7(VAR_9);
  goto bail;
 }

 FUNC_29(
  (unsigned long long)FUNC_1(VAR_7)->ip_blkno,
  VAR_12,
  FUNC_1(VAR_7)->ip_clusters,
  VAR_21->p_tree_depth);
 VAR_19 = FUNC_28(VAR_21);
 if (FUNC_3(VAR_19->l_next_free_rec) == 0) {
  FUNC_11(VAR_7->i_sb,
       "Inode %llu has empty extent block at %llu\n",
       (unsigned long long)FUNC_1(VAR_7)->ip_blkno,
       (unsigned long long)FUNC_27(VAR_21)->b_blocknr);
  VAR_9 = -VAR_1;
  goto bail;
 }

 VAR_10 = FUNC_3(VAR_19->l_next_free_rec) - 1;
 VAR_20 = &VAR_19->l_recs[VAR_10];
 VAR_11 = VAR_20->e_flags;
 VAR_13 = FUNC_4(VAR_20->e_cpos) + FUNC_20(VAR_19, VAR_20);

 if (VAR_10 == 0 && FUNC_17(VAR_20)) {




  if (VAR_23->l_tree_depth && VAR_20->e_int_clusters == 0) {
   FUNC_6(VAR_2, "Inode %lu has an empty "
        "extent record, depth %u\n", VAR_7->i_ino,
        FUNC_3(VAR_23->l_tree_depth));
   VAR_9 = FUNC_23(VAR_6,
     &VAR_25, VAR_21, &VAR_26);
   if (VAR_9) {
    FUNC_7(VAR_9);
    goto bail;
   }

   FUNC_21(VAR_21, 1);
   goto start;
  } else {
   VAR_14 = FUNC_4(VAR_20->e_cpos);
   VAR_15 = 0;
   VAR_18 = 0;
  }
 } else if (FUNC_4(VAR_20->e_cpos) >= VAR_12) {



  VAR_14 = FUNC_4(VAR_20->e_cpos);
  VAR_15 = FUNC_20(VAR_19, VAR_20);
  VAR_18 = FUNC_5(VAR_20->e_blkno);
 } else if (VAR_13 > VAR_12) {




  VAR_14 = VAR_12;
  VAR_15 = VAR_13 - VAR_12;
  VAR_17 = VAR_12 - FUNC_4(VAR_20->e_cpos);
  VAR_18 = FUNC_5(VAR_20->e_blkno) +
    FUNC_10(VAR_7->i_sb, VAR_17);
 } else {



  VAR_9 = 0;
  goto bail;
 }

 VAR_16 = FUNC_8(VAR_7->i_sb, VAR_18);

 if ((VAR_11 & VAR_3) && VAR_15 && !VAR_27) {
  VAR_9 = FUNC_18(VAR_6, VAR_24, 1,
    &VAR_27, ((void*)0));
  if (VAR_9) {
   FUNC_7(VAR_9);
   goto bail;
  }
 }

 VAR_9 = FUNC_22(VAR_7, &VAR_25, VAR_14,
       VAR_16, VAR_15, VAR_11, &VAR_26,
       VAR_24, 1);
 if (VAR_9 < 0) {
  FUNC_7(VAR_9);
  goto bail;
 }

 FUNC_21(VAR_21, 1);





 goto start;

bail:
 if (VAR_27)
  FUNC_26(VAR_6, VAR_27, 1);

 FUNC_25(VAR_6, 1);

 FUNC_24(VAR_6, &VAR_26);

 FUNC_14(VAR_21);

 return VAR_9;
}
