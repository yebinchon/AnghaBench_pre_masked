
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_fs_info {int caching_workers; int commit_root_sem; int caching_block_groups; } ;
struct btrfs_caching_control {int progress; int work; int list; int count; int wait; int mutex; struct btrfs_block_group_cache* block_group; } ;
struct TYPE_3__ {int objectid; int offset; } ;
struct btrfs_block_group_cache {scalar_t__ cached; int last_byte_to_unpin; int has_caching_ctl; int lock; struct btrfs_caching_control* caching_ctl; TYPE_2__* space_info; int item; TYPE_1__ key; struct btrfs_fs_info* fs_info; } ;
struct TYPE_4__ {int bytes_used; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct btrfs_caching_control*) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;
 int FUNC_4 (struct btrfs_block_group_cache*) ;
 int FUNC_5 (struct btrfs_block_group_cache*) ;
 int FUNC_6 (int *,int ,int ,int *,int *) ;
 int FUNC_7 (struct btrfs_caching_control*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (struct btrfs_block_group_cache*) ;
 scalar_t__ FUNC_10 (struct btrfs_fs_info*,int ) ;
 int VAR_9 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (struct btrfs_block_group_cache*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct btrfs_caching_control*) ;
 struct btrfs_caching_control* FUNC_16 (int,int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (struct btrfs_block_group_cache*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int *,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int) ;
 int FUNC_25 () ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int VAR_10 ;
 int FUNC_29 (int *) ;

int FUNC_30(struct btrfs_block_group_cache *VAR_11,
       int VAR_12)
{
 FUNC_0(VAR_10);
 struct btrfs_fs_info *VAR_13 = VAR_11->fs_info;
 struct btrfs_caching_control *VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_16(sizeof(*VAR_14), VAR_5);
 if (!VAR_14)
  return -VAR_4;

 FUNC_1(&VAR_14->list);
 FUNC_19(&VAR_14->mutex);
 FUNC_14(&VAR_14->wait);
 VAR_14->block_group = VAR_11;
 VAR_14->progress = VAR_11->key.objectid;
 FUNC_24(&VAR_14->count, 1);
 FUNC_6(&VAR_14->work, VAR_8,
   VAR_9, ((void*)0), ((void*)0));

 FUNC_26(&VAR_11->lock);
 while (VAR_11->cached == VAR_0) {
  struct btrfs_caching_control *VAR_16;

  VAR_16 = VAR_11->caching_ctl;
  FUNC_23(&VAR_16->count);
  FUNC_22(&VAR_16->wait, &VAR_10, VAR_7);
  FUNC_27(&VAR_11->lock);

  FUNC_25();

  FUNC_12(&VAR_16->wait, &VAR_10);
  FUNC_7(VAR_16);
  FUNC_26(&VAR_11->lock);
 }

 if (VAR_11->cached != VAR_2) {
  FUNC_27(&VAR_11->lock);
  FUNC_15(VAR_14);
  return 0;
 }
 FUNC_2(VAR_11->caching_ctl);
 VAR_11->caching_ctl = VAR_14;
 VAR_11->cached = VAR_0;
 FUNC_27(&VAR_11->lock);

 if (FUNC_10(VAR_13, VAR_6)) {
  FUNC_20(&VAR_14->mutex);
  VAR_15 = FUNC_18(VAR_11);

  FUNC_26(&VAR_11->lock);
  if (VAR_15 == 1) {
   VAR_11->caching_ctl = ((void*)0);
   VAR_11->cached = VAR_1;
   VAR_11->last_byte_to_unpin = (u64)-1;
   VAR_14->progress = (u64)-1;
  } else {
   if (VAR_12) {
    VAR_11->caching_ctl = ((void*)0);
    VAR_11->cached = VAR_2;
   } else {
    VAR_11->cached = VAR_3;
    VAR_11->has_caching_ctl = 1;
   }
  }
  FUNC_27(&VAR_11->lock);
  FUNC_21(&VAR_14->mutex);

  FUNC_29(&VAR_14->wait);
  if (VAR_15 == 1) {
   FUNC_7(VAR_14);
   FUNC_4(VAR_11);
   return 0;
  }
 } else {




  FUNC_26(&VAR_11->lock);
  if (VAR_12) {
   VAR_11->caching_ctl = ((void*)0);
   VAR_11->cached = VAR_2;
  } else {
   VAR_11->cached = VAR_3;
   VAR_11->has_caching_ctl = 1;
  }
  FUNC_27(&VAR_11->lock);
  FUNC_29(&VAR_14->wait);
 }

 if (VAR_12) {
  FUNC_7(VAR_14);
  return 0;
 }

 FUNC_11(&VAR_13->commit_root_sem);
 FUNC_23(&VAR_14->count);
 FUNC_17(&VAR_14->list, &VAR_13->caching_block_groups);
 FUNC_28(&VAR_13->commit_root_sem);

 FUNC_5(VAR_11);

 FUNC_8(VAR_13->caching_workers, &VAR_14->work);

 return VAR_15;
}
