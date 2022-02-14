
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct extent_tree {int lock; int node_cnt; } ;
struct TYPE_2__ {struct extent_tree* extent_tree; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 unsigned int FUNC_2 (struct f2fs_sb_info*,struct extent_tree*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

unsigned int FUNC_6(struct inode *VAR_0)
{
 struct f2fs_sb_info *VAR_1 = FUNC_1(VAR_0);
 struct extent_tree *VAR_2 = FUNC_0(VAR_0)->extent_tree;
 unsigned int VAR_3 = 0;

 if (!VAR_2 || !FUNC_3(&VAR_2->node_cnt))
  return 0;

 FUNC_4(&VAR_2->lock);
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_5(&VAR_2->lock);

 return VAR_3;
}
