
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
struct TYPE_8__ {int name; int volt_table; } ;
struct TYPE_6__ {TYPE_3__ desc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 struct mt6397_chip* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 struct regulator_dev* FUNC_5 (TYPE_2__*,TYPE_3__*,struct regulator_config*) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_6 (struct platform_device*) ;
 scalar_t__ FUNC_7 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct mt6397_chip *VAR_7 = FUNC_3(VAR_6->dev.parent);
 struct regulator_config VAR_8 = {};
 struct regulator_dev *VAR_9;
 int VAR_10;
 u32 VAR_11, VAR_12;


 if (FUNC_6(VAR_6))
  return -VAR_0;


 if (FUNC_7(VAR_7->regmap, VAR_1, &VAR_11) < 0) {
  FUNC_2(&VAR_6->dev, "Failed to read Chip ID\n");
  return -VAR_0;
 }
 FUNC_4(&VAR_6->dev, "Chip ID = 0x%x\n", VAR_11);

 VAR_12 = (VAR_11 & 0xFF);
 switch (VAR_12) {
 case 128:
  VAR_5[VAR_2].desc.volt_table =
  VAR_4;
  break;
 default:
  break;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_8.dev = &VAR_6->dev;
  VAR_8.driver_data = &VAR_5[VAR_10];
  VAR_8.regmap = VAR_7->regmap;
  VAR_9 = FUNC_5(&VAR_6->dev,
    &VAR_5[VAR_10].desc, &VAR_8);
  if (FUNC_0(VAR_9)) {
   FUNC_2(&VAR_6->dev, "failed to register %s\n",
    VAR_5[VAR_10].desc.name);
   return FUNC_1(VAR_9);
  }
 }

 return 0;
}
