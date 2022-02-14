
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mxcmci_host {scalar_t__ power_mode; TYPE_3__* mmc; TYPE_1__* pdata; } ;
struct TYPE_6__ {int vmmc; } ;
struct TYPE_7__ {TYPE_2__ supply; } ;
struct TYPE_5__ {int (* setpower ) (int ,unsigned int) ;} ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct mxcmci_host *VAR_2, unsigned int VAR_3)
{
 if (!FUNC_0(VAR_2->mmc->supply.vmmc)) {
  if (VAR_2->power_mode == VAR_1)
   FUNC_2(VAR_2->mmc,
           VAR_2->mmc->supply.vmmc, VAR_3);
  else if (VAR_2->power_mode == VAR_0)
   FUNC_2(VAR_2->mmc,
           VAR_2->mmc->supply.vmmc, 0);
 }

 if (VAR_2->pdata && VAR_2->pdata->setpower)
  VAR_2->pdata->setpower(FUNC_1(VAR_2->mmc), VAR_3);
}
