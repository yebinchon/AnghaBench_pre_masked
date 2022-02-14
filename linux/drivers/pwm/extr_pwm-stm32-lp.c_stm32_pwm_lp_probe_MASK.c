
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int base; int npwm; int of_pwm_n_cells; int of_xlate; int * ops; TYPE_2__* dev; } ;
struct stm32_pwm_lp {TYPE_1__ chip; int clk; int regmap; } ;
struct stm32_lptimer {int clk; int regmap; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stm32_lptimer* FUNC_0 (int ) ;
 struct stm32_pwm_lp* FUNC_1 (TYPE_2__*,int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct platform_device*,struct stm32_pwm_lp*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_4)
{
 struct stm32_lptimer *VAR_5 = FUNC_0(VAR_4->dev.parent);
 struct stm32_pwm_lp *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(&VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->regmap = VAR_5->regmap;
 VAR_6->clk = VAR_5->clk;
 VAR_6->chip.base = -1;
 VAR_6->chip.dev = &VAR_4->dev;
 VAR_6->chip.ops = &VAR_3;
 VAR_6->chip.npwm = 1;
 VAR_6->chip.of_xlate = VAR_2;
 VAR_6->chip.of_pwm_n_cells = 3;

 VAR_7 = FUNC_3(&VAR_6->chip);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_2(VAR_4, VAR_6);

 return 0;
}
