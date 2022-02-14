
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_path {int p_tree_depth; TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_cpos; int e_int_clusters; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct ocfs2_extent_block {unsigned long long h_next_leaf_blk; struct ocfs2_extent_list h_list; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ b_data; } ;
struct TYPE_3__ {int bh; struct ocfs2_extent_list* el; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int *,struct ocfs2_path*) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (struct ocfs2_extent_list*,struct ocfs2_extent_rec*) ;
 TYPE_2__* FUNC_9 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_10(handle_t *VAR_0,
         struct ocfs2_extent_tree *VAR_1,
         struct ocfs2_path *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 struct ocfs2_extent_rec *VAR_6;
 struct ocfs2_extent_list *VAR_7;
 struct ocfs2_extent_block *VAR_8;
 u32 VAR_9;

 VAR_5 = FUNC_6(VAR_1->et_ci, VAR_0, VAR_2);
 if (VAR_5) {
  FUNC_5(VAR_5);
  goto out;
 }


 VAR_8 = (struct ocfs2_extent_block *)FUNC_9(VAR_2)->b_data;
 FUNC_0(VAR_8->h_next_leaf_blk != 0ULL);

 VAR_7 = &VAR_8->h_list;
 FUNC_0(FUNC_2(VAR_7->l_next_free_rec) == 0);
 VAR_4 = FUNC_2(VAR_7->l_next_free_rec) - 1;
 VAR_6 = &VAR_7->l_recs[VAR_4];
 VAR_9 = FUNC_4(VAR_6->e_cpos) + FUNC_8(VAR_7, VAR_6);

 for (VAR_3 = 0; VAR_3 < VAR_2->p_tree_depth; VAR_3++) {
  VAR_7 = VAR_2->p_node[VAR_3].el;
  VAR_4 = FUNC_2(VAR_7->l_next_free_rec) - 1;
  VAR_6 = &VAR_7->l_recs[VAR_4];

  VAR_6->e_int_clusters = FUNC_1(VAR_9);
  FUNC_3(&VAR_6->e_int_clusters, -FUNC_4(VAR_6->e_cpos));

  FUNC_7(VAR_0, VAR_2->p_node[VAR_3].bh);
 }
out:
 return VAR_5;
}
