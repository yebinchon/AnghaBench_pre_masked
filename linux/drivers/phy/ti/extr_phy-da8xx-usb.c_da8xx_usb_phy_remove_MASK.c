
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct da8xx_usb_phy {int usb11_phy; int usb20_phy; } ;


 int FUNC_0 (int ,char*,char*) ;
 struct da8xx_usb_phy* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct da8xx_usb_phy *VAR_1 = FUNC_1(VAR_0);

 if (!VAR_0->dev.of_node) {
  FUNC_0(VAR_1->usb20_phy, "usb-phy", "musb-da8xx");
  FUNC_0(VAR_1->usb11_phy, "usb-phy", "ohci-da8xx");
 }

 return 0;
}
