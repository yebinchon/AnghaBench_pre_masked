
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_bl_data {int dev; scalar_t__ (* check_fb ) (int ,struct fb_info*) ;} ;
struct fb_info {int dummy; } ;
struct backlight_device {int dummy; } ;


 struct pwm_bl_data* FUNC_0 (struct backlight_device*) ;
 scalar_t__ FUNC_1 (int ,struct fb_info*) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_0,
      struct fb_info *VAR_1)
{
 struct pwm_bl_data *VAR_2 = FUNC_0(VAR_0);

 return !VAR_2->check_fb || VAR_2->check_fb(VAR_2->dev, VAR_1);
}
