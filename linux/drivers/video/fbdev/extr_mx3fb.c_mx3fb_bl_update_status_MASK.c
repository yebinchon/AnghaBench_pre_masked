
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mx3fb_data {int backlight_level; } ;
struct TYPE_2__ {int brightness; scalar_t__ power; scalar_t__ fb_blank; } ;
struct backlight_device {TYPE_1__ props; } ;


 scalar_t__ VAR_0 ;
 struct mx3fb_data* FUNC_0 (struct backlight_device*) ;
 int FUNC_1 (struct mx3fb_data*,int) ;

__attribute__((used)) static int FUNC_2(struct backlight_device *VAR_1)
{
 struct mx3fb_data *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = VAR_1->props.brightness;

 if (VAR_1->props.power != VAR_0)
  VAR_3 = 0;
 if (VAR_1->props.fb_blank != VAR_0)
  VAR_3 = 0;

 VAR_2->backlight_level = (VAR_2->backlight_level & ~0xFF) | VAR_3;

 FUNC_1(VAR_2, VAR_2->backlight_level);

 return 0;
}
