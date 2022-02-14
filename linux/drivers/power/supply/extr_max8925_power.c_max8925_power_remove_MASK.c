
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct max8925_power_info {int battery; int usb; int ac; } ;


 int FUNC_0 (struct max8925_power_info*) ;
 struct max8925_power_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct max8925_power_info *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  FUNC_2(VAR_1->ac);
  FUNC_2(VAR_1->usb);
  FUNC_2(VAR_1->battery);
  FUNC_0(VAR_1);
 }
 return 0;
}
