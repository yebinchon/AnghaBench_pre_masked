
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_block_group_cache {int free_space_ctl; int fs_info; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

int FUNC_1(struct btrfs_block_group_cache *VAR_0,
    u64 VAR_1, u64 VAR_2)
{
 return FUNC_0(VAR_0->fs_info,
          VAR_0->free_space_ctl,
          VAR_1, VAR_2);
}
