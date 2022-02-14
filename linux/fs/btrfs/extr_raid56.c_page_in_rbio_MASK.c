
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct btrfs_raid_bio {int stripe_len; struct page** stripe_pages; int bio_list_lock; struct page** bio_pages; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static struct page *FUNC_2(struct btrfs_raid_bio *VAR_1,
     int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 struct page *VAR_6 = ((void*)0);

 VAR_5 = VAR_2 * (VAR_1->stripe_len >> VAR_0) + VAR_3;

 FUNC_0(&VAR_1->bio_list_lock);
 VAR_6 = VAR_1->bio_pages[VAR_5];
 FUNC_1(&VAR_1->bio_list_lock);

 if (VAR_6 || VAR_4)
  return VAR_6;

 return VAR_1->stripe_pages[VAR_5];
}
