
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_usb_phy_data {int dr_mode; int id_det_gpio; } ;





 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct sun4i_usb_phy_data *VAR_0)
{
 switch (VAR_0->dr_mode) {
 case 129:
  if (VAR_0->id_det_gpio)
   return FUNC_0(VAR_0->id_det_gpio);
  else
   return 1;
 case 130:
  return 0;
 case 128:
 default:
  return 1;
 }
}
