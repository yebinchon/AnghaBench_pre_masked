
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct btrfs_raid_bio {int nr_pages; struct page** stripe_pages; int flags; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct btrfs_raid_bio *VAR_1, struct btrfs_raid_bio *VAR_2)
{
 int VAR_3;
 struct page *VAR_4;
 struct page *VAR_5;

 if (!FUNC_2(VAR_0, &VAR_1->flags))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2->nr_pages; VAR_3++) {
  VAR_4 = VAR_1->stripe_pages[VAR_3];
  if (!VAR_4 || !FUNC_0(VAR_4)) {
   continue;
  }

  VAR_5 = VAR_2->stripe_pages[VAR_3];
  if (VAR_5)
   FUNC_1(VAR_5);

  VAR_2->stripe_pages[VAR_3] = VAR_4;
  VAR_1->stripe_pages[VAR_3] = ((void*)0);
 }
}
