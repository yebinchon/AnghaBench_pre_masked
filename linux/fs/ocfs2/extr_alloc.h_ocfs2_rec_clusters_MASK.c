
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_extent_rec {int e_leaf_clusters; int e_int_clusters; } ;
struct ocfs2_extent_list {scalar_t__ l_tree_depth; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct ocfs2_extent_list *VAR_0,
           struct ocfs2_extent_rec *VAR_1)
{







 if (VAR_0->l_tree_depth)
  return FUNC_1(VAR_1->e_int_clusters);
 else
  return FUNC_0(VAR_1->e_leaf_clusters);
}
