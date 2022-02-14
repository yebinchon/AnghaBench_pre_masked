
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_bl_data {int pwm; scalar_t__ legacy; int (* exit ) (int *) ;} ;
struct platform_device {int dev; } ;
struct backlight_device {int dummy; } ;


 int FUNC_0 (struct backlight_device*) ;
 struct pwm_bl_data* FUNC_1 (struct backlight_device*) ;
 struct backlight_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct pwm_bl_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct backlight_device *VAR_1 = FUNC_2(VAR_0);
 struct pwm_bl_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 FUNC_3(VAR_2);

 if (VAR_2->exit)
  VAR_2->exit(&VAR_0->dev);
 if (VAR_2->legacy)
  FUNC_4(VAR_2->pwm);

 return 0;
}
