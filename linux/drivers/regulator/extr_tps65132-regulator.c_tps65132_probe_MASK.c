
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tps65132_regulator {struct device* dev; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct tps65132_regulator* driver_data; struct device* dev; struct regulator_dev* regmap; } ;
typedef struct regulator_dev regmap ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_2 ;
 int FUNC_2 (struct device*,char*,int,...) ;
 struct tps65132_regulator* FUNC_3 (struct device*,int,int ) ;
 struct regulator_dev* FUNC_4 (struct i2c_client*,int *) ;
 struct regulator_dev* FUNC_5 (struct device*,TYPE_1__*,struct regulator_config*) ;
 int FUNC_6 (struct i2c_client*,struct tps65132_regulator*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5,
     const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct tps65132_regulator *VAR_8;
 struct regulator_dev *VAR_9;
 struct regmap *VAR_10;
 struct regulator_config VAR_11 = { };
 int VAR_12;
 int VAR_13;

 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_5, &VAR_3);
 if (FUNC_0(VAR_10)) {
  VAR_13 = FUNC_1(VAR_10);
  FUNC_2(VAR_7, "regmap init failed: %d\n", VAR_13);
  return VAR_13;
 }

 FUNC_6(VAR_5, VAR_8);
 VAR_8->dev = VAR_7;

 for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
  VAR_11.regmap = VAR_10;
  VAR_11.dev = VAR_7;
  VAR_11.driver_data = VAR_8;

  VAR_9 = FUNC_5(VAR_7, &VAR_4[VAR_12],
            &VAR_11);
  if (FUNC_0(VAR_9)) {
   VAR_13 = FUNC_1(VAR_9);
   FUNC_2(VAR_7, "regulator %s register failed: %d\n",
    VAR_4[VAR_12].name, VAR_13);
   return VAR_13;
  }
 }
 return 0;
}
