
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; scalar_t__ i_nlink; } ;
struct f2fs_sb_info {int extent_tree_lock; int total_ext_tree; int extent_tree_root; int total_zombie_tree; int zombie_list; } ;
struct extent_tree {int node_cnt; int list; } ;
struct TYPE_2__ {struct extent_tree* extent_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct f2fs_sb_info*,scalar_t__) ;
 unsigned int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,struct extent_tree*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct inode*,unsigned int) ;

void FUNC_14(struct inode *VAR_1)
{
 struct f2fs_sb_info *VAR_2 = FUNC_1(VAR_1);
 struct extent_tree *VAR_3 = FUNC_0(VAR_1)->extent_tree;
 unsigned int VAR_4 = 0;

 if (!VAR_3)
  return;

 if (VAR_1->i_nlink && !FUNC_7(VAR_1) &&
     FUNC_4(&VAR_3->node_cnt)) {
  FUNC_10(&VAR_2->extent_tree_lock);
  FUNC_9(&VAR_3->list, &VAR_2->zombie_list);
  FUNC_3(&VAR_2->total_zombie_tree);
  FUNC_11(&VAR_2->extent_tree_lock);
  return;
 }


 VAR_4 = FUNC_6(VAR_1);


 FUNC_10(&VAR_2->extent_tree_lock);
 FUNC_5(VAR_2, FUNC_4(&VAR_3->node_cnt));
 FUNC_12(&VAR_2->extent_tree_root, VAR_1->i_ino);
 FUNC_8(VAR_0, VAR_3);
 FUNC_2(&VAR_2->total_ext_tree);
 FUNC_11(&VAR_2->extent_tree_lock);

 FUNC_0(VAR_1)->extent_tree = ((void*)0);

 FUNC_13(VAR_1, VAR_4);
}
