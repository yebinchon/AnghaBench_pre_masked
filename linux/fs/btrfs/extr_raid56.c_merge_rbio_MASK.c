
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {int bio_list; scalar_t__ generic_bio_cnt; scalar_t__ bio_list_bytes; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct btrfs_raid_bio *VAR_0,
         struct btrfs_raid_bio *VAR_1)
{
 FUNC_1(&VAR_0->bio_list, &VAR_1->bio_list);
 VAR_0->bio_list_bytes += VAR_1->bio_list_bytes;
 VAR_0->generic_bio_cnt += VAR_1->generic_bio_cnt;
 FUNC_0(&VAR_1->bio_list);
}
