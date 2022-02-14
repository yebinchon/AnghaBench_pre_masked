
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sh_mobile_lcdc_chan {TYPE_3__* cfg; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int max_brightness; int brightness; } ;
struct backlight_device {TYPE_1__ props; } ;
struct TYPE_5__ {int max_brightness; int name; } ;
struct TYPE_6__ {TYPE_2__ bl_info; } ;


 scalar_t__ FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (int ,struct device*,struct sh_mobile_lcdc_chan*,int *,int *) ;
 int FUNC_3 (struct backlight_device*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct backlight_device *FUNC_5(struct device *VAR_1,
            struct sh_mobile_lcdc_chan *VAR_2)
{
 struct backlight_device *VAR_3;

 VAR_3 = FUNC_2(VAR_2->cfg->bl_info.name, VAR_1, VAR_2,
           &VAR_0, ((void*)0));
 if (FUNC_0(VAR_3)) {
  FUNC_4(VAR_1, "unable to register backlight device: %ld\n",
   FUNC_1(VAR_3));
  return ((void*)0);
 }

 VAR_3->props.max_brightness = VAR_2->cfg->bl_info.max_brightness;
 VAR_3->props.brightness = VAR_3->props.max_brightness;
 FUNC_3(VAR_3);

 return VAR_3;
}
