
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cd_irq; int cd_wake_enabled; } ;
struct mmc_host {int caps; TYPE_1__ slot; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct mmc_host *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;

 if (!(VAR_1->caps & VAR_0) ||
     VAR_1->slot.cd_irq < 0 ||
     VAR_2 == VAR_1->slot.cd_wake_enabled)
  return 0;

 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_1->slot.cd_irq);
  VAR_1->slot.cd_wake_enabled = !VAR_3;
 } else {
  FUNC_0(VAR_1->slot.cd_irq);
  VAR_1->slot.cd_wake_enabled = 0;
 }

 return VAR_3;
}
