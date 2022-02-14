
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct btrfs_raid_bio {int nr_pages; struct page** stripe_pages; int nr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct page* FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_raid_bio*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct btrfs_raid_bio *VAR_3)
{
 int VAR_4;
 struct page *VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_3->nr_data, 0);

 for (; VAR_4 < VAR_3->nr_pages; VAR_4++) {
  if (VAR_3->stripe_pages[VAR_4])
   continue;
  VAR_5 = FUNC_0(VAR_1 | VAR_2);
  if (!VAR_5)
   return -VAR_0;
  VAR_3->stripe_pages[VAR_4] = VAR_5;
 }
 return 0;
}
