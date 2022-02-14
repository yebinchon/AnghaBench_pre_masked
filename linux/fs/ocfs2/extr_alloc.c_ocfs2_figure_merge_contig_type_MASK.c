
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct ocfs2_path {scalar_t__ p_tree_depth; } ;
struct ocfs2_merge_ctxt {int c_contig_type; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {scalar_t__ e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; int l_count; } ;
struct ocfs2_extent_block {int h_blkno; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef enum ocfs2_contig_type { ____Placeholder_ocfs2_contig_type } ocfs2_contig_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct super_block*,char*,unsigned long long,int,...) ;
 int FUNC_4 (struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,struct ocfs2_extent_rec*) ;
 int FUNC_5 (struct super_block*,struct ocfs2_path*,scalar_t__*) ;
 int FUNC_6 (struct super_block*,struct ocfs2_path*,scalar_t__*) ;
 int FUNC_7 (int ,struct ocfs2_path*,scalar_t__) ;
 int FUNC_8 (struct ocfs2_path*) ;
 scalar_t__ FUNC_9 (struct ocfs2_extent_rec*) ;
 struct super_block* FUNC_10 (int ) ;
 struct ocfs2_path* FUNC_11 (struct ocfs2_path*) ;
 struct buffer_head* FUNC_12 (struct ocfs2_path*) ;
 struct ocfs2_extent_list* FUNC_13 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_14(struct ocfs2_extent_tree *VAR_5,
          struct ocfs2_path *VAR_6,
          struct ocfs2_extent_list *VAR_7, int VAR_8,
          struct ocfs2_extent_rec *VAR_9,
          struct ocfs2_merge_ctxt *VAR_10)
{
 int VAR_11 = 0;
 enum ocfs2_contig_type VAR_12 = VAR_2;
 u32 VAR_13, VAR_14;
 struct ocfs2_extent_rec *VAR_15 = ((void*)0);
 struct ocfs2_extent_list *VAR_16;
 struct ocfs2_path *VAR_17 = ((void*)0), *VAR_18 = ((void*)0);
 struct buffer_head *VAR_19;
 struct ocfs2_extent_block *VAR_20;
 struct super_block *VAR_21 = FUNC_10(VAR_5->et_ci);

 if (VAR_8 > 0) {
  VAR_15 = &VAR_7->l_recs[VAR_8 - 1];
 } else if (VAR_6->p_tree_depth > 0) {
  VAR_11 = FUNC_5(VAR_21, VAR_6, &VAR_13);
  if (VAR_11)
   goto exit;

  if (VAR_13 != 0) {
   VAR_17 = FUNC_11(VAR_6);
   if (!VAR_17) {
    VAR_11 = -VAR_4;
    FUNC_2(VAR_11);
    goto exit;
   }

   VAR_11 = FUNC_7(VAR_5->et_ci, VAR_17,
       VAR_13);
   if (VAR_11)
    goto free_left_path;

   VAR_16 = FUNC_13(VAR_17);

   if (FUNC_0(VAR_16->l_next_free_rec) !=
       FUNC_0(VAR_16->l_count)) {
    VAR_19 = FUNC_12(VAR_17);
    VAR_20 = (struct ocfs2_extent_block *)VAR_19->b_data;
    VAR_11 = FUNC_3(VAR_21,
      "Extent block #%llu has an invalid l_next_free_rec of %d.  It should have matched the l_count of %d\n",
      (unsigned long long)FUNC_1(VAR_20->h_blkno),
      FUNC_0(VAR_16->l_next_free_rec),
      FUNC_0(VAR_16->l_count));
    goto free_left_path;
   }
   VAR_15 = &VAR_16->l_recs[
    FUNC_0(VAR_16->l_next_free_rec) - 1];
  }
 }





 if (VAR_15) {
  if (VAR_8 == 1 && FUNC_9(VAR_15)) {
   if (VAR_9->e_cpos == VAR_7->l_recs[VAR_8].e_cpos)
    VAR_12 = VAR_3;
  } else {
   VAR_12 = FUNC_4(VAR_5, VAR_15, VAR_9);
  }
 }

 VAR_15 = ((void*)0);
 if (VAR_8 < (FUNC_0(VAR_7->l_next_free_rec) - 1))
  VAR_15 = &VAR_7->l_recs[VAR_8 + 1];
 else if (FUNC_0(VAR_7->l_next_free_rec) == FUNC_0(VAR_7->l_count) &&
   VAR_6->p_tree_depth > 0) {
  VAR_11 = FUNC_6(VAR_21, VAR_6, &VAR_14);
  if (VAR_11)
   goto free_left_path;

  if (VAR_14 == 0)
   goto free_left_path;

  VAR_18 = FUNC_11(VAR_6);
  if (!VAR_18) {
   VAR_11 = -VAR_4;
   FUNC_2(VAR_11);
   goto free_left_path;
  }

  VAR_11 = FUNC_7(VAR_5->et_ci, VAR_18, VAR_14);
  if (VAR_11)
   goto free_right_path;

  VAR_16 = FUNC_13(VAR_18);
  VAR_15 = &VAR_16->l_recs[0];
  if (FUNC_9(VAR_15)) {
   if (FUNC_0(VAR_16->l_next_free_rec) <= 1) {
    VAR_19 = FUNC_12(VAR_18);
    VAR_20 = (struct ocfs2_extent_block *)VAR_19->b_data;
    VAR_11 = FUNC_3(VAR_21,
      "Extent block #%llu has an invalid l_next_free_rec of %d\n",
      (unsigned long long)FUNC_1(VAR_20->h_blkno),
      FUNC_0(VAR_16->l_next_free_rec));
    goto free_right_path;
   }
   VAR_15 = &VAR_16->l_recs[1];
  }
 }

 if (VAR_15) {
  enum ocfs2_contig_type VAR_22;

  VAR_22 = FUNC_4(VAR_5, VAR_15, VAR_9);

  if (VAR_22 == VAR_0 && VAR_12 == VAR_3)
   VAR_12 = VAR_1;
  else if (VAR_12 == VAR_2)
   VAR_12 = VAR_22;
 }

free_right_path:
 FUNC_8(VAR_18);
free_left_path:
 FUNC_8(VAR_17);
exit:
 if (VAR_11 == 0)
  VAR_10->c_contig_type = VAR_12;

 return VAR_11;
}
