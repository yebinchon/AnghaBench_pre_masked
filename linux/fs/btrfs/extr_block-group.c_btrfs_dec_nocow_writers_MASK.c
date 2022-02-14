
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_block_group_cache {int nocow_writers; } ;


 int FUNC_0 (struct btrfs_block_group_cache*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct btrfs_block_group_cache* FUNC_2 (struct btrfs_fs_info*,int ) ;
 int FUNC_3 (struct btrfs_block_group_cache*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct btrfs_fs_info *VAR_0, u64 VAR_1)
{
 struct btrfs_block_group_cache *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_0(VAR_2);
 if (FUNC_1(&VAR_2->nocow_writers))
  FUNC_4(&VAR_2->nocow_writers);




 FUNC_3(VAR_2);
 FUNC_3(VAR_2);
}
