
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_raid_bio {scalar_t__ operation; int error; TYPE_1__* bbio; int stripes_pending; } ;
struct bio {scalar_t__ bi_status; struct btrfs_raid_bio* bi_private; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_2__ {int max_errors; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct btrfs_raid_bio*,struct bio*) ;
 int FUNC_4 (struct btrfs_raid_bio*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct bio *VAR_3)
{
 struct btrfs_raid_bio *VAR_4 = VAR_3->bi_private;
 blk_status_t VAR_5 = VAR_3->bi_status;
 int VAR_6;

 if (VAR_5)
  FUNC_3(VAR_4, VAR_3);

 FUNC_2(VAR_3);

 if (!FUNC_0(&VAR_4->stripes_pending))
  return;

 VAR_5 = VAR_1;


 VAR_6 = (VAR_4->operation == VAR_2) ?
       0 : VAR_4->bbio->max_errors;
 if (FUNC_1(&VAR_4->error) > VAR_6)
  VAR_5 = VAR_0;

 FUNC_4(VAR_4, VAR_5);
}
