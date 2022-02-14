
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_data {int sfp_gpio_mask; int sfp_gpio_inputs; int sfp_gpio_mod_absent; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct xgbe_phy_data *VAR_1)
{
 if (VAR_1->sfp_gpio_mask & VAR_0)
  return 0;

 if (VAR_1->sfp_gpio_inputs & (1 << VAR_1->sfp_gpio_mod_absent))
  return 1;

 return 0;
}
