
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ brightness; int power; } ;
struct backlight_device {TYPE_1__ props; } ;
struct aat2870_bl_driver_data {struct backlight_device* bd; } ;


 int VAR_0 ;
 int FUNC_0 (struct backlight_device*) ;
 struct aat2870_bl_driver_data* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct aat2870_bl_driver_data *VAR_2 = FUNC_1(VAR_1);
 struct backlight_device *VAR_3 = VAR_2->bd;

 VAR_3->props.power = VAR_0;
 VAR_3->props.brightness = 0;
 FUNC_0(VAR_3);

 return 0;
}
