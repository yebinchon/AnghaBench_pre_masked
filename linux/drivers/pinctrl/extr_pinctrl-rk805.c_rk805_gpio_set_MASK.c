
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rk805_pctrl_info {int dev; TYPE_2__* pin_cfg; TYPE_1__* rk808; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_4__ {int val_msk; int reg; } ;
struct TYPE_3__ {int regmap; } ;


 int FUNC_0 (int ,char*,unsigned int,int) ;
 struct rk805_pctrl_info* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gpio_chip *VAR_0,
      unsigned int VAR_1,
      int VAR_2)
{
 struct rk805_pctrl_info *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->rk808->regmap,
     VAR_3->pin_cfg[VAR_1].reg,
     VAR_3->pin_cfg[VAR_1].val_msk,
     VAR_2 ? VAR_3->pin_cfg[VAR_1].val_msk : 0);
 if (VAR_4)
  FUNC_0(VAR_3->dev, "set gpio%d value %d failed\n",
   VAR_1, VAR_2);
}
