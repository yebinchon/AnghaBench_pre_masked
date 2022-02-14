
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mmc_gpio* handler_priv; } ;
struct mmc_host {int parent; TYPE_1__ slot; } ;
struct mmc_gpio {unsigned int cd_debounce_delay_ms; int override_cd_active_level; struct gpio_desc* cd_gpio; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 struct gpio_desc* FUNC_2 (int ,char const*,unsigned int,int ) ;
 int FUNC_3 (struct gpio_desc*) ;
 int FUNC_4 (struct gpio_desc*,unsigned int) ;

int FUNC_5(struct mmc_host *VAR_1, const char *VAR_2,
    unsigned int VAR_3, bool VAR_4,
    unsigned int VAR_5, bool *VAR_6)
{
 struct mmc_gpio *VAR_7 = VAR_1->slot.handler_priv;
 struct gpio_desc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_1->parent, VAR_2, VAR_3, VAR_0);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 if (VAR_5) {
  VAR_9 = FUNC_4(VAR_8, VAR_5);
  if (VAR_9 < 0)
   VAR_7->cd_debounce_delay_ms = VAR_5 / 1000;
 }

 if (VAR_6)
  *VAR_6 = !FUNC_3(VAR_8);

 VAR_7->override_cd_active_level = VAR_4;
 VAR_7->cd_gpio = VAR_8;

 return 0;
}
