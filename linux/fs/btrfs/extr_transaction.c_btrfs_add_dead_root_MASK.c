
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {int root_list; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int trans_lock; int dead_roots; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct btrfs_root *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = VAR_0->fs_info;

 FUNC_2(&VAR_1->trans_lock);
 if (FUNC_1(&VAR_0->root_list))
  FUNC_0(&VAR_0->root_list, &VAR_1->dead_roots);
 FUNC_3(&VAR_1->trans_lock);
}
