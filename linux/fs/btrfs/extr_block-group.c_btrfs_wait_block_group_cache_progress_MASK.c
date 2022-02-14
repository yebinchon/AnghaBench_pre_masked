
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_caching_control {int wait; } ;
struct btrfs_block_group_cache {TYPE_1__* free_space_ctl; } ;
struct TYPE_2__ {scalar_t__ free_space; } ;


 scalar_t__ FUNC_0 (struct btrfs_block_group_cache*) ;
 struct btrfs_caching_control* FUNC_1 (struct btrfs_block_group_cache*) ;
 int FUNC_2 (struct btrfs_caching_control*) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct btrfs_block_group_cache *VAR_0,
        u64 VAR_1)
{
 struct btrfs_caching_control *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return;

 FUNC_3(VAR_2->wait, FUNC_0(VAR_0) ||
     (VAR_0->free_space_ctl->free_space >= VAR_1));

 FUNC_2(VAR_2);
}
