
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ehrpwm_pwm_chip {int chip; int tbclk; } ;


 int FUNC_0 (int ) ;
 struct ehrpwm_pwm_chip* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ehrpwm_pwm_chip *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->tbclk);

 FUNC_2(&VAR_0->dev);

 return FUNC_3(&VAR_1->chip);
}
