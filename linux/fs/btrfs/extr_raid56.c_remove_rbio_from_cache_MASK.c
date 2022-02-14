
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_stripe_hash_table {int cache_lock; } ;
struct btrfs_raid_bio {TYPE_1__* fs_info; int flags; } ;
struct TYPE_2__ {struct btrfs_stripe_hash_table* stripe_hash_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_raid_bio*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct btrfs_raid_bio *VAR_1)
{
 struct btrfs_stripe_hash_table *VAR_2;
 unsigned long VAR_3;

 if (!FUNC_3(VAR_0, &VAR_1->flags))
  return;

 VAR_2 = VAR_1->fs_info->stripe_hash_table;

 FUNC_1(&VAR_2->cache_lock, VAR_3);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_2->cache_lock, VAR_3);
}
