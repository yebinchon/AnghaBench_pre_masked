
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rk805_pctrl_info {TYPE_2__* pin_cfg; int dev; TYPE_1__* rk808; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_4__ {unsigned int dir_msk; int reg; } ;
struct TYPE_3__ {int regmap; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 struct rk805_pctrl_info* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct rk805_pctrl_info *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3;
 int VAR_4;


 if (!VAR_2->pin_cfg[VAR_1].dir_msk)
  return 0;

 VAR_4 = FUNC_2(VAR_2->rk808->regmap,
     VAR_2->pin_cfg[VAR_1].reg,
     &VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "get gpio%d direction failed\n", VAR_1);
  return VAR_4;
 }

 return !(VAR_3 & VAR_2->pin_cfg[VAR_1].dir_msk);
}
