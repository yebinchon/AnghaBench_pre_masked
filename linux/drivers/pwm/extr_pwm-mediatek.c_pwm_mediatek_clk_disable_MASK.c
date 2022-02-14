
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_mediatek_chip {int clk_top; int clk_main; int * clk_pwms; } ;
struct pwm_device {size_t hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pwm_mediatek_chip* FUNC_1 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_2(struct pwm_chip *VAR_0,
         struct pwm_device *VAR_1)
{
 struct pwm_mediatek_chip *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->clk_pwms[VAR_1->hwpwm]);
 FUNC_0(VAR_2->clk_main);
 FUNC_0(VAR_2->clk_top);
}
