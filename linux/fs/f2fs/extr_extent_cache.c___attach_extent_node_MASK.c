
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb_node {int dummy; } ;
struct f2fs_sb_info {int total_ext_node; } ;
struct extent_tree {int node_cnt; int root; } ;
struct extent_info {int dummy; } ;
struct extent_node {int rb_node; struct extent_tree* et; int list; struct extent_info ei; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 struct extent_node* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,struct rb_node*,struct rb_node**) ;

__attribute__((used)) static struct extent_node *FUNC_5(struct f2fs_sb_info *VAR_2,
    struct extent_tree *VAR_3, struct extent_info *VAR_4,
    struct rb_node *VAR_5, struct rb_node **VAR_6,
    bool VAR_7)
{
 struct extent_node *VAR_8;

 VAR_8 = FUNC_2(VAR_1, VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->ei = *VAR_4;
 FUNC_0(&VAR_8->list);
 VAR_8->et = VAR_3;

 FUNC_4(&VAR_8->rb_node, VAR_5, VAR_6);
 FUNC_3(&VAR_8->rb_node, &VAR_3->root, VAR_7);
 FUNC_1(&VAR_3->node_cnt);
 FUNC_1(&VAR_2->total_ext_node);
 return VAR_8;
}
