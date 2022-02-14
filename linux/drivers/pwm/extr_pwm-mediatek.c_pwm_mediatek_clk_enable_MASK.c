
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_mediatek_chip {int clk_top; int clk_main; int * clk_pwms; } ;
struct pwm_device {size_t hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pwm_mediatek_chip* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_0,
       struct pwm_device *VAR_1)
{
 struct pwm_mediatek_chip *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->clk_top);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2->clk_main);
 if (VAR_3 < 0)
  goto disable_clk_top;

 VAR_3 = FUNC_1(VAR_2->clk_pwms[VAR_1->hwpwm]);
 if (VAR_3 < 0)
  goto disable_clk_main;

 return 0;

disable_clk_main:
 FUNC_0(VAR_2->clk_main);
disable_clk_top:
 FUNC_0(VAR_2->clk_top);

 return VAR_3;
}
