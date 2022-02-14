
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_meson_g12a {scalar_t__ otg_phy_mode; } ;
struct device {int dummy; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dwc3_meson_g12a* FUNC_0 (struct device*) ;

__attribute__((used)) static enum usb_role FUNC_1(struct device *VAR_3)
{
 struct dwc3_meson_g12a *VAR_4 = FUNC_0(VAR_3);

 return VAR_4->otg_phy_mode == VAR_0 ?
  VAR_2 : VAR_1;
}
