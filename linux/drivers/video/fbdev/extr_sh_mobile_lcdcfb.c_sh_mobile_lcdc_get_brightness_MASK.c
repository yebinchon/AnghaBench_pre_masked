
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mobile_lcdc_chan {int bl_brightness; } ;
struct backlight_device {int dummy; } ;


 struct sh_mobile_lcdc_chan* FUNC_0 (struct backlight_device*) ;

__attribute__((used)) static int FUNC_1(struct backlight_device *VAR_0)
{
 struct sh_mobile_lcdc_chan *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->bl_brightness;
}
