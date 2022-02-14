
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cd_irq; struct mmc_gpio* handler_priv; } ;
struct mmc_host {TYPE_1__ slot; int parent; } ;
struct mmc_gpio {int cd_debounce_delay_ms; void* ro_label; void* cd_label; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ,char*,int ) ;
 struct mmc_gpio* FUNC_2 (int ,int,int ) ;

int FUNC_3(struct mmc_host *VAR_3)
{
 struct mmc_gpio *VAR_4 = FUNC_2(VAR_3->parent,
         sizeof(*VAR_4), VAR_2);

 if (VAR_4) {
  VAR_4->cd_debounce_delay_ms = 200;
  VAR_4->cd_label = FUNC_1(VAR_3->parent, VAR_2,
    "%s cd", FUNC_0(VAR_3->parent));
  if (!VAR_4->cd_label)
   return -VAR_1;
  VAR_4->ro_label = FUNC_1(VAR_3->parent, VAR_2,
    "%s ro", FUNC_0(VAR_3->parent));
  if (!VAR_4->ro_label)
   return -VAR_1;
  VAR_3->slot.handler_priv = VAR_4;
  VAR_3->slot.cd_irq = -VAR_0;
 }

 return VAR_4 ? 0 : -VAR_1;
}
