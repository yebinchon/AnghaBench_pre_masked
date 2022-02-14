
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_backlight {int * fbdev; } ;
struct fb_info {int * dev; } ;
struct backlight_device {int dummy; } ;


 struct gpio_backlight* FUNC_0 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_0,
       struct fb_info *VAR_1)
{
 struct gpio_backlight *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->fbdev == ((void*)0) || VAR_2->fbdev == VAR_1->dev;
}
