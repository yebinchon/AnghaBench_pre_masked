
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_fs_info {int sectorsize; } ;
struct TYPE_2__ {unsigned long offset; int type; scalar_t__ objectid; } ;
struct btrfs_block_group_cache {int free_space_lock; int bg_list; int cluster_list; int list; struct btrfs_fs_info* fs_info; int full_stripe_len; TYPE_1__ key; void* free_space_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_block_group_cache*) ;
 int FUNC_2 (struct btrfs_block_group_cache*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

struct btrfs_block_group_cache *
FUNC_5(struct btrfs_fs_info *VAR_2,
         unsigned long VAR_3)
{
 struct btrfs_block_group_cache *VAR_4;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return ((void*)0);
 VAR_4->free_space_ctl = FUNC_3(sizeof(*VAR_4->free_space_ctl),
     VAR_1);
 if (!VAR_4->free_space_ctl) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_4->key.objectid = 0;
 VAR_4->key.offset = VAR_3;
 VAR_4->key.type = VAR_0;
 VAR_4->full_stripe_len = VAR_2->sectorsize;
 VAR_4->fs_info = VAR_2;

 FUNC_0(&VAR_4->list);
 FUNC_0(&VAR_4->cluster_list);
 FUNC_0(&VAR_4->bg_list);
 FUNC_1(VAR_4);
 FUNC_4(&VAR_4->free_space_lock);

 return VAR_4;
}
