
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxa2xx_udc_mach_info {int gpio_pullup_inverted; int (* udc_command ) (int ) ;int gpio_pullup; } ;
struct TYPE_2__ {struct pxa2xx_udc_mach_info* mach; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 struct pxa2xx_udc_mach_info *VAR_2 = VAR_1->mach;
 int VAR_3 = VAR_2->gpio_pullup_inverted;

 if (FUNC_0(VAR_2->gpio_pullup))
  FUNC_1(VAR_2->gpio_pullup, VAR_3);
 else if (VAR_2->udc_command)
  VAR_2->udc_command(VAR_0);
}
