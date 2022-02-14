
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc2731_charger_info {int usb_notify; int usb_phy; } ;
struct platform_device {int dummy; } ;


 struct sc2731_charger_info* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct sc2731_charger_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->usb_phy, &VAR_1->usb_notify);

 return 0;
}
