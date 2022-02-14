
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {struct hi655x_regulator* driver_data; int regmap; int dev; } ;
struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_7__ {int name; } ;
struct hi655x_regulator {TYPE_1__ rdesc; } ;
struct hi655x_pmic {int regmap; } ;
struct TYPE_8__ {int rdesc; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 struct hi655x_pmic* FUNC_4 (int ) ;
 struct hi655x_regulator* FUNC_5 (TYPE_3__*,int,int ) ;
 struct regulator_dev* FUNC_6 (TYPE_3__*,int *,struct regulator_config*) ;
 int FUNC_7 (struct platform_device*,struct hi655x_regulator*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 unsigned int VAR_5;
 struct hi655x_regulator *VAR_6;
 struct hi655x_pmic *VAR_7;
 struct regulator_config VAR_8 = { };
 struct regulator_dev *VAR_9;

 VAR_7 = FUNC_4(VAR_4->dev.parent);
 if (!VAR_7) {
  FUNC_3(&VAR_4->dev, "no pmic in the regulator parent node\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_5(&VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_7(VAR_4, VAR_6);

 VAR_8.dev = VAR_4->dev.parent;
 VAR_8.regmap = VAR_7->regmap;
 VAR_8.driver_data = VAR_6;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  VAR_9 = FUNC_6(&VAR_4->dev,
            &VAR_3[VAR_5].rdesc,
            &VAR_8);
  if (FUNC_1(VAR_9)) {
   FUNC_3(&VAR_4->dev, "failed to register regulator %s\n",
    VAR_6->rdesc.name);
   return FUNC_2(VAR_9);
  }
 }
 return 0;
}
