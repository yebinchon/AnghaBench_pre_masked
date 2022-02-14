
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mmc_gpio* handler_priv; } ;
struct mmc_host {int caps2; TYPE_1__ slot; } ;
struct mmc_gpio {int cd_gpio; scalar_t__ override_cd_active_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct mmc_host *VAR_2)
{
 struct mmc_gpio *VAR_3 = VAR_2->slot.handler_priv;
 int VAR_4;

 if (!VAR_3 || !VAR_3->cd_gpio)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3->cd_gpio);
 if (VAR_3->override_cd_active_level) {
  int VAR_5 = VAR_4 ?
    FUNC_2(VAR_3->cd_gpio) :
    FUNC_1(VAR_3->cd_gpio);
  return !VAR_5 ^ !!(VAR_2->caps2 & VAR_1);
 }

 return VAR_4 ?
  FUNC_4(VAR_3->cd_gpio) :
  FUNC_3(VAR_3->cd_gpio);
}
