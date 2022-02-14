
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_desc {int id; } ;
struct regulator_config {int regmap; void* driver_data; int dev; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct max77693_dev {int dev; } ;
typedef enum max77693_types { ____Placeholder_max77693_types } max77693_types ;
struct TYPE_4__ {int driver_data; } ;


 unsigned int FUNC_0 (struct regulator_desc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;


 int FUNC_3 (TYPE_2__*,char*,int) ;
 struct max77693_dev* FUNC_4 (int ) ;
 struct regulator_dev* FUNC_5 (TYPE_2__*,struct regulator_desc const*,struct regulator_config*) ;
 int VAR_1 ;
 int FUNC_6 (int,struct max77693_dev*,int ) ;
 struct regulator_desc* VAR_2 ;
 int VAR_3 ;
 struct regulator_desc* VAR_4 ;
 TYPE_1__* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 enum max77693_types VAR_6 = FUNC_7(VAR_5)->driver_data;
 struct max77693_dev *VAR_7 = FUNC_4(VAR_5->dev.parent);
 const struct regulator_desc *VAR_8;
 unsigned int VAR_9;
 int VAR_10;
 struct regulator_config VAR_11 = { };

 VAR_11.dev = VAR_7->dev;

 switch (VAR_6) {
 case 129:
  VAR_8 = VAR_2;
  VAR_9 = FUNC_0(VAR_2);
  VAR_11.driver_data = (void *)&VAR_1;
  break;
 case 128:
  VAR_8 = VAR_4;
  VAR_9 = FUNC_0(VAR_4);
  VAR_11.driver_data = (void *)&VAR_3;
  break;
 default:
  FUNC_3(&VAR_5->dev, "Unsupported device type: %u\n", VAR_6);
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  struct regulator_dev *VAR_12;

  VAR_11.regmap = FUNC_6(VAR_6, VAR_7,
          VAR_8[VAR_10].id);

  VAR_12 = FUNC_5(&VAR_5->dev,
      &VAR_8[VAR_10], &VAR_11);
  if (FUNC_1(VAR_12)) {
   FUNC_3(&VAR_5->dev,
    "Failed to initialize regulator-%d\n", VAR_10);
   return FUNC_2(VAR_12);
  }
 }

 return 0;
}
