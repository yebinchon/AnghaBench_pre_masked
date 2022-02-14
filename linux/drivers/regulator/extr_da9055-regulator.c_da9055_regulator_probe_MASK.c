
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct regulator_config {int init_data; int regmap; struct da9055_regulator* driver_data; int dev; } ;
struct TYPE_8__ {int parent; } ;
struct platform_device {size_t id; TYPE_2__ dev; int name; } ;
struct da9055_regulator {int rdev; TYPE_1__* info; struct da9055* da9055; } ;
struct da9055_pdata {int * regulators; } ;
struct da9055 {int regmap; int dev; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_7__ {TYPE_4__ reg_desc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct da9055_regulator*,struct regulator_config*,struct da9055_pdata*,size_t) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 struct da9055* FUNC_4 (int ) ;
 struct da9055_pdata* FUNC_5 (int ) ;
 struct da9055_regulator* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_4__*,struct regulator_config*) ;
 int FUNC_8 (TYPE_2__*,int,int *,int ,int,int ,struct da9055_regulator*) ;
 TYPE_1__* FUNC_9 (size_t) ;
 int FUNC_10 (struct platform_device*,char*) ;
 int FUNC_11 (struct platform_device*,struct da9055_regulator*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_10)
{
 struct regulator_config VAR_11 = { };
 struct da9055_regulator *VAR_12;
 struct da9055 *VAR_13 = FUNC_4(VAR_10->dev.parent);
 struct da9055_pdata *VAR_14 = FUNC_5(VAR_13->dev);
 int VAR_15, VAR_16;

 VAR_12 = FUNC_6(&VAR_10->dev, sizeof(struct da9055_regulator),
     VAR_5);
 if (!VAR_12)
  return -VAR_4;

 VAR_12->info = FUNC_9(VAR_10->id);
 if (VAR_12->info == ((void*)0)) {
  FUNC_3(&VAR_10->dev, "invalid regulator ID specified\n");
  return -VAR_3;
 }

 VAR_12->da9055 = VAR_13;
 VAR_11.dev = VAR_13->dev;
 VAR_11.driver_data = VAR_12;
 VAR_11.regmap = VAR_13->regmap;

 if (VAR_14)
  VAR_11.init_data = VAR_14->regulators[VAR_10->id];

 VAR_15 = FUNC_2(VAR_12, &VAR_11, VAR_14, VAR_10->id);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_12->rdev = FUNC_7(&VAR_10->dev,
        &VAR_12->info->reg_desc,
        &VAR_11);
 if (FUNC_0(VAR_12->rdev)) {
  FUNC_3(&VAR_10->dev, "Failed to register regulator %s\n",
   VAR_12->info->reg_desc.name);
  return FUNC_1(VAR_12->rdev);
 }


 if (VAR_10->id == VAR_0 || VAR_10->id == VAR_1) {
  VAR_16 = FUNC_10(VAR_10, "REGULATOR");
  if (VAR_16 < 0)
   return VAR_16;

  VAR_15 = FUNC_8(&VAR_10->dev, VAR_16, ((void*)0),
      VAR_9,
      VAR_8 |
      VAR_6 |
      VAR_7,
      VAR_10->name, VAR_12);
  if (VAR_15 != 0) {
   if (VAR_15 != -VAR_2) {
    FUNC_3(&VAR_10->dev,
    "Failed to request Regulator IRQ %d: %d\n",
    VAR_16, VAR_15);
    return VAR_15;
   }
  }
 }

 FUNC_11(VAR_10, VAR_12);

 return 0;
}
