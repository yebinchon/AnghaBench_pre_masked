
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_desc {int name; } ;
struct regulator_config {struct act8945a_pmic* driver_data; TYPE_1__* dev; } ;
struct TYPE_5__ {TYPE_3__* parent; int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct act8945a_pmic {int regmap; } ;
struct TYPE_6__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct regulator_desc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 struct regulator_desc* VAR_4 ;
 struct regulator_desc* VAR_5 ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 int FUNC_4 (TYPE_3__*,int *) ;
 struct act8945a_pmic* FUNC_5 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_6 (TYPE_1__*,struct regulator_desc const*,struct regulator_config*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct platform_device*,struct act8945a_pmic*) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct regulator_config VAR_7 = { };
 const struct regulator_desc *VAR_8;
 struct act8945a_pmic *VAR_9;
 struct regulator_dev *VAR_10;
 int VAR_11, VAR_12;
 bool VAR_13;

 VAR_9 = FUNC_5(&VAR_6->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->regmap = FUNC_4(VAR_6->dev.parent, ((void*)0));
 if (!VAR_9->regmap) {
  FUNC_3(&VAR_6->dev,
   "could not retrieve regmap from parent device\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_7(VAR_6->dev.parent->of_node,
            "active-semi,vsel-high");

 if (VAR_13) {
  VAR_8 = VAR_4;
  VAR_12 = FUNC_0(VAR_4);
 } else {
  VAR_8 = VAR_5;
  VAR_12 = FUNC_0(VAR_5);
 }

 VAR_7.dev = &VAR_6->dev;
 VAR_7.dev->of_node = VAR_6->dev.parent->of_node;
 VAR_7.driver_data = VAR_9;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_10 = FUNC_6(&VAR_6->dev, &VAR_8[VAR_11],
            &VAR_7);
  if (FUNC_1(VAR_10)) {
   FUNC_3(&VAR_6->dev,
    "failed to register %s regulator\n",
    VAR_8[VAR_11].name);
   return FUNC_2(VAR_10);
  }
 }

 FUNC_8(VAR_6, VAR_9);


 return FUNC_9(VAR_9->regmap, VAR_0, 0xef);
}
