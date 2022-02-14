
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int phy; } ;
struct keystone_usbphy {TYPE_1__ usb_phy_gen; } ;


 struct keystone_usbphy* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct keystone_usbphy *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->usb_phy_gen.phy);

 return 0;
}
