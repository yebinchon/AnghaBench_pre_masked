
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int unused_bgs_lock; int unused_bgs; } ;
struct btrfs_block_group_cache {int bg_list; struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (struct btrfs_block_group_cache*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct btrfs_block_group_cache*) ;

void FUNC_6(struct btrfs_block_group_cache *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = VAR_0->fs_info;

 FUNC_3(&VAR_1->unused_bgs_lock);
 if (FUNC_2(&VAR_0->bg_list)) {
  FUNC_0(VAR_0);
  FUNC_5(VAR_0);
  FUNC_1(&VAR_0->bg_list, &VAR_1->unused_bgs);
 }
 FUNC_4(&VAR_1->unused_bgs_lock);
}
