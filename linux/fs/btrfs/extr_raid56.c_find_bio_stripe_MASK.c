
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_raid_bio {int stripe_len; TYPE_2__* bbio; } ;
struct btrfs_bio_stripe {int physical; TYPE_4__* dev; } ;
struct TYPE_5__ {int bi_sector; } ;
struct bio {scalar_t__ bi_disk; scalar_t__ bi_partno; TYPE_1__ bi_iter; } ;
struct TYPE_8__ {TYPE_3__* bdev; } ;
struct TYPE_7__ {scalar_t__ bd_disk; scalar_t__ bd_partno; } ;
struct TYPE_6__ {int num_stripes; struct btrfs_bio_stripe* stripes; } ;



__attribute__((used)) static int FUNC_0(struct btrfs_raid_bio *VAR_0,
      struct bio *VAR_1)
{
 u64 VAR_2 = VAR_1->bi_iter.bi_sector;
 u64 VAR_3;
 int VAR_4;
 struct btrfs_bio_stripe *VAR_5;

 VAR_2 <<= 9;

 for (VAR_4 = 0; VAR_4 < VAR_0->bbio->num_stripes; VAR_4++) {
  VAR_5 = &VAR_0->bbio->stripes[VAR_4];
  VAR_3 = VAR_5->physical;
  if (VAR_2 >= VAR_3 &&
      VAR_2 < VAR_3 + VAR_0->stripe_len &&
      VAR_5->dev->bdev &&
      VAR_1->bi_disk == VAR_5->dev->bdev->bd_disk &&
      VAR_1->bi_partno == VAR_5->dev->bdev->bd_partno) {
   return VAR_4;
  }
 }
 return -1;
}
