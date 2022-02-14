
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_raid_bio {int nr_data; int stripe_len; TYPE_2__* bbio; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
struct TYPE_4__ {int* raid_map; } ;



__attribute__((used)) static int FUNC_0(struct btrfs_raid_bio *VAR_0,
       struct bio *VAR_1)
{
 u64 VAR_2 = VAR_1->bi_iter.bi_sector;
 u64 VAR_3;
 int VAR_4;

 VAR_2 <<= 9;

 for (VAR_4 = 0; VAR_4 < VAR_0->nr_data; VAR_4++) {
  VAR_3 = VAR_0->bbio->raid_map[VAR_4];
  if (VAR_2 >= VAR_3 &&
      VAR_2 < VAR_3 + VAR_0->stripe_len) {
   return VAR_4;
  }
 }
 return -1;
}
