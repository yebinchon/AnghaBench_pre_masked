
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_omap_slot {TYPE_1__* host; int cover_timer; int cover_tasklet; TYPE_2__* pdata; struct mmc_host* mmc; } ;
struct mmc_host {int class_dev; } ;
struct TYPE_4__ {int * get_cover_state; int * name; } ;
struct TYPE_3__ {int mmc_omap_wq; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mmc_omap_slot *VAR_2)
{
 struct mmc_host *VAR_3 = VAR_2->mmc;

 if (VAR_2->pdata->name != ((void*)0))
  FUNC_1(&VAR_3->class_dev, &VAR_1);
 if (VAR_2->pdata->get_cover_state != ((void*)0))
  FUNC_1(&VAR_3->class_dev, &VAR_0);

 FUNC_5(&VAR_2->cover_tasklet);
 FUNC_0(&VAR_2->cover_timer);
 FUNC_2(VAR_2->host->mmc_omap_wq);

 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
}
