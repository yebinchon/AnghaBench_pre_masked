
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct mxs_pwm_chip {scalar_t__ base; int clk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct mxs_pwm_chip* FUNC_1 (struct pwm_chip*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct mxs_pwm_chip *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->clk);
 if (VAR_5)
  return VAR_5;

 FUNC_2(1 << VAR_3->hwpwm, VAR_4->base + VAR_0 + VAR_1);

 return 0;
}
