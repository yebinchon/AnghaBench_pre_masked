
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_retention_ctrl {int nr_regs; int value; int * regs; scalar_t__ refcnt; struct regmap* priv; } ;
struct samsung_pinctrl_drv_data {struct samsung_retention_ctrl* retention_ctrl; } ;
struct regmap {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct regmap*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct samsung_pinctrl_drv_data *VAR_0)
{
 struct samsung_retention_ctrl *VAR_1 = VAR_0->retention_ctrl;
 struct regmap *VAR_2 = VAR_1->priv;
 int VAR_3;

 if (VAR_1->refcnt && !FUNC_0(VAR_1->refcnt))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_regs; VAR_3++)
  FUNC_1(VAR_2, VAR_1->regs[VAR_3], VAR_1->value);
}
