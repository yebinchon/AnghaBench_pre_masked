
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct bq24190_dev_info {int dev; scalar_t__ charger; scalar_t__ battery; } ;


 int FUNC_0 (struct bq24190_dev_info*) ;
 int FUNC_1 (int ,char*,int) ;
 struct bq24190_dev_info* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_0)
{
 struct bq24190_dev_info *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_5(VAR_1->dev);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev, "pm_runtime_get failed: %i\n", VAR_2);
  FUNC_6(VAR_1->dev);
 }

 FUNC_0(VAR_1);
 if (VAR_1->battery)
  FUNC_8(VAR_1->battery);
 FUNC_8(VAR_1->charger);
 if (VAR_2 >= 0)
  FUNC_7(VAR_1->dev);
 FUNC_4(VAR_1->dev);
 FUNC_3(VAR_1->dev);

 return 0;
}
