
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_path {int p_tree_depth; TYPE_1__* p_node; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {int e_cpos; int e_int_clusters; int e_leaf_clusters; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; int l_next_free_rec; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {struct ocfs2_extent_list* el; struct buffer_head* bh; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long) ;
 int FUNC_4 (int *,struct buffer_head*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(handle_t *VAR_0,
        struct ocfs2_extent_tree *VAR_1,
        struct ocfs2_path *VAR_2,
        struct ocfs2_extent_rec *VAR_3)
{
 int VAR_4, VAR_5;
 struct buffer_head *VAR_6;
 struct ocfs2_extent_list *VAR_7;
 struct ocfs2_extent_rec *VAR_8;




 for (VAR_4 = 0; VAR_4 < VAR_2->p_tree_depth; VAR_4++) {
  VAR_6 = VAR_2->p_node[VAR_4].bh;
  VAR_7 = VAR_2->p_node[VAR_4].el;

  VAR_5 = FUNC_0(VAR_7->l_next_free_rec);
  if (VAR_5 == 0) {
   FUNC_3(FUNC_5(VAR_1->et_ci),
        "Owner %llu has a bad extent list\n",
        (unsigned long long)FUNC_6(VAR_1->et_ci));
   return;
  }

  VAR_8 = &VAR_7->l_recs[VAR_5 - 1];

  VAR_8->e_int_clusters = VAR_3->e_cpos;
  FUNC_1(&VAR_8->e_int_clusters,
        FUNC_0(VAR_3->e_leaf_clusters));
  FUNC_1(&VAR_8->e_int_clusters,
        -FUNC_2(VAR_8->e_cpos));

  FUNC_4(VAR_0, VAR_6);
 }
}
