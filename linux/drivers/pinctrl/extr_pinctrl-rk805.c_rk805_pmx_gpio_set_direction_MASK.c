
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rk805_pctrl_info {int dev; TYPE_2__* pin_cfg; TYPE_1__* rk808; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_4__ {int dir_msk; int reg; } ;
struct TYPE_3__ {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct pinctrl_dev*,unsigned int,int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct rk805_pctrl_info* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_1,
     struct pinctrl_gpio_range *VAR_2,
     unsigned int VAR_3, bool VAR_4)
{
 struct rk805_pctrl_info *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;


 VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_0);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "set gpio%d mux failed\n", VAR_3);
  return VAR_6;
 }


 if (!VAR_5->pin_cfg[VAR_3].dir_msk)
  return 0;

 VAR_6 = FUNC_3(VAR_5->rk808->regmap,
     VAR_5->pin_cfg[VAR_3].reg,
     VAR_5->pin_cfg[VAR_3].dir_msk,
     VAR_4 ? 0 : VAR_5->pin_cfg[VAR_3].dir_msk);
 if (VAR_6) {
  FUNC_1(VAR_5->dev, "set gpio%d direction failed\n", VAR_3);
  return VAR_6;
 }

 return VAR_6;
}
