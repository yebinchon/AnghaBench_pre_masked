
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct lp8788_buck* driver_data; int * init_data; int dev; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct lp8788_buck {struct regulator_dev* regulator; struct lp8788* lp; } ;
struct lp8788 {int regmap; TYPE_1__* pdata; } ;
struct TYPE_5__ {int ** buck_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_3 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_2__*,char*,int,int) ;
 struct lp8788* FUNC_3 (int ) ;
 struct lp8788_buck* FUNC_4 (TYPE_2__*,int,int ) ;
 struct regulator_dev* FUNC_5 (TYPE_2__*,int *,struct regulator_config*) ;
 int * VAR_4 ;
 int FUNC_6 (struct platform_device*,struct lp8788_buck*,int) ;
 int FUNC_7 (struct platform_device*,struct lp8788_buck*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct lp8788 *VAR_6 = FUNC_3(VAR_5->dev.parent);
 int VAR_7 = VAR_5->id;
 struct lp8788_buck *VAR_8;
 struct regulator_config VAR_9 = { };
 struct regulator_dev *VAR_10;
 int VAR_11;

 if (VAR_7 >= VAR_3)
  return -VAR_0;

 VAR_8 = FUNC_4(&VAR_5->dev, sizeof(struct lp8788_buck), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->lp = VAR_6;

 VAR_11 = FUNC_6(VAR_5, VAR_8, VAR_7);
 if (VAR_11)
  return VAR_11;

 VAR_9.dev = VAR_5->dev.parent;
 VAR_9.init_data = VAR_6->pdata ? VAR_6->pdata->buck_data[VAR_7] : ((void*)0);
 VAR_9.driver_data = VAR_8;
 VAR_9.regmap = VAR_6->regmap;

 VAR_10 = FUNC_5(&VAR_5->dev, &VAR_4[VAR_7], &VAR_9);
 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  FUNC_2(&VAR_5->dev, "BUCK%d regulator register err = %d\n",
    VAR_7 + 1, VAR_11);
  return VAR_11;
 }

 VAR_8->regulator = VAR_10;
 FUNC_7(VAR_5, VAR_8);

 return 0;
}
