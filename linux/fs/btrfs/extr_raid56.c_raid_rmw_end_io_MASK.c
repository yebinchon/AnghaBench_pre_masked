
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_raid_bio {TYPE_1__* bbio; int error; int stripes_pending; } ;
struct bio {scalar_t__ bi_status; struct btrfs_raid_bio* bi_private; } ;
struct TYPE_2__ {scalar_t__ max_errors; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct btrfs_raid_bio*,struct bio*) ;
 int FUNC_4 (struct btrfs_raid_bio*,int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct btrfs_raid_bio*) ;

__attribute__((used)) static void FUNC_7(struct bio *VAR_1)
{
 struct btrfs_raid_bio *VAR_2 = VAR_1->bi_private;

 if (VAR_1->bi_status)
  FUNC_3(VAR_2, VAR_1);
 else
  FUNC_5(VAR_1);

 FUNC_2(VAR_1);

 if (!FUNC_0(&VAR_2->stripes_pending))
  return;

 if (FUNC_1(&VAR_2->error) > VAR_2->bbio->max_errors)
  goto cleanup;






 FUNC_6(VAR_2);
 return;

cleanup:

 FUNC_4(VAR_2, VAR_0);
}
