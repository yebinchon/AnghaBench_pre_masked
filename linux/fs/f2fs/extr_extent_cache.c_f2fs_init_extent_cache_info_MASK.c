
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int total_ext_node; int total_zombie_tree; int zombie_list; int total_ext_tree; int extent_lock; int extent_list; int extent_tree_lock; int extent_tree_root; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct f2fs_sb_info *VAR_1)
{
 FUNC_1(&VAR_1->extent_tree_root, VAR_0);
 FUNC_3(&VAR_1->extent_tree_lock);
 FUNC_0(&VAR_1->extent_list);
 FUNC_4(&VAR_1->extent_lock);
 FUNC_2(&VAR_1->total_ext_tree, 0);
 FUNC_0(&VAR_1->zombie_list);
 FUNC_2(&VAR_1->total_zombie_tree, 0);
 FUNC_2(&VAR_1->total_ext_node, 0);
}
