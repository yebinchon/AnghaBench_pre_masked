
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mmc_gpio* handler_priv; } ;
struct mmc_host {int trigger_card_event; TYPE_1__ slot; } ;
struct mmc_gpio {int cd_debounce_delay_ms; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{

 struct mmc_host *VAR_3 = VAR_2;
 struct mmc_gpio *VAR_4 = VAR_3->slot.handler_priv;

 VAR_3->trigger_card_event = 1;
 FUNC_0(VAR_3, FUNC_1(VAR_4->cd_debounce_delay_ms));

 return VAR_0;
}
