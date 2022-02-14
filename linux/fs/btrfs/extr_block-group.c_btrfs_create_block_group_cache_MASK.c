
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {int type; void* offset; void* objectid; } ;
struct btrfs_block_group_cache {int full_stripe_locks_root; int free_space_lock; int trimming; int io_list; int dirty_list; int ro_list; int bg_list; int cluster_list; int list; int data_rwsem; int lock; int count; int full_stripe_len; struct btrfs_fs_info* fs_info; TYPE_1__ key; void* free_space_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct btrfs_fs_info*,void*) ;
 int FUNC_3 (struct btrfs_block_group_cache*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct btrfs_block_group_cache*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct btrfs_block_group_cache*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct btrfs_block_group_cache *FUNC_11(
  struct btrfs_fs_info *VAR_2, u64 VAR_3, u64 VAR_4)
{
 struct btrfs_block_group_cache *VAR_5;

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->free_space_ctl = FUNC_7(sizeof(*VAR_5->free_space_ctl),
     VAR_1);
 if (!VAR_5->free_space_ctl) {
  FUNC_6(VAR_5);
  return ((void*)0);
 }

 VAR_5->key.objectid = VAR_3;
 VAR_5->key.offset = VAR_4;
 VAR_5->key.type = VAR_0;

 VAR_5->fs_info = VAR_2;
 VAR_5->full_stripe_len = FUNC_2(VAR_2, VAR_3);
 FUNC_9(VAR_5);

 FUNC_1(&VAR_5->count, 1);
 FUNC_10(&VAR_5->lock);
 FUNC_5(&VAR_5->data_rwsem);
 FUNC_0(&VAR_5->list);
 FUNC_0(&VAR_5->cluster_list);
 FUNC_0(&VAR_5->bg_list);
 FUNC_0(&VAR_5->ro_list);
 FUNC_0(&VAR_5->dirty_list);
 FUNC_0(&VAR_5->io_list);
 FUNC_3(VAR_5);
 FUNC_1(&VAR_5->trimming, 0);
 FUNC_8(&VAR_5->free_space_lock);
 FUNC_4(&VAR_5->full_stripe_locks_root);

 return VAR_5;
}
