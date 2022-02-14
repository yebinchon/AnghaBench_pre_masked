
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct hi6421_regulator_info* driver_data; int dev; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct hi6421_regulator_pdata {int lock; } ;
struct TYPE_6__ {int name; } ;
struct hi6421_regulator_info {TYPE_2__ desc; } ;
struct hi6421_pmic {int regmap; } ;


 int FUNC_0 (struct hi6421_regulator_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 struct hi6421_pmic* FUNC_4 (int ) ;
 struct hi6421_regulator_pdata* FUNC_5 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_6 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 struct hi6421_regulator_info* VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,struct hi6421_regulator_pdata*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct hi6421_pmic *VAR_4 = FUNC_4(VAR_3->dev.parent);
 struct hi6421_regulator_pdata *VAR_5;
 struct hi6421_regulator_info *VAR_6;
 struct regulator_config VAR_7 = { };
 struct regulator_dev *VAR_8;
 int VAR_9;

 VAR_5 = FUNC_5(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;
 FUNC_7(&VAR_5->lock);
 FUNC_8(VAR_3, VAR_5);

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_2); VAR_9++) {

  VAR_6 = &VAR_2[VAR_9];

  VAR_7.dev = VAR_3->dev.parent;
  VAR_7.driver_data = VAR_6;
  VAR_7.regmap = VAR_4->regmap;

  VAR_8 = FUNC_6(&VAR_3->dev, &VAR_6->desc,
            &VAR_7);
  if (FUNC_1(VAR_8)) {
   FUNC_3(&VAR_3->dev, "failed to register regulator %s\n",
    VAR_6->desc.name);
   return FUNC_2(VAR_8);
  }
 }

 return 0;
}
