
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cd_irq; } ;
struct mmc_host {int rescan_disable; TYPE_1__* bus_ops; int bus_dead; scalar_t__ pm_flags; int detect; TYPE_2__ slot; } ;
struct TYPE_3__ {int (* remove ) (struct mmc_host*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*,int) ;
 int FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (struct mmc_host*) ;

void FUNC_10(struct mmc_host *VAR_0)
{
 if (VAR_0->slot.cd_irq >= 0) {
  FUNC_6(VAR_0, 0);
  FUNC_1(VAR_0->slot.cd_irq);
 }

 VAR_0->rescan_disable = 1;
 FUNC_0(&VAR_0->detect);


 VAR_0->pm_flags = 0;

 FUNC_2(VAR_0);
 if (VAR_0->bus_ops && !VAR_0->bus_dead) {

  VAR_0->bus_ops->remove(VAR_0);
  FUNC_4(VAR_0);
  FUNC_5(VAR_0);
  FUNC_7(VAR_0);
  FUNC_8(VAR_0);
  FUNC_3(VAR_0);
  return;
 }
 FUNC_3(VAR_0);

 FUNC_4(VAR_0);
 FUNC_7(VAR_0);
 FUNC_8(VAR_0);
}
