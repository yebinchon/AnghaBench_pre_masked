
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_control_phy {scalar_t__ type; } ;
struct device {int dummy; } ;
typedef enum omap_control_usb_mode { ____Placeholder_omap_control_usb_mode } omap_control_usb_mode ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ VAR_0 ;



 int FUNC_1 (struct device*,char*) ;
 struct omap_control_phy* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct omap_control_phy*) ;
 int FUNC_5 (struct omap_control_phy*) ;
 int FUNC_6 (struct omap_control_phy*) ;

void FUNC_7(struct device *VAR_1,
 enum omap_control_usb_mode VAR_2)
{
 struct omap_control_phy *VAR_3;

 if (FUNC_0(VAR_1) || !VAR_1)
  return;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3) {
  FUNC_1(VAR_1, "Invalid control phy device\n");
  return;
 }

 if (VAR_3->type != VAR_0)
  return;

 switch (VAR_2) {
 case 128:
  FUNC_5(VAR_3);
  break;
 case 130:
  FUNC_4(VAR_3);
  break;
 case 129:
  FUNC_6(VAR_3);
  break;
 default:
  FUNC_3(VAR_1, "invalid omap control usb mode\n");
 }
}
