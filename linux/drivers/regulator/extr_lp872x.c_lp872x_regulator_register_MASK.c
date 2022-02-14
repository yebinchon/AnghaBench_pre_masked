
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regulator_desc {int id; } ;
struct regulator_config {int regmap; struct lp872x* driver_data; int init_data; int dev; } ;
struct lp872x {int num_regulators; scalar_t__ chipid; int dev; int regmap; } ;


 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,char*) ;
 struct regulator_dev* FUNC_3 (int ,struct regulator_desc const*,struct regulator_config*) ;
 struct regulator_desc* VAR_1 ;
 struct regulator_desc* VAR_2 ;
 int FUNC_4 (int ,struct lp872x*) ;

__attribute__((used)) static int FUNC_5(struct lp872x *VAR_3)
{
 const struct regulator_desc *VAR_4;
 struct regulator_config VAR_5 = { };
 struct regulator_dev *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->num_regulators; VAR_7++) {
  VAR_4 = (VAR_3->chipid == VAR_0) ? &VAR_1[VAR_7] :
      &VAR_2[VAR_7];

  VAR_5.dev = VAR_3->dev;
  VAR_5.init_data = FUNC_4(VAR_4->id, VAR_3);
  VAR_5.driver_data = VAR_3;
  VAR_5.regmap = VAR_3->regmap;

  VAR_6 = FUNC_3(VAR_3->dev, VAR_4, &VAR_5);
  if (FUNC_0(VAR_6)) {
   FUNC_2(VAR_3->dev, "regulator register err");
   return FUNC_1(VAR_6);
  }
 }

 return 0;
}
