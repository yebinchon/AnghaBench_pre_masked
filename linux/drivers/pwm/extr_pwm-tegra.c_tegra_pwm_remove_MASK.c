
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int npwm; struct pwm_device* pwms; } ;
struct tegra_pwm_chip {TYPE_1__ chip; int clk; int rst; } ;
struct pwm_device {int dummy; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct tegra_pwm_chip* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct pwm_device*) ;
 int FUNC_5 (struct tegra_pwm_chip*,unsigned int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct tegra_pwm_chip *VAR_2 = FUNC_3(VAR_1);
 unsigned int VAR_3;
 int VAR_4;

 if (FUNC_0(!VAR_2))
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_2->clk);
 if (VAR_4 < 0)
  return VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->chip.npwm; VAR_3++) {
  struct pwm_device *VAR_5 = &VAR_2->chip.pwms[VAR_3];

  if (!FUNC_4(VAR_5))
   if (FUNC_2(VAR_2->clk) < 0)
    continue;

  FUNC_5(VAR_2, VAR_3, 0);

  FUNC_1(VAR_2->clk);
 }

 FUNC_7(VAR_2->rst);
 FUNC_1(VAR_2->clk);

 return FUNC_6(&VAR_2->chip);
}
