
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_block_group_cache {int nocow_writers; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct btrfs_block_group_cache *VAR_0)
{
 FUNC_1(&VAR_0->nocow_writers, !FUNC_0(&VAR_0->nocow_writers));
}
