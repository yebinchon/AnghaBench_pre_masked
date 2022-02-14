
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rn5t618 {int variant; int regmap; } ;
struct regulator_dev {int dummy; } ;
struct regulator_desc {int name; } ;
struct regulator_config {int regmap; int dev; } ;
struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct regulator_desc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;



 int FUNC_3 (TYPE_1__*,char*,int ) ;
 struct rn5t618* FUNC_4 (int ) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,struct regulator_desc const*,struct regulator_config*) ;
 struct regulator_desc* VAR_1 ;
 struct regulator_desc* VAR_2 ;
 struct regulator_desc* VAR_3 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_4)
{
 struct rn5t618 *VAR_5 = FUNC_4(VAR_4->dev.parent);
 struct regulator_config VAR_6 = { };
 struct regulator_dev *VAR_7;
 const struct regulator_desc *VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 switch (VAR_5->variant) {
 case 129:
  VAR_8 = VAR_2;
  VAR_10 = FUNC_0(VAR_2);
  break;
 case 128:
  VAR_8 = VAR_3;
  VAR_10 = FUNC_0(VAR_3);
  break;
 case 130:
  VAR_8 = VAR_1;
  VAR_10 = FUNC_0(VAR_1);
  break;
 default:
  return -VAR_0;
 }

 VAR_6.dev = VAR_4->dev.parent;
 VAR_6.regmap = VAR_5->regmap;

 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_7 = FUNC_5(&VAR_4->dev,
            &VAR_8[VAR_9],
            &VAR_6);
  if (FUNC_1(VAR_7)) {
   FUNC_3(&VAR_4->dev, "failed to register %s regulator\n",
    VAR_8[VAR_9].name);
   return FUNC_2(VAR_7);
  }
 }

 return 0;
}
