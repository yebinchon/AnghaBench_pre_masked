
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pwm_chip {int clk; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_pwm_chip*,int ) ;
 int FUNC_2 (struct tegra_pwm_chip*,int ,int ) ;
 struct tegra_pwm_chip* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_4(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct tegra_pwm_chip *VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2->hwpwm);
 VAR_4 &= ~VAR_0;
 FUNC_2(VAR_3, VAR_2->hwpwm, VAR_4);

 FUNC_0(VAR_3->clk);
}
