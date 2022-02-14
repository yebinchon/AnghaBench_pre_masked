
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int delayed_ref_updates; struct btrfs_fs_info* fs_info; } ;
struct btrfs_block_rsv {int lock; scalar_t__ full; int size; } ;
struct btrfs_fs_info {struct btrfs_block_rsv delayed_refs_rsv; } ;


 scalar_t__ FUNC_0 (struct btrfs_fs_info*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct btrfs_trans_handle *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = VAR_0->fs_info;
 struct btrfs_block_rsv *VAR_2 = &VAR_1->delayed_refs_rsv;
 u64 VAR_3;

 if (!VAR_0->delayed_ref_updates)
  return;

 VAR_3 = FUNC_0(VAR_1,
          VAR_0->delayed_ref_updates);
 FUNC_1(&VAR_2->lock);
 VAR_2->size += VAR_3;
 VAR_2->full = 0;
 FUNC_2(&VAR_2->lock);
 VAR_0->delayed_ref_updates = 0;
}
