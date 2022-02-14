
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_raid_bio {int faila; int generic_bio_cnt; int bio_list; int operation; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_bio {int dummy; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct btrfs_raid_bio*) ;
 struct btrfs_raid_bio* FUNC_3 (struct btrfs_fs_info*,struct btrfs_bio*,int ) ;
 int FUNC_4 (int *,struct bio*) ;
 int FUNC_5 (struct btrfs_raid_bio*,struct bio*) ;
 int FUNC_6 (struct btrfs_raid_bio*) ;

struct btrfs_raid_bio *
FUNC_7(struct btrfs_fs_info *VAR_1, struct bio *VAR_2,
     struct btrfs_bio *VAR_3, u64 VAR_4)
{
 struct btrfs_raid_bio *VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_4);
 if (FUNC_2(VAR_5))
  return ((void*)0);

 VAR_5->operation = VAR_0;
 FUNC_4(&VAR_5->bio_list, VAR_2);




 FUNC_0(!VAR_2->bi_iter.bi_size);

 VAR_5->faila = FUNC_5(VAR_5, VAR_2);
 if (VAR_5->faila == -1) {
  FUNC_1();
  FUNC_6(VAR_5);
  return ((void*)0);
 }





 VAR_5->generic_bio_cnt = 1;

 return VAR_5;
}
