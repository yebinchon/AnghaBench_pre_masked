
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct lp8788_chg_param {int val; int addr; } ;
struct lp8788_charger_platform_data {int num_chg_params; struct lp8788_chg_param* chg_params; } ;
struct lp8788_charger {struct lp8788_charger_platform_data* pdata; struct lp8788* lp; } ;
struct lp8788 {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct lp8788*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0,
     struct lp8788_charger *VAR_1)
{
 struct lp8788 *VAR_2 = VAR_1->lp;
 struct lp8788_charger_platform_data *VAR_3 = VAR_1->pdata;
 struct lp8788_chg_param *VAR_4;
 int VAR_5;
 int VAR_6;

 if (!VAR_3 || !VAR_3->chg_params) {
  FUNC_0(&VAR_0->dev, "skip updating charger parameters\n");
  return 0;
 }


 for (VAR_5 = 0; VAR_5 < VAR_3->num_chg_params; VAR_5++) {
  VAR_4 = VAR_3->chg_params + VAR_5;

  if (FUNC_1(VAR_4->addr)) {
   VAR_6 = FUNC_2(VAR_2, VAR_4->addr, VAR_4->val);
   if (VAR_6)
    return VAR_6;
  }
 }

 return 0;
}
