
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
struct TYPE_5__ {int ** aldo_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_2__*,char*,int,int) ;
 struct lp8788* FUNC_3 (int ) ;
 struct lp8788_ldo* FUNC_4 (TYPE_2__*,int,int ) ;
 struct regulator_dev* FUNC_5 (TYPE_2__*,int *,struct regulator_config*) ;
 int * VAR_3 ;
 int FUNC_6 (struct platform_device*,struct lp8788_ldo*,scalar_t__) ;
 int FUNC_7 (struct platform_device*,struct lp8788_ldo*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct lp8788 *VAR_5 = FUNC_3(VAR_4->dev.parent);
 int VAR_6 = VAR_4->id;
 struct lp8788_ldo *VAR_7;
 struct regulator_config VAR_8 = { };
 struct regulator_dev *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_4(&VAR_4->dev, sizeof(struct lp8788_ldo), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->lp = VAR_5;
 VAR_10 = FUNC_6(VAR_4, VAR_7, VAR_6 + VAR_0);
 if (VAR_10)
  return VAR_10;

 if (VAR_7->ena_gpiod)
  VAR_8.ena_gpiod = VAR_7->ena_gpiod;

 VAR_8.dev = VAR_4->dev.parent;
 VAR_8.init_data = VAR_5->pdata ? VAR_5->pdata->aldo_data[VAR_6] : ((void*)0);
 VAR_8.driver_data = VAR_7;
 VAR_8.regmap = VAR_5->regmap;

 VAR_9 = FUNC_5(&VAR_4->dev, &VAR_3[VAR_6], &VAR_8);
 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  FUNC_2(&VAR_4->dev, "ALDO%d regulator register err = %d\n",
    VAR_6 + 1, VAR_10);
  return VAR_10;
 }

 VAR_7->regulator = VAR_9;
 FUNC_7(VAR_4, VAR_7);

 return 0;
}
