
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rk805_pctrl_info {int dev; TYPE_2__* pin_cfg; TYPE_1__* rk808; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_4__ {int fun_msk; int reg; } ;
struct TYPE_3__ {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct rk805_pctrl_info* FUNC_1 (struct pinctrl_dev*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_2,
      unsigned int VAR_3,
      int VAR_4)
{
 struct rk805_pctrl_info *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;

 if (!VAR_5->pin_cfg[VAR_3].fun_msk)
  return 0;

 if (VAR_4 == VAR_1) {
  VAR_6 = FUNC_2(VAR_5->rk808->regmap,
      VAR_5->pin_cfg[VAR_3].reg,
      VAR_5->pin_cfg[VAR_3].fun_msk,
      VAR_5->pin_cfg[VAR_3].fun_msk);
  if (VAR_6) {
   FUNC_0(VAR_5->dev, "set gpio%d GPIO failed\n", VAR_3);
   return VAR_6;
  }
 } else {
  FUNC_0(VAR_5->dev, "Couldn't find function mux %d\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
