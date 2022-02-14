
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_rsv {int dummy; } ;


 int FUNC_0 (struct btrfs_fs_info*,struct btrfs_block_rsv*,int ) ;
 int FUNC_1 (struct btrfs_block_rsv*) ;

void FUNC_2(struct btrfs_fs_info *VAR_0,
     struct btrfs_block_rsv *VAR_1)
{
 if (!VAR_1)
  return;
 FUNC_0(VAR_0, VAR_1, (u64)-1);
 FUNC_1(VAR_1);
}
