
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct lp8788_charger {int * pdata; struct lp8788* lp; } ;
struct lp8788 {TYPE_1__* pdata; } ;
struct TYPE_2__ {int * chg_pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lp8788* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct lp8788_charger* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct platform_device*,struct lp8788_charger*) ;
 int FUNC_4 (struct platform_device*,struct lp8788_charger*) ;
 int FUNC_5 (struct device*,struct lp8788_charger*) ;
 int FUNC_6 (struct platform_device*,struct lp8788_charger*) ;
 int FUNC_7 (struct platform_device*,struct lp8788_charger*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_2)
{
 struct lp8788 *VAR_3 = FUNC_0(VAR_2->dev.parent);
 struct lp8788_charger *VAR_4;
 struct device *VAR_5 = &VAR_2->dev;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_5, sizeof(struct lp8788_charger), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->lp = VAR_3;
 VAR_4->pdata = VAR_3->pdata ? VAR_3->pdata->chg_pdata : ((void*)0);
 FUNC_7(VAR_2, VAR_4);

 VAR_6 = FUNC_6(VAR_2, VAR_4);
 if (VAR_6)
  return VAR_6;

 FUNC_5(&VAR_2->dev, VAR_4);

 VAR_6 = FUNC_4(VAR_2, VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_4);
 if (VAR_6)
  FUNC_1(VAR_5, "failed to register charger irq: %d\n", VAR_6);

 return 0;
}
