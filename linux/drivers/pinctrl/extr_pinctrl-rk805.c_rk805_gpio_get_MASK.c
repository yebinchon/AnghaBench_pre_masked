
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rk805_pctrl_info {TYPE_2__* pin_cfg; int dev; TYPE_1__* rk808; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_4__ {int val_msk; int reg; } ;
struct TYPE_3__ {int regmap; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 struct rk805_pctrl_info* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned int VAR_1)
{
 struct rk805_pctrl_info *VAR_2 = FUNC_1(VAR_0);
 int VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_2->rk808->regmap, VAR_2->pin_cfg[VAR_1].reg, &VAR_4);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "get gpio%d value failed\n", VAR_1);
  return VAR_3;
 }

 return !!(VAR_4 & VAR_2->pin_cfg[VAR_1].val_msk);
}
