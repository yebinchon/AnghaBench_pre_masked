
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy {int dummy; } ;
struct of_phandle_args {int* args; } ;
struct device {int dummy; } ;
struct da8xx_usb_phy {struct phy* usb11_phy; struct phy* usb20_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct phy* FUNC_0 (int ) ;
 struct da8xx_usb_phy* FUNC_1 (struct device*) ;

__attribute__((used)) static struct phy *FUNC_2(struct device *VAR_2,
      struct of_phandle_args *VAR_3)
{
 struct da8xx_usb_phy *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_4)
  return FUNC_0(-VAR_1);

 switch (VAR_3->args[0]) {
 case 0:
  return VAR_4->usb20_phy;
 case 1:
  return VAR_4->usb11_phy;
 default:
  return FUNC_0(-VAR_0);
 }
}
