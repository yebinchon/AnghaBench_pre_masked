
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {struct ocfs2_refcount_tree* osb_ref_tree_lru; int osb_rf_lock_tree; } ;
struct ocfs2_refcount_tree {int rf_node; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static inline void
FUNC_1(struct ocfs2_super *VAR_0,
     struct ocfs2_refcount_tree *VAR_1)
{
 FUNC_0(&VAR_1->rf_node, &VAR_0->osb_rf_lock_tree);
 if (VAR_0->osb_ref_tree_lru && VAR_0->osb_ref_tree_lru == VAR_1)
  VAR_0->osb_ref_tree_lru = ((void*)0);
}
