
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct lp8788_ldo* driver_data; int * init_data; int dev; scalar_t__ ena_gpiod; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct lp8788_ldo {struct regulator_dev* regulator; scalar_t__ ena_gpiod; struct lp8788* lp; } ;
struct lp8788 {int regmap; TYPE_1__* pdata; } ;
struct TYPE_5__ {int ** dldo_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_2__*,char*,int,int) ;
 struct lp8788* FUNC_3 (int ) ;
 struct lp8788_ldo* FUNC_4 (TYPE_2__*,int,int ) ;
 struct regulator_dev* FUNC_5 (TYPE_2__*,int *,struct regulator_config*) ;
 int FUNC_6 (struct platform_device*,struct lp8788_ldo*,int) ;
 int * VAR_2 ;
 int FUNC_7 (struct platform_device*,struct lp8788_ldo*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_3)
{
 struct lp8788 *VAR_4 = FUNC_3(VAR_3->dev.parent);
 int VAR_5 = VAR_3->id;
 struct lp8788_ldo *VAR_6;
 struct regulator_config VAR_7 = { };
 struct regulator_dev *VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(&VAR_3->dev, sizeof(struct lp8788_ldo), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->lp = VAR_4;
 VAR_9 = FUNC_6(VAR_3, VAR_6, VAR_5);
 if (VAR_9)
  return VAR_9;

 if (VAR_6->ena_gpiod)
  VAR_7.ena_gpiod = VAR_6->ena_gpiod;

 VAR_7.dev = VAR_3->dev.parent;
 VAR_7.init_data = VAR_4->pdata ? VAR_4->pdata->dldo_data[VAR_5] : ((void*)0);
 VAR_7.driver_data = VAR_6;
 VAR_7.regmap = VAR_4->regmap;

 VAR_8 = FUNC_5(&VAR_3->dev, &VAR_2[VAR_5], &VAR_7);
 if (FUNC_0(VAR_8)) {
  VAR_9 = FUNC_1(VAR_8);
  FUNC_2(&VAR_3->dev, "DLDO%d regulator register err = %d\n",
    VAR_5 + 1, VAR_9);
  return VAR_9;
 }

 VAR_6->regulator = VAR_8;
 FUNC_7(VAR_3, VAR_6);

 return 0;
}
