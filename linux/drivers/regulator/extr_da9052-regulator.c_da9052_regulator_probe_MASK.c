
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regulator_config {int init_data; int regmap; struct da9052_regulator* driver_data; int dev; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mfd_cell {size_t id; } ;
struct da9052_regulator {int rdev; TYPE_1__* info; struct da9052* da9052; } ;
struct da9052_pdata {int * regulators; } ;
struct da9052 {int regmap; int dev; int chip_id; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_6__ {TYPE_3__ reg_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 struct da9052* FUNC_3 (int ) ;
 struct da9052_pdata* FUNC_4 (int ) ;
 struct da9052_regulator* FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,struct regulator_config*) ;
 TYPE_1__* FUNC_7 (int ,size_t) ;
 struct mfd_cell* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*,struct da9052_regulator*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 const struct mfd_cell *VAR_4 = FUNC_8(VAR_3);
 struct regulator_config VAR_5 = { };
 struct da9052_regulator *VAR_6;
 struct da9052 *VAR_7;
 struct da9052_pdata *VAR_8;

 VAR_6 = FUNC_5(&VAR_3->dev, sizeof(struct da9052_regulator),
     VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_3->dev.parent);
 VAR_8 = FUNC_4(VAR_7->dev);
 VAR_6->da9052 = VAR_7;

 VAR_6->info = FUNC_7(VAR_6->da9052->chip_id,
           VAR_4->id);
 if (VAR_6->info == ((void*)0)) {
  FUNC_2(&VAR_3->dev, "invalid regulator ID specified\n");
  return -VAR_0;
 }

 VAR_5.dev = VAR_7->dev;
 VAR_5.driver_data = VAR_6;
 VAR_5.regmap = VAR_7->regmap;
 if (VAR_8)
  VAR_5.init_data = VAR_8->regulators[VAR_4->id];

 VAR_6->rdev = FUNC_6(&VAR_3->dev,
        &VAR_6->info->reg_desc,
        &VAR_5);
 if (FUNC_0(VAR_6->rdev)) {
  FUNC_2(&VAR_3->dev, "failed to register regulator %s\n",
   VAR_6->info->reg_desc.name);
  return FUNC_1(VAR_6->rdev);
 }

 FUNC_9(VAR_3, VAR_6);

 return 0;
}
