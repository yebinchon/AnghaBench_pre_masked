
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mmc_gpio* handler_priv; } ;
struct mmc_host {TYPE_1__ slot; } ;
struct mmc_gpio {scalar_t__ cd_gpio; } ;



bool FUNC_0(struct mmc_host *VAR_0)
{
 struct mmc_gpio *VAR_1 = VAR_0->slot.handler_priv;

 return VAR_1->cd_gpio ? 1 : 0;
}
