
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_trans_handle {TYPE_2__* transaction; int delayed_ref_updates; struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int pinned_extents; int delalloc_root_lock; int super_copy; } ;
struct TYPE_4__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {scalar_t__ cached; scalar_t__ disk_cache_state; scalar_t__ reserved; scalar_t__ pinned; int dirty_list; TYPE_3__* space_info; int lock; int item; TYPE_1__ key; int flags; } ;
struct TYPE_6__ {scalar_t__ bytes_reserved; scalar_t__ bytes_used; scalar_t__ disk_used; int total_bytes_pinned; int lock; } ;
struct TYPE_5__ {int dirty_bgs_lock; int dirty_bgs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_block_group_cache*,int) ;
 int FUNC_4 (struct btrfs_block_group_cache*) ;
 struct btrfs_block_group_cache* FUNC_5 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_6 (struct btrfs_block_group_cache*) ;
 int FUNC_7 (struct btrfs_block_group_cache*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (struct btrfs_fs_info*,TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (struct btrfs_fs_info*,int ) ;
 int FUNC_13 (struct btrfs_trans_handle*) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int FUNC_17 (int *,scalar_t__,int ) ;
 int FUNC_18 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct btrfs_trans_handle *VAR_7,
        u64 VAR_8, u64 VAR_9, int VAR_10)
{
 struct btrfs_fs_info *VAR_11 = VAR_7->fs_info;
 struct btrfs_block_group_cache *VAR_12 = ((void*)0);
 u64 VAR_13 = VAR_9;
 u64 VAR_14;
 u64 VAR_15;
 int VAR_16;
 int VAR_17 = 0;


 FUNC_19(&VAR_11->delalloc_root_lock);
 VAR_14 = FUNC_11(VAR_11->super_copy);
 if (VAR_10)
  VAR_14 += VAR_9;
 else
  VAR_14 -= VAR_9;
 FUNC_9(VAR_11->super_copy, VAR_14);
 FUNC_20(&VAR_11->delalloc_root_lock);

 while (VAR_13) {
  VAR_12 = FUNC_5(VAR_11, VAR_8);
  if (!VAR_12) {
   VAR_17 = -VAR_3;
   break;
  }
  VAR_16 = FUNC_1(VAR_12->flags);







  if (!VAR_10 && VAR_12->cached == VAR_0)
   FUNC_3(VAR_12, 1);

  VAR_15 = VAR_8 - VAR_12->key.objectid;
  FUNC_0(VAR_15 > VAR_12->key.offset);

  FUNC_19(&VAR_12->space_info->lock);
  FUNC_19(&VAR_12->lock);

  if (FUNC_12(VAR_11, VAR_5) &&
      VAR_12->disk_cache_state < VAR_1)
   VAR_12->disk_cache_state = VAR_1;

  VAR_14 = FUNC_2(&VAR_12->item);
  VAR_9 = FUNC_16(VAR_13, VAR_12->key.offset - VAR_15);
  if (VAR_10) {
   VAR_14 += VAR_9;
   FUNC_8(&VAR_12->item, VAR_14);
   VAR_12->reserved -= VAR_9;
   VAR_12->space_info->bytes_reserved -= VAR_9;
   VAR_12->space_info->bytes_used += VAR_9;
   VAR_12->space_info->disk_used += VAR_9 * VAR_16;
   FUNC_20(&VAR_12->lock);
   FUNC_20(&VAR_12->space_info->lock);
  } else {
   VAR_14 -= VAR_9;
   FUNC_8(&VAR_12->item, VAR_14);
   VAR_12->pinned += VAR_9;
   FUNC_10(VAR_11,
     VAR_12->space_info, VAR_9);
   VAR_12->space_info->bytes_used -= VAR_9;
   VAR_12->space_info->disk_used -= VAR_9 * VAR_16;
   FUNC_20(&VAR_12->lock);
   FUNC_20(&VAR_12->space_info->lock);

   FUNC_17(
     &VAR_12->space_info->total_bytes_pinned,
     VAR_9,
     VAR_2);
   FUNC_18(VAR_11->pinned_extents,
      VAR_8, VAR_8 + VAR_9 - 1,
      VAR_4 | VAR_6);
  }

  FUNC_19(&VAR_7->transaction->dirty_bgs_lock);
  if (FUNC_15(&VAR_12->dirty_list)) {
   FUNC_14(&VAR_12->dirty_list,
          &VAR_7->transaction->dirty_bgs);
   VAR_7->delayed_ref_updates++;
   FUNC_4(VAR_12);
  }
  FUNC_20(&VAR_7->transaction->dirty_bgs_lock);







  if (!VAR_10 && VAR_14 == 0)
   FUNC_6(VAR_12);

  FUNC_7(VAR_12);
  VAR_13 -= VAR_9;
  VAR_8 += VAR_9;
 }


 FUNC_13(VAR_7);
 return VAR_17;
}
