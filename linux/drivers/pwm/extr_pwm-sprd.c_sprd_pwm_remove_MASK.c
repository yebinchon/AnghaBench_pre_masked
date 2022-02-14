
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pwm_chip {int chip; } ;
struct platform_device {int dummy; } ;


 struct sprd_pwm_chip* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct sprd_pwm_chip *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_1->chip);
}
