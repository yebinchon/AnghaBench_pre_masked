
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {struct mcp16502* driver_data; struct regulator_dev* regmap; struct device* dev; } ;
typedef struct regulator_dev regmap ;
struct mcp16502 {struct regulator_dev* lpm; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct device*,char*,int,...) ;
 struct regulator_dev* FUNC_3 (struct device*,char*,int ) ;
 struct mcp16502* FUNC_4 (struct device*,int,int ) ;
 struct regulator_dev* FUNC_5 (struct i2c_client*,int *) ;
 struct regulator_dev* FUNC_6 (struct device*,TYPE_1__*,struct regulator_config*) ;
 int FUNC_7 (struct i2c_client*,struct mcp16502*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_8 (struct mcp16502*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7,
     const struct i2c_device_id *VAR_8)
{
 struct regulator_config VAR_9 = { };
 struct regulator_dev *VAR_10;
 struct device *VAR_11;
 struct mcp16502 *VAR_12;
 struct regmap *VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = &VAR_7->dev;
 VAR_9.dev = VAR_11;

 VAR_12 = FUNC_4(VAR_11, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_7, &VAR_6);
 if (FUNC_0(VAR_13)) {
  VAR_15 = FUNC_1(VAR_13);
  FUNC_2(VAR_11, "regmap init failed: %d\n", VAR_15);
  return VAR_15;
 }

 FUNC_7(VAR_7, VAR_12);
 VAR_9.regmap = VAR_13;
 VAR_9.driver_data = VAR_12;

 VAR_12->lpm = FUNC_3(VAR_11, "lpm", VAR_2);
 if (FUNC_0(VAR_12->lpm)) {
  FUNC_2(VAR_11, "failed to get lpm pin: %ld\n", FUNC_1(VAR_12->lpm));
  return FUNC_1(VAR_12->lpm);
 }

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  VAR_10 = FUNC_6(VAR_11, &VAR_5[VAR_14], &VAR_9);
  if (FUNC_0(VAR_10)) {
   FUNC_2(VAR_11,
    "failed to register %s regulator %ld\n",
    VAR_5[VAR_14].name, FUNC_1(VAR_10));
   return FUNC_1(VAR_10);
  }
 }

 FUNC_8(VAR_12, VAR_3);

 return 0;
}
