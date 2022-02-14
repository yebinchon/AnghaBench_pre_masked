
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_raid_bio {scalar_t__ faila; scalar_t__ failb; int scrubp; TYPE_1__* bbio; int error; } ;
struct TYPE_2__ {scalar_t__ max_errors; } ;


 int VAR_0 ;
 int FUNC_0 (struct btrfs_raid_bio*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_raid_bio*,int) ;
 scalar_t__ FUNC_3 (struct btrfs_raid_bio*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct btrfs_raid_bio*,int ) ;

__attribute__((used)) static void FUNC_6(struct btrfs_raid_bio *VAR_1)
{
 if (FUNC_1(&VAR_1->error) > VAR_1->bbio->max_errors)
  goto cleanup;

 if (VAR_1->faila >= 0 || VAR_1->failb >= 0) {
  int VAR_2 = 0, VAR_3 = -1;

  if (FUNC_3(VAR_1, VAR_1->faila))
   VAR_2++;
  else if (FUNC_4(VAR_1->faila))
   VAR_3 = VAR_1->faila;

  if (FUNC_3(VAR_1, VAR_1->failb))
   VAR_2++;
  else if (FUNC_4(VAR_1->failb))
   VAR_3 = VAR_1->failb;






  if (VAR_2 > VAR_1->bbio->max_errors - 1)
   goto cleanup;





  if (VAR_2 == 0) {
   FUNC_2(VAR_1, 0);
   return;
  }







  if (VAR_3 != VAR_1->scrubp)
   goto cleanup;

  FUNC_0(VAR_1);
 } else {
  FUNC_2(VAR_1, 1);
 }
 return;

cleanup:
 FUNC_5(VAR_1, VAR_0);
}
