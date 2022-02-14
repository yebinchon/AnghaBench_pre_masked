
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_timers {int max_arr; int clk; int regmap; } ;
struct TYPE_2__ {int of_pwm_n_cells; int base; int npwm; int * ops; struct device* dev; int of_xlate; } ;
struct stm32_pwm {TYPE_1__ chip; int clk; int regmap; int max_arr; int lock; } ;
struct device {int parent; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct stm32_timers* FUNC_0 (int ) ;
 struct stm32_pwm* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct platform_device*,struct stm32_pwm*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct stm32_pwm*,struct device_node*) ;
 int FUNC_6 (struct stm32_pwm*) ;
 int FUNC_7 (struct stm32_pwm*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct device_node *VAR_7 = VAR_6->of_node;
 struct stm32_timers *VAR_8 = FUNC_0(VAR_5->dev.parent);
 struct stm32_pwm *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_6, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_2(&VAR_9->lock);
 VAR_9->regmap = VAR_8->regmap;
 VAR_9->clk = VAR_8->clk;
 VAR_9->max_arr = VAR_8->max_arr;
 VAR_9->chip.of_xlate = VAR_3;
 VAR_9->chip.of_pwm_n_cells = 3;

 if (!VAR_9->regmap || !VAR_9->clk)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_9, VAR_7);
 if (VAR_10)
  return VAR_10;

 FUNC_7(VAR_9);

 VAR_9->chip.base = -1;
 VAR_9->chip.dev = VAR_6;
 VAR_9->chip.ops = &VAR_4;
 VAR_9->chip.npwm = FUNC_6(VAR_9);

 VAR_10 = FUNC_4(&VAR_9->chip);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_3(VAR_5, VAR_9);

 return 0;
}
