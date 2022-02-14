
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct puv3_pwm_chip {int clk; } ;


 int FUNC_0 (int ) ;
 struct puv3_pwm_chip* FUNC_1 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_2(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct puv3_pwm_chip *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->clk);
}
