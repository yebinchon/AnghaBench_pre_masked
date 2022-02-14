
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_raid_bio {int nr_data; int real_stripes; int scrubp; int stripe_npages; int generic_bio_cnt; int dbitmap; int operation; int bio_list; } ;
struct btrfs_fs_info {scalar_t__ sectorsize; } ;
struct btrfs_device {int dummy; } ;
struct btrfs_bio {TYPE_2__* stripes; } ;
struct TYPE_3__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;
struct TYPE_4__ {struct btrfs_device* dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct btrfs_raid_bio*) ;
 scalar_t__ VAR_1 ;
 struct btrfs_raid_bio* FUNC_2 (struct btrfs_fs_info*,struct btrfs_bio*,int ) ;
 int FUNC_3 (int *,struct bio*) ;
 int FUNC_4 (int ,unsigned long*,int) ;

struct btrfs_raid_bio *
FUNC_5(struct btrfs_fs_info *VAR_2, struct bio *VAR_3,
          struct btrfs_bio *VAR_4, u64 VAR_5,
          struct btrfs_device *VAR_6,
          unsigned long *VAR_7, int VAR_8)
{
 struct btrfs_raid_bio *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_2, VAR_4, VAR_5);
 if (FUNC_1(VAR_9))
  return ((void*)0);
 FUNC_3(&VAR_9->bio_list, VAR_3);




 FUNC_0(!VAR_3->bi_iter.bi_size);
 VAR_9->operation = VAR_0;






 for (VAR_10 = VAR_9->nr_data; VAR_10 < VAR_9->real_stripes; VAR_10++) {
  if (VAR_4->stripes[VAR_10].dev == VAR_6) {
   VAR_9->scrubp = VAR_10;
   break;
  }
 }
 FUNC_0(VAR_10 < VAR_9->real_stripes);


 FUNC_0(VAR_2->sectorsize == VAR_1);
 FUNC_0(VAR_9->stripe_npages == VAR_8);
 FUNC_4(VAR_9->dbitmap, VAR_7, VAR_8);





 VAR_9->generic_bio_cnt = 1;

 return VAR_9;
}
