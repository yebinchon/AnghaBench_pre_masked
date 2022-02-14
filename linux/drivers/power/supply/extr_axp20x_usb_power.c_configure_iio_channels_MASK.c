
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct axp20x_usb_power {void* vbus_i; void* vbus_v; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2,
      struct axp20x_usb_power *VAR_3)
{
 VAR_3->vbus_v = FUNC_2(&VAR_2->dev, "vbus_v");
 if (FUNC_0(VAR_3->vbus_v)) {
  if (FUNC_1(VAR_3->vbus_v) == -VAR_0)
   return -VAR_1;
  return FUNC_1(VAR_3->vbus_v);
 }

 VAR_3->vbus_i = FUNC_2(&VAR_2->dev, "vbus_i");
 if (FUNC_0(VAR_3->vbus_i)) {
  if (FUNC_1(VAR_3->vbus_i) == -VAR_0)
   return -VAR_1;
  return FUNC_1(VAR_3->vbus_i);
 }

 return 0;
}
