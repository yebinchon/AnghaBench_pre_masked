
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cd_irq; struct mmc_gpio* handler_priv; } ;
struct mmc_host {int caps; TYPE_1__ slot; int parent; } ;
struct mmc_gpio {int cd_label; scalar_t__ cd_gpio_isr; int cd_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int *,scalar_t__,int,int ,struct mmc_host*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;

void FUNC_2(struct mmc_host *VAR_6)
{
 struct mmc_gpio *VAR_7 = VAR_6->slot.handler_priv;
 int VAR_8 = -VAR_0;
 int VAR_9;

 if (VAR_6->slot.cd_irq >= 0 || !VAR_7 || !VAR_7->cd_gpio)
  return;





 if (!(VAR_6->caps & VAR_4))
  VAR_8 = FUNC_1(VAR_7->cd_gpio);

 if (VAR_8 >= 0) {
  if (!VAR_7->cd_gpio_isr)
   VAR_7->cd_gpio_isr = VAR_5;
  VAR_9 = FUNC_0(VAR_6->parent, VAR_8,
   ((void*)0), VAR_7->cd_gpio_isr,
   VAR_3 | VAR_2 | VAR_1,
   VAR_7->cd_label, VAR_6);
  if (VAR_9 < 0)
   VAR_8 = VAR_9;
 }

 VAR_6->slot.cd_irq = VAR_8;

 if (VAR_8 < 0)
  VAR_6->caps |= VAR_4;
}
