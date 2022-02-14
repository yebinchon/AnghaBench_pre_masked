
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct sun4i_usb_phy_data {scalar_t__ vbus_power_supply; scalar_t__ vbus_det_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,union power_supply_propval*) ;

__attribute__((used)) static int FUNC_2(struct sun4i_usb_phy_data *VAR_1)
{
 if (VAR_1->vbus_det_gpio)
  return FUNC_0(VAR_1->vbus_det_gpio);

 if (VAR_1->vbus_power_supply) {
  union power_supply_propval VAR_2;
  int VAR_3;

  VAR_3 = FUNC_1(VAR_1->vbus_power_supply,
           VAR_0, &VAR_2);
  if (VAR_3 == 0)
   return VAR_2.intval;
 }


 return 1;
}
