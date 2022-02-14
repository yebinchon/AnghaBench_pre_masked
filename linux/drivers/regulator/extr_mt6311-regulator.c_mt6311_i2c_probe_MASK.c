
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct regulator_config {struct regulator_dev* regmap; int * dev; } ;
typedef struct regulator_dev regmap ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int *,char*,...) ;
 struct regulator_dev* FUNC_3 (struct i2c_client*,int *) ;
 struct regulator_dev* FUNC_4 (int *,int *,struct regulator_config*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_5 (struct regulator_dev*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_5,
  const struct i2c_device_id *VAR_6)
{
 struct regulator_config VAR_7 = { };
 struct regulator_dev *VAR_8;
 struct regmap *VAR_9;
 int VAR_10, VAR_11;
 unsigned int VAR_12;

 VAR_9 = FUNC_3(VAR_5, &VAR_3);
 if (FUNC_0(VAR_9)) {
  VAR_11 = FUNC_1(VAR_9);
  FUNC_2(&VAR_5->dev, "Failed to allocate register map: %d\n",
   VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_5(VAR_9, VAR_2, &VAR_12);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_5->dev, "Failed to read DEVICE_ID reg: %d\n", VAR_11);
  return VAR_11;
 }

 switch (VAR_12) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_2(&VAR_5->dev, "Unsupported device id = 0x%x.\n", VAR_12);
  return -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_7.dev = &VAR_5->dev;
  VAR_7.regmap = VAR_9;

  VAR_8 = FUNC_4(&VAR_5->dev,
   &VAR_4[VAR_10], &VAR_7);
  if (FUNC_0(VAR_8)) {
   FUNC_2(&VAR_5->dev,
    "Failed to register MT6311 regulator\n");
   return FUNC_1(VAR_8);
  }
 }

 return 0;
}
