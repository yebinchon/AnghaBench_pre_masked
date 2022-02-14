
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct regulator_init_data {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct regulator_init_data* init_data; struct max8925_regulator_info* driver_data; int dev; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_6__ {unsigned long long name; } ;
struct max8925_regulator_info {scalar_t__ vol_reg; TYPE_2__ desc; int i2c; } ;
struct max8925_chip {int dev; int i2c; } ;


 int FUNC_0 (struct max8925_regulator_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct max8925_chip* FUNC_4 (int ) ;
 struct regulator_init_data* FUNC_5 (TYPE_1__*) ;
 struct regulator_dev* FUNC_6 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 struct max8925_regulator_info* VAR_2 ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct regulator_dev*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct max8925_chip *VAR_4 = FUNC_4(VAR_3->dev.parent);
 struct regulator_init_data *VAR_5 = FUNC_5(&VAR_3->dev);
 struct regulator_config VAR_6 = { };
 struct max8925_regulator_info *VAR_7;
 struct resource *VAR_8;
 struct regulator_dev *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_7(VAR_3, VAR_1, 0);
 if (!VAR_8) {
  FUNC_3(&VAR_3->dev, "No REG resource!\n");
  return -VAR_0;
 }
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
  VAR_7 = &VAR_2[VAR_10];
  if (VAR_7->vol_reg == VAR_8->start)
   break;
 }

 if (VAR_10 == FUNC_0(VAR_2)) {
  FUNC_3(&VAR_3->dev, "Failed to find regulator %llu\n",
   (unsigned long long)VAR_8->start);
  return -VAR_0;
 }
 VAR_7->i2c = VAR_4->i2c;

 VAR_6.dev = VAR_4->dev;
 VAR_6.driver_data = VAR_7;

 if (VAR_5)
  VAR_6.init_data = VAR_5;

 VAR_9 = FUNC_6(&VAR_3->dev, &VAR_7->desc, &VAR_6);
 if (FUNC_1(VAR_9)) {
  FUNC_3(&VAR_3->dev, "failed to register regulator %s\n",
    VAR_7->desc.name);
  return FUNC_2(VAR_9);
 }

 FUNC_8(VAR_3, VAR_9);
 return 0;
}
