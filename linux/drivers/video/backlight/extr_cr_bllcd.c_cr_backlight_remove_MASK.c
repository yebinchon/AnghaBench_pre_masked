
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct cr_panel {int cr_lcd_device; TYPE_2__* cr_backlight_device; } ;
struct TYPE_3__ {scalar_t__ max_brightness; scalar_t__ brightness; int power; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct cr_panel* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct cr_panel *VAR_3 = FUNC_3(VAR_2);

 VAR_3->cr_backlight_device->props.power = VAR_0;
 VAR_3->cr_backlight_device->props.brightness = 0;
 VAR_3->cr_backlight_device->props.max_brightness = 0;
 FUNC_0(VAR_3->cr_backlight_device);
 FUNC_1(VAR_3->cr_lcd_device, VAR_0);
 FUNC_2(VAR_1);

 return 0;
}
