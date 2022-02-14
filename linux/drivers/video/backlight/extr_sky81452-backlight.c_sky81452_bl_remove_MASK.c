
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sky81452_bl_platform_data {int gpio_enable; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {scalar_t__ brightness; int power; } ;
struct TYPE_3__ {int kobj; } ;
struct backlight_device {TYPE_2__ props; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct backlight_device*) ;
 struct sky81452_bl_platform_data* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct backlight_device* FUNC_4 (struct platform_device*) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 const struct sky81452_bl_platform_data *VAR_3 =
      FUNC_1(&VAR_2->dev);
 struct backlight_device *VAR_4 = FUNC_4(VAR_2);

 FUNC_5(&VAR_4->dev.kobj, &VAR_1);

 VAR_4->props.power = VAR_0;
 VAR_4->props.brightness = 0;
 FUNC_0(VAR_4);

 if (FUNC_2(VAR_3->gpio_enable))
  FUNC_3(VAR_3->gpio_enable, 0);

 return 0;
}
