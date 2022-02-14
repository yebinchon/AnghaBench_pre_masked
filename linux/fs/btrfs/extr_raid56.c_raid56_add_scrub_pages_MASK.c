
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct btrfs_raid_bio {int stripe_len; int nr_data; struct page** bio_pages; TYPE_1__* bbio; } ;
struct TYPE_2__ {scalar_t__* raid_map; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(struct btrfs_raid_bio *VAR_2, struct page *VAR_3,
       u64 VAR_4)
{
 int VAR_5;
 int VAR_6;

 FUNC_0(VAR_4 >= VAR_2->bbio->raid_map[0]);
 FUNC_0(VAR_4 + VAR_1 <= VAR_2->bbio->raid_map[0] +
    VAR_2->stripe_len * VAR_2->nr_data);
 VAR_5 = (int)(VAR_4 - VAR_2->bbio->raid_map[0]);
 VAR_6 = VAR_5 >> VAR_0;
 VAR_2->bio_pages[VAR_6] = VAR_3;
}
