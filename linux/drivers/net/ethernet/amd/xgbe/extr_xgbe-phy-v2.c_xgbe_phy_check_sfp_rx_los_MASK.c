
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* extd; } ;
struct xgbe_phy_data {int sfp_gpio_mask; int sfp_gpio_inputs; int sfp_gpio_rx_los; TYPE_1__ sfp_eeprom; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct xgbe_phy_data *VAR_3)
{
 u8 *VAR_4 = VAR_3->sfp_eeprom.extd;

 if (!(VAR_4[VAR_1] & VAR_2))
  return 0;

 if (VAR_3->sfp_gpio_mask & VAR_0)
  return 0;

 if (VAR_3->sfp_gpio_inputs & (1 << VAR_3->sfp_gpio_rx_los))
  return 1;

 return 0;
}
