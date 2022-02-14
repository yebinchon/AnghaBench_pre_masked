
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_path {scalar_t__ p_tree_depth; } ;
struct ocfs2_merge_ctxt {int c_split_covers_rec; scalar_t__ c_contig_type; int c_has_empty_extent; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {scalar_t__ e_cpos; scalar_t__ e_leaf_clusters; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_extent_tree*) ;
 int FUNC_5 (struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_extent_list*,int,struct ocfs2_extent_rec*,struct ocfs2_merge_ctxt*) ;
 int FUNC_6 (struct ocfs2_extent_rec*) ;
 int FUNC_7 (int ,int ,struct buffer_head**) ;
 int FUNC_8 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_extent_list*,int,struct ocfs2_extent_rec*) ;
 int FUNC_9 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct buffer_head**,int,struct ocfs2_extent_rec*,struct ocfs2_alloc_context*) ;
 int FUNC_10 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,int,struct ocfs2_extent_rec*,struct ocfs2_cached_dealloc_ctxt*,struct ocfs2_merge_ctxt*) ;
 struct ocfs2_extent_list* FUNC_11 (struct ocfs2_path*) ;
 int FUNC_12 (int,scalar_t__,int ,int) ;

int FUNC_13(handle_t *VAR_2,
         struct ocfs2_extent_tree *VAR_3,
         struct ocfs2_path *VAR_4,
         int VAR_5,
         struct ocfs2_extent_rec *VAR_6,
         struct ocfs2_alloc_context *VAR_7,
         struct ocfs2_cached_dealloc_ctxt *VAR_8)
{
 int VAR_9 = 0;
 struct ocfs2_extent_list *VAR_10 = FUNC_11(VAR_4);
 struct buffer_head *VAR_11 = ((void*)0);
 struct ocfs2_extent_rec *VAR_12 = &VAR_10->l_recs[VAR_5];
 struct ocfs2_merge_ctxt VAR_13;

 if (FUNC_2(VAR_12->e_cpos) > FUNC_2(VAR_6->e_cpos) ||
     ((FUNC_2(VAR_12->e_cpos) + FUNC_1(VAR_12->e_leaf_clusters)) <
      (FUNC_2(VAR_6->e_cpos) + FUNC_1(VAR_6->e_leaf_clusters)))) {
  VAR_9 = -VAR_1;
  FUNC_3(VAR_9);
  goto out;
 }

 VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_10,
          VAR_5,
          VAR_6,
          &VAR_13);
 if (VAR_9) {
  FUNC_3(VAR_9);
  goto out;
 }






 if (VAR_4->p_tree_depth) {
  VAR_9 = FUNC_7(VAR_3->et_ci,
           FUNC_4(VAR_3),
           &VAR_11);
  if (VAR_9) {
   FUNC_3(VAR_9);
   goto out;
  }
 }

 if (VAR_12->e_cpos == VAR_6->e_cpos &&
     VAR_12->e_leaf_clusters == VAR_6->e_leaf_clusters)
  VAR_13.c_split_covers_rec = 1;
 else
  VAR_13.c_split_covers_rec = 0;

 VAR_13.c_has_empty_extent = FUNC_6(&VAR_10->l_recs[0]);

 FUNC_12(VAR_5, VAR_13.c_contig_type,
     VAR_13.c_has_empty_extent,
     VAR_13.c_split_covers_rec);

 if (VAR_13.c_contig_type == VAR_0) {
  if (VAR_13.c_split_covers_rec)
   VAR_9 = FUNC_8(VAR_2, VAR_3, VAR_4, VAR_10,
             VAR_5, VAR_6);
  else
   VAR_9 = FUNC_9(VAR_2, VAR_3, VAR_4,
           &VAR_11, VAR_5,
           VAR_6, VAR_7);
  if (VAR_9)
   FUNC_3(VAR_9);
 } else {
  VAR_9 = FUNC_10(VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6,
      VAR_8, &VAR_13);
  if (VAR_9)
   FUNC_3(VAR_9);
 }

out:
 FUNC_0(VAR_11);
 return VAR_9;
}
