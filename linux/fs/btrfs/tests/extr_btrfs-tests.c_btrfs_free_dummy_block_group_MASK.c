
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_block_group_cache {struct btrfs_block_group_cache* free_space_ctl; } ;


 int FUNC_0 (struct btrfs_block_group_cache*) ;
 int FUNC_1 (struct btrfs_block_group_cache*) ;

void FUNC_2(struct btrfs_block_group_cache *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_0(VAR_0->free_space_ctl);
 FUNC_1(VAR_0->free_space_ctl);
 FUNC_1(VAR_0);
}
