
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap_config {int val_bits; int * lock_arg; } ;
struct ksz_device {scalar_t__ pdata; int * regmap; int regmap_mutex; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_3__ {scalar_t__ platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (struct regmap_config*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char*,int ,int) ;
 int FUNC_4 (struct i2c_client*,struct regmap_config*) ;
 int FUNC_5 (struct i2c_client*,struct ksz_device*) ;
 struct regmap_config* VAR_1 ;
 int FUNC_6 (struct ksz_device*) ;
 struct ksz_device* FUNC_7 (TYPE_1__*,struct i2c_client*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_2,
        const struct i2c_device_id *VAR_3)
{
 struct regmap_config VAR_4;
 struct ksz_device *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_7(&VAR_2->dev, VAR_2);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  VAR_4 = VAR_1[VAR_6];
  VAR_4.lock_arg = &VAR_5->regmap_mutex;
  VAR_5->regmap[VAR_6] = FUNC_4(VAR_2, &VAR_4);
  if (FUNC_1(VAR_5->regmap[VAR_6])) {
   VAR_7 = FUNC_2(VAR_5->regmap[VAR_6]);
   FUNC_3(&VAR_2->dev,
    "Failed to initialize regmap%i: %d\n",
    VAR_1[VAR_6].val_bits, VAR_7);
   return VAR_7;
  }
 }

 if (VAR_2->dev.platform_data)
  VAR_5->pdata = VAR_2->dev.platform_data;

 VAR_7 = FUNC_6(VAR_5);


 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_2, VAR_5);

 return 0;
}
