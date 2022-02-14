
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {int init_data; struct aat2870_regulator* driver_data; TYPE_1__* dev; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; int id; } ;
struct TYPE_6__ {int name; } ;
struct aat2870_regulator {TYPE_2__ desc; int aat2870; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 struct aat2870_regulator* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 struct regulator_dev* FUNC_6 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 int FUNC_7 (struct platform_device*,struct regulator_dev*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct aat2870_regulator *VAR_2;
 struct regulator_config VAR_3 = { };
 struct regulator_dev *VAR_4;

 VAR_2 = FUNC_2(VAR_1->id);
 if (!VAR_2) {
  FUNC_3(&VAR_1->dev, "Invalid device ID, %d\n", VAR_1->id);
  return -VAR_0;
 }
 VAR_2->aat2870 = FUNC_4(VAR_1->dev.parent);

 VAR_3.dev = &VAR_1->dev;
 VAR_3.driver_data = VAR_2;
 VAR_3.init_data = FUNC_5(&VAR_1->dev);

 VAR_4 = FUNC_6(&VAR_1->dev, &VAR_2->desc, &VAR_3);
 if (FUNC_0(VAR_4)) {
  FUNC_3(&VAR_1->dev, "Failed to register regulator %s\n",
   VAR_2->desc.name);
  return FUNC_1(VAR_4);
 }
 FUNC_7(VAR_1, VAR_4);

 return 0;
}
