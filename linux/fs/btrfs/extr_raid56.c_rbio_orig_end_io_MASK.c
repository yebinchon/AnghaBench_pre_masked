
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {int bio_list; scalar_t__ generic_bio_cnt; int fs_info; } ;
struct bio {int dummy; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct btrfs_raid_bio*) ;
 struct bio* FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct btrfs_raid_bio*) ;

__attribute__((used)) static void FUNC_5(struct btrfs_raid_bio *VAR_0, blk_status_t VAR_1)
{
 struct bio *VAR_2 = FUNC_1(&VAR_0->bio_list);
 struct bio *VAR_3;

 if (VAR_0->generic_bio_cnt)
  FUNC_2(VAR_0->fs_info, VAR_0->generic_bio_cnt);
 FUNC_4(VAR_0);
 VAR_3 = FUNC_1(&VAR_0->bio_list);
 FUNC_0(VAR_0);

 FUNC_3(VAR_2, VAR_1);
 if (VAR_3)
  FUNC_3(VAR_3, VAR_1);
}
