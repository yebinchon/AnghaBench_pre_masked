
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear_pwm_chip {int clk; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct spear_pwm_chip*,int ,int ) ;
 int FUNC_2 (struct spear_pwm_chip*,int ,int ,int ) ;
 struct spear_pwm_chip* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct spear_pwm_chip *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = 0;
 u32 VAR_6;

 VAR_5 = FUNC_0(VAR_4->clk);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_1(VAR_4, VAR_3->hwpwm, VAR_0);
 VAR_6 |= VAR_1;
 FUNC_2(VAR_4, VAR_3->hwpwm, VAR_0, VAR_6);

 return 0;
}
