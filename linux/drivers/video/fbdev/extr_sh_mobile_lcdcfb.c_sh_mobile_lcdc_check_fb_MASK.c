
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_info {struct backlight_device* bl_dev; } ;
struct backlight_device {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct backlight_device *VAR_0,
       struct fb_info *VAR_1)
{
 return (VAR_1->bl_dev == VAR_0);
}
