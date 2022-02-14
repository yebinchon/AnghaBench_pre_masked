
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_root {scalar_t__ orphan_cleanup_state; struct btrfs_fs_info* fs_info; } ;
struct btrfs_block_rsv {TYPE_1__* space_info; } ;
struct btrfs_fs_info {struct btrfs_root* chunk_root; struct btrfs_block_rsv global_block_rsv; } ;
typedef enum btrfs_reserve_flush_enum { ____Placeholder_btrfs_reserve_flush_enum } btrfs_reserve_flush_enum ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct btrfs_fs_info*,TYPE_1__*,int ,int,int) ;
 int FUNC_1 (struct btrfs_block_rsv*,int ) ;
 int FUNC_2 (struct btrfs_fs_info*,TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (struct btrfs_fs_info*,int ) ;
 int FUNC_4 (struct btrfs_fs_info*,char*,int ,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct btrfs_root *VAR_3,
     struct btrfs_block_rsv *VAR_4,
     u64 VAR_5,
     enum btrfs_reserve_flush_enum VAR_6)
{
 struct btrfs_fs_info *VAR_7 = VAR_3->fs_info;
 struct btrfs_block_rsv *VAR_8 = &VAR_7->global_block_rsv;
 int VAR_9;
 bool VAR_10 = (VAR_3 == VAR_7->chunk_root);

 VAR_9 = FUNC_0(VAR_7, VAR_4->space_info,
           VAR_5, VAR_6, VAR_10);
 if (VAR_9 == -VAR_0 &&
     FUNC_5(VAR_3->orphan_cleanup_state == VAR_2)) {
  if (VAR_4 != VAR_8 &&
      !FUNC_1(VAR_8, VAR_5))
   VAR_9 = 0;
 }
 if (VAR_9 == -VAR_0) {
  FUNC_4(VAR_7, "space_info:enospc",
           VAR_4->space_info->flags,
           VAR_5, 1);

  if (FUNC_3(VAR_7, VAR_1))
   FUNC_2(VAR_7, VAR_4->space_info,
           VAR_5, 0);
 }
 return VAR_9;
}
