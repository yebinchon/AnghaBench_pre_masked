
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps_pmic {int regmap; int * rdev; struct tps_driver_data* driver_data; } ;
struct tps_driver_data {int * desc; } ;
struct regulator_init_data {int dummy; } ;
struct regulator_config {struct regulator_init_data* init_data; int regmap; struct tps_pmic* driver_data; int * dev; } ;
struct i2c_device_id {int name; scalar_t__ driver_data; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int) ;
 struct regulator_init_data* FUNC_3 (int *) ;
 struct tps_pmic* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (int *,int *,struct regulator_config*) ;
 int FUNC_7 (struct i2c_client*,struct tps_pmic*) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_6,
         const struct i2c_device_id *VAR_7)
{
 struct regulator_init_data *VAR_8 = FUNC_3(&VAR_6->dev);
 struct regulator_config VAR_9 = { };
 struct tps_pmic *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_10 = FUNC_4(&VAR_6->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->driver_data = (struct tps_driver_data *)VAR_7->driver_data;

 VAR_10->regmap = FUNC_5(VAR_6, &VAR_5);
 if (FUNC_0(VAR_10->regmap)) {
  VAR_12 = FUNC_1(VAR_10->regmap);
  FUNC_2(&VAR_6->dev, "Failed to allocate register map: %d\n",
   VAR_12);
  return VAR_12;
 }


 VAR_9.dev = &VAR_6->dev;
 VAR_9.driver_data = VAR_10;
 VAR_9.regmap = VAR_10->regmap;

 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (VAR_8)
   VAR_9.init_data = &VAR_8[VAR_11];


  VAR_10->rdev[VAR_11] = FUNC_6(&VAR_6->dev,
     &VAR_10->driver_data->desc[VAR_11], &VAR_9);
  if (FUNC_0(VAR_10->rdev[VAR_11])) {
   FUNC_2(&VAR_6->dev, "failed to register %s\n",
    VAR_7->name);
   return FUNC_1(VAR_10->rdev[VAR_11]);
  }
 }

 FUNC_7(VAR_6, VAR_10);


 FUNC_8(VAR_10->regmap, VAR_3,
      VAR_4, 0);

 return 0;
}
