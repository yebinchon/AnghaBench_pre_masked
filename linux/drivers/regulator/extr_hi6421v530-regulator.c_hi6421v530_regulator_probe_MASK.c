
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {TYPE_1__* driver_data; int regmap; int dev; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct hi6421_pmic {int regmap; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_6__ {TYPE_3__ rdesc; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 struct hi6421_pmic* FUNC_4 (int ) ;
 struct regulator_dev* FUNC_5 (TYPE_2__*,TYPE_3__*,struct regulator_config*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct hi6421_pmic *VAR_3;
 struct regulator_dev *VAR_4;
 struct regulator_config VAR_5 = { };
 unsigned int VAR_6;

 VAR_3 = FUNC_4(VAR_2->dev.parent);
 if (!VAR_3) {
  FUNC_3(&VAR_2->dev, "no pmic in the regulator parent node\n");
  return -VAR_0;
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  VAR_5.dev = VAR_2->dev.parent;
  VAR_5.regmap = VAR_3->regmap;
  VAR_5.driver_data = &VAR_1[VAR_6];

  VAR_4 = FUNC_5(&VAR_2->dev,
    &VAR_1[VAR_6].rdesc,
    &VAR_5);
  if (FUNC_1(VAR_4)) {
   FUNC_3(&VAR_2->dev, "failed to register regulator %s\n",
    VAR_1[VAR_6].rdesc.name);
   return FUNC_2(VAR_4);
  }
 }
 return 0;
}
