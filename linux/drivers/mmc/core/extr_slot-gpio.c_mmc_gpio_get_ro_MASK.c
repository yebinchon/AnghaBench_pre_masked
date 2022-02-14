
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mmc_gpio* handler_priv; } ;
struct mmc_host {TYPE_1__ slot; } ;
struct mmc_gpio {int ro_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct mmc_host *VAR_1)
{
 struct mmc_gpio *VAR_2 = VAR_1->slot.handler_priv;

 if (!VAR_2 || !VAR_2->ro_gpio)
  return -VAR_0;

 return FUNC_0(VAR_2->ro_gpio);
}
