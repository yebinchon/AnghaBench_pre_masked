
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; TYPE_1__* driver_data; TYPE_2__* dev; } ;
struct TYPE_7__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mt6397_chip {int regmap; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_6__ {TYPE_3__ desc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 struct mt6397_chip* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 struct regulator_dev* FUNC_5 (TYPE_2__*,TYPE_3__*,struct regulator_config*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_6 (struct platform_device*) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct mt6397_chip *VAR_5 = FUNC_3(VAR_4->dev.parent);
 struct regulator_config VAR_6 = {};
 struct regulator_dev *VAR_7;
 int VAR_8;
 u32 VAR_9;


 if (FUNC_6(VAR_4))
  return -VAR_0;


 if (FUNC_7(VAR_5->regmap, VAR_1, &VAR_9) < 0) {
  FUNC_2(&VAR_4->dev, "Failed to read Chip ID\n");
  return -VAR_0;
 }
 FUNC_4(&VAR_4->dev, "Chip ID = 0x%x\n", VAR_9);

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_6.dev = &VAR_4->dev;
  VAR_6.driver_data = &VAR_3[VAR_8];
  VAR_6.regmap = VAR_5->regmap;
  VAR_7 = FUNC_5(&VAR_4->dev,
    &VAR_3[VAR_8].desc, &VAR_6);
  if (FUNC_0(VAR_7)) {
   FUNC_2(&VAR_4->dev, "failed to register %s\n",
    VAR_3[VAR_8].desc.name);
   return FUNC_1(VAR_7);
  }
 }
 return 0;
}
