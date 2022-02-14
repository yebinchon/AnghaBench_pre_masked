
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {int nr_pages; int bbio; int ** stripe_pages; int bio_list; int hash_list; int stripe_cache; int refs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct btrfs_raid_bio*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct btrfs_raid_bio *VAR_0)
{
 int VAR_1;

 if (!FUNC_6(&VAR_0->refs))
  return;

 FUNC_0(!FUNC_5(&VAR_0->stripe_cache));
 FUNC_0(!FUNC_5(&VAR_0->hash_list));
 FUNC_0(!FUNC_2(&VAR_0->bio_list));

 for (VAR_1 = 0; VAR_1 < VAR_0->nr_pages; VAR_1++) {
  if (VAR_0->stripe_pages[VAR_1]) {
   FUNC_1(VAR_0->stripe_pages[VAR_1]);
   VAR_0->stripe_pages[VAR_1] = ((void*)0);
  }
 }

 FUNC_3(VAR_0->bbio);
 FUNC_4(VAR_0);
}
