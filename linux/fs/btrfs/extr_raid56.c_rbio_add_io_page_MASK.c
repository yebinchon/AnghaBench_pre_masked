
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct btrfs_raid_bio {TYPE_1__* bbio; } ;
struct btrfs_bio_stripe {int physical; TYPE_2__* dev; } ;
struct bio_list {struct bio* tail; } ;
struct TYPE_7__ {int bi_sector; scalar_t__ bi_size; } ;
struct bio {scalar_t__ bi_disk; scalar_t__ bi_partno; TYPE_3__ bi_iter; int bi_status; } ;
struct TYPE_8__ {scalar_t__ bd_disk; scalar_t__ bd_partno; } ;
struct TYPE_6__ {TYPE_4__* bdev; } ;
struct TYPE_5__ {struct btrfs_bio_stripe* stripes; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,struct page*,int,int ) ;
 int FUNC_1 (struct bio_list*,struct bio*) ;
 int FUNC_2 (struct bio*,TYPE_4__*) ;
 struct bio* FUNC_3 (int) ;
 int FUNC_4 (struct btrfs_raid_bio*,int) ;

__attribute__((used)) static int FUNC_5(struct btrfs_raid_bio *VAR_2,
       struct bio_list *VAR_3,
       struct page *VAR_4,
       int VAR_5,
       unsigned long VAR_6,
       unsigned long VAR_7)
{
 struct bio *VAR_8 = VAR_3->tail;
 u64 VAR_9 = 0;
 int VAR_10;
 struct bio *VAR_11;
 struct btrfs_bio_stripe *VAR_12;
 u64 VAR_13;

 VAR_12 = &VAR_2->bbio->stripes[VAR_5];
 VAR_13 = VAR_12->physical + (VAR_6 << VAR_0);


 if (!VAR_12->dev->bdev)
  return FUNC_4(VAR_2, VAR_5);


 if (VAR_8) {
  VAR_9 = (u64)VAR_8->bi_iter.bi_sector << 9;
  VAR_9 += VAR_8->bi_iter.bi_size;





  if (VAR_9 == VAR_13 && VAR_12->dev->bdev &&
      !VAR_8->bi_status &&
      VAR_8->bi_disk == VAR_12->dev->bdev->bd_disk &&
      VAR_8->bi_partno == VAR_12->dev->bdev->bd_partno) {
   VAR_10 = FUNC_0(VAR_8, VAR_4, VAR_1, 0);
   if (VAR_10 == VAR_1)
    return 0;
  }
 }


 VAR_11 = FUNC_3(VAR_7 >> VAR_0 ?: 1);
 VAR_11->bi_iter.bi_size = 0;
 FUNC_2(VAR_11, VAR_12->dev->bdev);
 VAR_11->bi_iter.bi_sector = VAR_13 >> 9;

 FUNC_0(VAR_11, VAR_4, VAR_1, 0);
 FUNC_1(VAR_3, VAR_11);
 return 0;
}
