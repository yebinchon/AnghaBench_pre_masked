
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct lp87565* driver_data; TYPE_2__* dev; } ;
struct TYPE_5__ {int of_node; int parent; } ;
struct platform_device {int name; TYPE_2__ dev; } ;
struct lp87565 {int dev_type; TYPE_3__* dev; int regmap; } ;
struct TYPE_6__ {int of_node; } ;
struct TYPE_4__ {int desc; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (TYPE_3__*,char*,int ) ;
 struct lp87565* FUNC_3 (int ) ;
 struct regulator_dev* FUNC_4 (TYPE_2__*,int *,struct regulator_config*) ;
 int FUNC_5 (struct platform_device*,struct lp87565*) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_6)
{
 struct lp87565 *VAR_7 = FUNC_3(VAR_6->dev.parent);
 struct regulator_config VAR_8 = { };
 struct regulator_dev *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 FUNC_5(VAR_6, VAR_7);

 VAR_8.dev = &VAR_6->dev;
 VAR_8.dev->of_node = VAR_7->dev->of_node;
 VAR_8.driver_data = VAR_7;
 VAR_8.regmap = VAR_7->regmap;

 switch (VAR_7->dev_type) {
 case 128:
  VAR_11 = VAR_1;
  VAR_12 = VAR_2;
  break;
 case 129:
  VAR_11 = VAR_4;
  VAR_12 = VAR_4;
  break;
 default:
  VAR_11 = VAR_0;
  VAR_12 = VAR_3;
  break;
 }

 for (VAR_10 = VAR_11; VAR_10 <= VAR_12; VAR_10++) {
  VAR_9 = FUNC_4(&VAR_6->dev, &VAR_5[VAR_10].desc,
            &VAR_8);
  if (FUNC_0(VAR_9)) {
   FUNC_2(VAR_7->dev, "failed to register %s regulator\n",
    VAR_6->name);
   return FUNC_1(VAR_9);
  }
 }

 return 0;
}
