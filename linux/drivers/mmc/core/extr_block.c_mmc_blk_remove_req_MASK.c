
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ boot_ro_lockable; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;
struct TYPE_6__ {struct mmc_card* card; } ;
struct mmc_blk_data {int area_type; TYPE_2__ queue; TYPE_3__* disk; int power_ro_lock; int force_ro; } ;
struct TYPE_7__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct mmc_blk_data*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(struct mmc_blk_data *VAR_2)
{
 struct mmc_card *VAR_3;

 if (VAR_2) {





  VAR_3 = VAR_2->queue.card;
  if (VAR_2->disk->flags & VAR_0) {
   FUNC_1(FUNC_2(VAR_2->disk), &VAR_2->force_ro);
   if ((VAR_2->area_type & VAR_1) &&
     VAR_3->ext_csd.boot_ro_lockable)
    FUNC_1(FUNC_2(VAR_2->disk),
     &VAR_2->power_ro_lock);

   FUNC_0(VAR_2->disk);
  }
  FUNC_4(&VAR_2->queue);
  FUNC_3(VAR_2);
 }
}
