
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_insert_type {scalar_t__ ins_appending; scalar_t__ ins_contig; scalar_t__ ins_split; } ;
struct ocfs2_extent_tree {int et_root_bh; int et_ci; struct ocfs2_extent_list* et_root_el; } ;
struct ocfs2_extent_rec {int e_leaf_clusters; int e_cpos; } ;
struct ocfs2_extent_list {int l_tree_depth; } ;
typedef int handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,struct ocfs2_path*,struct ocfs2_path**) ;
 int FUNC_4 (int *,struct ocfs2_extent_tree*,int ) ;
 int FUNC_5 (struct ocfs2_extent_tree*,scalar_t__) ;
 int FUNC_6 (int ,struct ocfs2_path*,int ) ;
 int FUNC_7 (struct ocfs2_path*) ;
 int FUNC_8 (struct ocfs2_extent_tree*,struct ocfs2_extent_rec*,struct ocfs2_extent_list*,struct ocfs2_insert_type*) ;
 int FUNC_9 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,struct ocfs2_path*,struct ocfs2_extent_rec*,struct ocfs2_insert_type*) ;
 int FUNC_10 (int *,int ) ;
 struct ocfs2_path* FUNC_11 (struct ocfs2_extent_tree*) ;
 int FUNC_12 (int *,struct ocfs2_extent_tree*,scalar_t__,int ,struct ocfs2_path*,struct ocfs2_path**) ;

__attribute__((used)) static int FUNC_13(handle_t *VAR_8,
      struct ocfs2_extent_tree *VAR_9,
      struct ocfs2_extent_rec *VAR_10,
      struct ocfs2_insert_type *VAR_11)
{
 int VAR_12, VAR_13 = 0;
 u32 VAR_14;
 struct ocfs2_path *VAR_15 = ((void*)0);
 struct ocfs2_path *VAR_16 = ((void*)0);
 struct ocfs2_extent_list *VAR_17;

 VAR_17 = VAR_9->et_root_el;

 VAR_12 = FUNC_4(VAR_8, VAR_9,
        VAR_5);
 if (VAR_12) {
  FUNC_2(VAR_12);
  goto out;
 }

 if (FUNC_0(VAR_17->l_tree_depth) == 0) {
  FUNC_8(VAR_9, VAR_10, VAR_17, VAR_11);
  goto out_update_clusters;
 }

 VAR_15 = FUNC_11(VAR_9);
 if (!VAR_15) {
  VAR_12 = -VAR_4;
  FUNC_2(VAR_12);
  goto out;
 }






 VAR_14 = FUNC_1(VAR_10->e_cpos);
 if (VAR_11->ins_appending == VAR_0 &&
     VAR_11->ins_contig == VAR_3) {
  VAR_13 = 1;
  VAR_14 = VAR_7;
 }

 VAR_12 = FUNC_6(VAR_9->et_ci, VAR_15, VAR_14);
 if (VAR_12) {
  FUNC_2(VAR_12);
  goto out;
 }
 if (VAR_13) {
  VAR_12 = FUNC_12(VAR_8, VAR_9, VAR_11->ins_split,
           FUNC_1(VAR_10->e_cpos),
           VAR_15, &VAR_16);
  if (VAR_12) {
   FUNC_2(VAR_12);
   goto out;
  }





  VAR_12 = FUNC_4(VAR_8, VAR_9,
         VAR_5);
  if (VAR_12) {
   FUNC_2(VAR_12);
   goto out;
  }
 } else if (VAR_11->ins_appending == VAR_1
     && VAR_11->ins_contig != VAR_2) {
  VAR_12 = FUNC_3(VAR_8, VAR_9, VAR_10,
            VAR_15, &VAR_16);
  if (VAR_12) {
   FUNC_2(VAR_12);
   goto out;
  }
 }

 VAR_12 = FUNC_9(VAR_8, VAR_9, VAR_16, VAR_15,
    VAR_10, VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_12);
  goto out;
 }

out_update_clusters:
 if (VAR_11->ins_split == VAR_6)
  FUNC_5(VAR_9,
      FUNC_0(VAR_10->e_leaf_clusters));

 FUNC_10(VAR_8, VAR_9->et_root_bh);

out:
 FUNC_7(VAR_16);
 FUNC_7(VAR_15);

 return VAR_12;
}
