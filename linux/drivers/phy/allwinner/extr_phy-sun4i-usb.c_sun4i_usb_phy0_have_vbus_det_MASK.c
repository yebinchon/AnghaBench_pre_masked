
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_usb_phy_data {scalar_t__ vbus_power_supply; scalar_t__ vbus_det_gpio; } ;



__attribute__((used)) static bool FUNC_0(struct sun4i_usb_phy_data *VAR_0)
{
 return VAR_0->vbus_det_gpio || VAR_0->vbus_power_supply;
}
