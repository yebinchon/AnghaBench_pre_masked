
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_bl_data {int dummy; } ;
struct platform_device {int dummy; } ;
struct backlight_device {int dummy; } ;


 struct pwm_bl_data* FUNC_0 (struct backlight_device*) ;
 struct backlight_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct pwm_bl_data*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_0)
{
 struct backlight_device *VAR_1 = FUNC_1(VAR_0);
 struct pwm_bl_data *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2);
}
