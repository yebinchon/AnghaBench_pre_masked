
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_config {int * init_data; TYPE_2__* dev; } ;
typedef struct regulator_dev regmap ;
struct isl9305_pdata {int ** init_data; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {struct isl9305_pdata* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_2__*,char*,int,...) ;
 struct regulator_dev* FUNC_4 (struct i2c_client*,int *) ;
 struct regulator_dev* FUNC_5 (TYPE_2__*,TYPE_1__*,struct regulator_config*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2,
        const struct i2c_device_id *VAR_3)
{
 struct regulator_config VAR_4 = { };
 struct isl9305_pdata *VAR_5 = VAR_2->dev.platform_data;
 struct regulator_dev *VAR_6;
 struct regmap *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_4(VAR_2, &VAR_0);
 if (FUNC_1(VAR_7)) {
  VAR_9 = FUNC_2(VAR_7);
  FUNC_3(&VAR_2->dev, "Failed to create regmap: %d\n", VAR_9);
  return VAR_9;
 }

 VAR_4.dev = &VAR_2->dev;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  if (VAR_5)
   VAR_4.init_data = VAR_5->init_data[VAR_8];
  else
   VAR_4.init_data = ((void*)0);

  VAR_6 = FUNC_5(&VAR_2->dev,
            &VAR_1[VAR_8],
            &VAR_4);
  if (FUNC_1(VAR_6)) {
   VAR_9 = FUNC_2(VAR_6);
   FUNC_3(&VAR_2->dev, "Failed to register %s: %d\n",
    VAR_1[VAR_8].name, VAR_9);
   return VAR_9;
  }
 }

 return 0;
}
