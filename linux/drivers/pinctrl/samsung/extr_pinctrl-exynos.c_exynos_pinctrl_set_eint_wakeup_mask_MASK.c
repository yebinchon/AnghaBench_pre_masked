
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pinctrl_drv_data {int dev; TYPE_1__* retention_ctrl; } ;
struct regmap {int dummy; } ;
struct exynos_irq_chip {int eint_wake_mask_value; int eint_wake_mask_reg; } ;
struct TYPE_2__ {struct regmap* priv; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct regmap*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct samsung_pinctrl_drv_data *VAR_0,
        struct exynos_irq_chip *VAR_1)
{
 struct regmap *VAR_2;

 if (!VAR_0->retention_ctrl || !VAR_0->retention_ctrl->priv) {
  FUNC_1(VAR_0->dev,
    "No retention data configured bank with external wakeup interrupt. Wake-up mask will not be set.\n");
  return;
 }

 VAR_2 = VAR_0->retention_ctrl->priv;
 FUNC_0(VAR_0->dev,
   "Setting external wakeup interrupt mask: 0x%x\n",
   VAR_1->eint_wake_mask_value);

 FUNC_2(VAR_2, VAR_1->eint_wake_mask_reg,
       VAR_1->eint_wake_mask_value);
}
