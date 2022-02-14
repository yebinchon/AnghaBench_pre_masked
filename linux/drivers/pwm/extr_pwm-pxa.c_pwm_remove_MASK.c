
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_pwm_chip {int chip; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 struct pxa_pwm_chip* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct pxa_pwm_chip *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return -VAR_0;

 return FUNC_1(&VAR_2->chip);
}
