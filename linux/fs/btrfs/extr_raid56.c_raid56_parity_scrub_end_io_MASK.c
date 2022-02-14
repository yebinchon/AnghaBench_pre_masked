
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_raid_bio {int stripes_pending; } ;
struct bio {scalar_t__ bi_status; struct btrfs_raid_bio* bi_private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct btrfs_raid_bio*,struct bio*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct btrfs_raid_bio*) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_0)
{
 struct btrfs_raid_bio *VAR_1 = VAR_0->bi_private;

 if (VAR_0->bi_status)
  FUNC_2(VAR_1, VAR_0);
 else
  FUNC_3(VAR_0);

 FUNC_1(VAR_0);

 if (!FUNC_0(&VAR_1->stripes_pending))
  return;






 FUNC_4(VAR_1);
}
