
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct platform_device {TYPE_2__ dev; } ;
struct lp8788_bl {struct backlight_device* bl_dev; } ;
struct TYPE_3__ {scalar_t__ brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int FUNC_0 (struct backlight_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct lp8788_bl*) ;
 struct lp8788_bl* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct lp8788_bl *VAR_2 = FUNC_2(VAR_1);
 struct backlight_device *VAR_3 = VAR_2->bl_dev;

 VAR_3->props.brightness = 0;
 FUNC_0(VAR_3);
 FUNC_3(&VAR_1->dev.kobj, &VAR_0);
 FUNC_1(VAR_2);

 return 0;
}
