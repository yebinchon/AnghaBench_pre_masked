
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_retention_data {int nr_regs; int refcnt; int value; int * regs; } ;
struct samsung_retention_ctrl {int nr_regs; int value; int * regs; int disable; int enable; int refcnt; struct regmap* priv; } ;
struct samsung_pinctrl_drv_data {int dev; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 struct samsung_retention_ctrl* FUNC_0 (struct regmap*) ;
 struct samsung_retention_ctrl* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct regmap*) ;
 struct samsung_retention_ctrl* FUNC_3 (int ,int,int ) ;
 struct regmap* FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct regmap*,int ,int ) ;

struct samsung_retention_ctrl *
FUNC_6(struct samsung_pinctrl_drv_data *VAR_4,
        const struct samsung_retention_data *VAR_5)
{
 struct samsung_retention_ctrl *VAR_6;
 struct regmap *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_1(-VAR_0);

 VAR_7 = FUNC_4();
 if (FUNC_2(VAR_7))
  return FUNC_0(VAR_7);

 VAR_6->priv = VAR_7;
 VAR_6->regs = VAR_5->regs;
 VAR_6->nr_regs = VAR_5->nr_regs;
 VAR_6->value = VAR_5->value;
 VAR_6->refcnt = VAR_5->refcnt;
 VAR_6->enable = VAR_3;
 VAR_6->disable = VAR_2;


 for (VAR_8 = 0; VAR_8 < VAR_6->nr_regs; VAR_8++)
  FUNC_5(VAR_7, VAR_6->regs[VAR_8], VAR_6->value);

 return VAR_6;
}
