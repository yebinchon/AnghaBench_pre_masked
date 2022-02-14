
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpcap_phy_ddata {int * gpio; } ;
typedef enum cpcap_gpio_mode { ____Placeholder_cpcap_gpio_mode } cpcap_gpio_mode ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct cpcap_phy_ddata *VAR_0,
       enum cpcap_gpio_mode VAR_1)
{
 if (!VAR_0->gpio[0] || !VAR_0->gpio[1])
  return 0;

 FUNC_0(VAR_0->gpio[0], VAR_1 & 1);
 FUNC_0(VAR_0->gpio[1], VAR_1 >> 1);

 return 0;
}
