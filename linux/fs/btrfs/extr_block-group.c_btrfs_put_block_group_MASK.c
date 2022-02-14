
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int root; } ;
struct btrfs_block_group_cache {scalar_t__ pinned; scalar_t__ reserved; struct btrfs_block_group_cache* free_space_ctl; TYPE_1__ full_stripe_locks_root; int count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct btrfs_block_group_cache*) ;

void FUNC_4(struct btrfs_block_group_cache *VAR_0)
{
 if (FUNC_2(&VAR_0->count)) {
  FUNC_1(VAR_0->pinned > 0);
  FUNC_1(VAR_0->reserved > 0);
  FUNC_1(!FUNC_0(&VAR_0->full_stripe_locks_root.root));
  FUNC_3(VAR_0->free_space_ctl);
  FUNC_3(VAR_0);
 }
}
