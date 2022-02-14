
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int total_ext_node; } ;
struct extent_tree {struct extent_node* cached_en; int node_cnt; int root; } ;
struct extent_node {int rb_node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct extent_node*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct f2fs_sb_info *VAR_1,
    struct extent_tree *VAR_2, struct extent_node *VAR_3)
{
 FUNC_2(&VAR_3->rb_node, &VAR_2->root);
 FUNC_0(&VAR_2->node_cnt);
 FUNC_0(&VAR_1->total_ext_node);

 if (VAR_2->cached_en == VAR_3)
  VAR_2->cached_en = ((void*)0);
 FUNC_1(VAR_0, VAR_3);
}
