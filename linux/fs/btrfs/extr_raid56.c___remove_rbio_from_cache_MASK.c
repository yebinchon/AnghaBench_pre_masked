
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_stripe_hash_table {int cache_size; struct btrfs_stripe_hash* table; } ;
struct btrfs_stripe_hash {int lock; } ;
struct btrfs_raid_bio {int bio_list_lock; int plug_list; int refs; int hash_list; int bio_list; int stripe_cache; int flags; TYPE_1__* fs_info; } ;
struct TYPE_2__ {struct btrfs_stripe_hash_table* stripe_hash_table; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_raid_bio*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct btrfs_raid_bio*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct btrfs_raid_bio *VAR_1)
{
 int VAR_2 = FUNC_5(VAR_1);
 struct btrfs_stripe_hash_table *VAR_3;
 struct btrfs_stripe_hash *VAR_4;
 int VAR_5 = 0;




 if (!FUNC_10(VAR_0, &VAR_1->flags))
  return;

 VAR_3 = VAR_1->fs_info->stripe_hash_table;
 VAR_4 = VAR_3->table + VAR_2;




 FUNC_7(&VAR_4->lock);





 FUNC_7(&VAR_1->bio_list_lock);

 if (FUNC_9(VAR_0, &VAR_1->flags)) {
  FUNC_3(&VAR_1->stripe_cache);
  VAR_3->cache_size -= 1;
  VAR_5 = 1;
  if (FUNC_2(&VAR_1->bio_list)) {
   if (!FUNC_4(&VAR_1->hash_list)) {
    FUNC_3(&VAR_1->hash_list);
    FUNC_6(&VAR_1->refs);
    FUNC_0(!FUNC_4(&VAR_1->plug_list));
   }
  }
 }

 FUNC_8(&VAR_1->bio_list_lock);
 FUNC_8(&VAR_4->lock);

 if (VAR_5)
  FUNC_1(VAR_1);
}
