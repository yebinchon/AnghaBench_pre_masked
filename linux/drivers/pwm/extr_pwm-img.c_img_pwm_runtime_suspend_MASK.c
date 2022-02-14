
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct img_pwm_chip {int sys_clk; int pwm_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct img_pwm_chip* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct img_pwm_chip *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pwm_clk);
 FUNC_0(VAR_1->sys_clk);

 return 0;
}
