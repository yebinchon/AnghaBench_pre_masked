
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_mobile_lcdc_chan {int bl_brightness; TYPE_1__* cfg; } ;
struct TYPE_5__ {int brightness; scalar_t__ power; int state; } ;
struct backlight_device {TYPE_2__ props; } ;
struct TYPE_6__ {int (* set_brightness ) (int) ;} ;
struct TYPE_4__ {TYPE_3__ bl_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sh_mobile_lcdc_chan* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_3)
{
 struct sh_mobile_lcdc_chan *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = VAR_3->props.brightness;

 if (VAR_3->props.power != VAR_2 ||
     VAR_3->props.state & (VAR_1 | VAR_0))
  VAR_5 = 0;

 VAR_4->bl_brightness = VAR_5;
 return VAR_4->cfg->bl_info.set_brightness(VAR_5);
}
