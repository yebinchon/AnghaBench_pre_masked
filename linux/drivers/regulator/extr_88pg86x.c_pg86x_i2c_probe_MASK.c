
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {int * dev; } ;
typedef struct regulator_dev regmap ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (int *,char*,int,...) ;
 struct regulator_dev* FUNC_4 (struct i2c_client*,int *) ;
 struct regulator_dev* FUNC_5 (int *,TYPE_1__*,struct regulator_config*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2)
{
 int VAR_3, VAR_4;
 struct regulator_config VAR_5 = {.dev = &VAR_2->dev};
 struct regmap *VAR_6 = FUNC_4(VAR_2, &VAR_0);

 if (FUNC_1(VAR_6)) {
  VAR_4 = FUNC_2(VAR_6);
  FUNC_3(&VAR_2->dev, "regmap init failed: %d\n", VAR_4);
  return VAR_4;
 }

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  struct regulator_dev *VAR_7;
  VAR_7 = FUNC_5(&VAR_2->dev,
            &VAR_1[VAR_3],
            &VAR_5);
  if (FUNC_1(VAR_7)) {
   VAR_4 = FUNC_2(VAR_7);
   FUNC_3(&VAR_2->dev, "failed to register %s: %d\n",
    VAR_1[VAR_3].name, VAR_4);
   return VAR_4;
  }
 }
 return 0;
}
