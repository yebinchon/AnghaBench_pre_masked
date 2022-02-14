
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_init_data {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct isl_pmic* driver_data; struct regulator_init_data* init_data; int * dev; } ;
struct isl_pmic {int mtx; struct i2c_client* client; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int *,char*,int ) ;
 struct regulator_init_data* FUNC_3 (int *) ;
 struct isl_pmic* FUNC_4 (int *,int,int ) ;
 struct regulator_dev* FUNC_5 (int *,int *,struct regulator_config*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct isl_pmic*) ;
 int * VAR_4 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_5,
         const struct i2c_device_id *VAR_6)
{
 struct regulator_dev *VAR_7;
 struct regulator_config VAR_8 = { };
 struct regulator_init_data *VAR_9 = FUNC_3(&VAR_5->dev);
 struct isl_pmic *VAR_10;
 int VAR_11;

 if (!FUNC_6(VAR_5->adapter, VAR_3))
  return -VAR_0;

 VAR_10 = FUNC_4(&VAR_5->dev, sizeof(struct isl_pmic), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->client = VAR_5;

 FUNC_8(&VAR_10->mtx);

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  VAR_8.dev = &VAR_5->dev;
  if (VAR_11 == 0)
   VAR_8.init_data = VAR_9;
  else
   VAR_8.init_data = ((void*)0);
  VAR_8.driver_data = VAR_10;

  VAR_7 = FUNC_5(&VAR_5->dev, &VAR_4[VAR_11], &VAR_8);
  if (FUNC_0(VAR_7)) {
   FUNC_2(&VAR_5->dev, "failed to register %s\n", VAR_6->name);
   return FUNC_1(VAR_7);
  }
 }

 FUNC_7(VAR_5, VAR_10);

 return 0;
}
