
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_fs_info {int sectorsize; } ;
struct btrfs_free_space_ctl {int extents_thresh; int cache_writeout_mutex; int trimming_ranges; int * op; struct btrfs_block_group_cache* private; int start; int unit; int tree_lock; } ;
struct btrfs_free_space {int dummy; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_block_group_cache {TYPE_1__ key; struct btrfs_free_space_ctl* free_space_ctl; struct btrfs_fs_info* fs_info; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct btrfs_block_group_cache *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_2->fs_info;
 struct btrfs_free_space_ctl *VAR_4 = VAR_2->free_space_ctl;

 FUNC_2(&VAR_4->tree_lock);
 VAR_4->unit = VAR_3->sectorsize;
 VAR_4->start = VAR_2->key.objectid;
 VAR_4->private = VAR_2;
 VAR_4->op = &VAR_1;
 FUNC_0(&VAR_4->trimming_ranges);
 FUNC_1(&VAR_4->cache_writeout_mutex);






 VAR_4->extents_thresh = (VAR_0 / 2) / sizeof(struct btrfs_free_space);
}
