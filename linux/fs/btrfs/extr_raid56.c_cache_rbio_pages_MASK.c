
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {int nr_pages; int flags; int * stripe_pages; int * bio_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct btrfs_raid_bio*) ;
 int FUNC_2 (char*,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct btrfs_raid_bio *VAR_1)
{
 int VAR_2;
 char *VAR_3;
 char *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->nr_pages; VAR_2++) {
  if (!VAR_1->bio_pages[VAR_2])
   continue;

  VAR_3 = FUNC_3(VAR_1->bio_pages[VAR_2]);
  VAR_4 = FUNC_3(VAR_1->stripe_pages[VAR_2]);

  FUNC_2(VAR_4, VAR_3);

  FUNC_4(VAR_1->bio_pages[VAR_2]);
  FUNC_4(VAR_1->stripe_pages[VAR_2]);
  FUNC_0(VAR_1->stripe_pages[VAR_2]);
 }
 FUNC_5(VAR_0, &VAR_1->flags);
}
