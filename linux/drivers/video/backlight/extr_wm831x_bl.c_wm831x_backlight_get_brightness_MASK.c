
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_backlight_data {int current_brightness; } ;
struct backlight_device {int dummy; } ;


 struct wm831x_backlight_data* FUNC_0 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_0)
{
 struct wm831x_backlight_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->current_brightness;
}
