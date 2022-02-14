
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_meson_g12a {int otg_phy_mode; } ;
struct device {int dummy; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;
typedef enum phy_mode { ____Placeholder_phy_mode } phy_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dwc3_meson_g12a* FUNC_0 (struct device*) ;
 int FUNC_1 (struct dwc3_meson_g12a*,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4, enum usb_role VAR_5)
{
 struct dwc3_meson_g12a *VAR_6 = FUNC_0(VAR_4);
 enum phy_mode VAR_7;

 if (VAR_5 == VAR_3)
  return 0;

 VAR_7 = (VAR_5 == VAR_2) ? VAR_1
           : VAR_0;

 if (VAR_7 == VAR_6->otg_phy_mode)
  return 0;

 return FUNC_1(VAR_6, VAR_7);
}
