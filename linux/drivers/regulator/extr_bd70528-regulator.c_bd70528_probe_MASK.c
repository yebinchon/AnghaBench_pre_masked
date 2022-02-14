
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rohm_regmap_dev {int regmap; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; int dev; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct rohm_regmap_dev* FUNC_4 (int ) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct rohm_regmap_dev *VAR_3;
 int VAR_4;
 struct regulator_config VAR_5 = {
  .dev = VAR_2->dev.parent,
 };

 VAR_3 = FUNC_4(VAR_2->dev.parent);
 if (!VAR_3) {
  FUNC_3(&VAR_2->dev, "No MFD driver data\n");
  return -VAR_0;
 }

 VAR_5.regmap = VAR_3->regmap;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  struct regulator_dev *VAR_6;

  VAR_6 = FUNC_5(&VAR_2->dev, &VAR_1[VAR_4],
            &VAR_5);
  if (FUNC_1(VAR_6)) {
   FUNC_3(&VAR_2->dev,
    "failed to register %s regulator\n",
    VAR_1[VAR_4].name);
   return FUNC_2(VAR_6);
  }
 }
 return 0;
}
