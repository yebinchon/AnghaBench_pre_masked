
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct mxs_pwm_chip {int clk; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct mxs_pwm_chip* FUNC_1 (struct pwm_chip*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct mxs_pwm_chip *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(1 << VAR_3->hwpwm, VAR_4->base + VAR_1 + VAR_0);

 FUNC_0(VAR_4->clk);
}
