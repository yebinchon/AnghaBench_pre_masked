
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int VAR_0 ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,int ,int ,int ,int *,int ,int *) ;
 struct regmap* FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct regmap*) ;
 int FUNC_7 (struct device*,struct regmap*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct regmap *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_3, &VAR_1);
 if (FUNC_1(VAR_5)) {
  FUNC_3(VAR_4, "devm_regmap_init_i2c Error %ld\n",
   FUNC_2(VAR_5));
  return FUNC_2(VAR_5);
 }

 FUNC_6(VAR_3, VAR_5);

 VAR_6 = FUNC_7(VAR_4, VAR_5);
 if (VAR_6 < 0) {
  FUNC_3(VAR_4, "TPS68470 Init Error %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_4, VAR_0, VAR_2,
         FUNC_0(VAR_2), ((void*)0), 0, ((void*)0));
 if (VAR_6 < 0) {
  FUNC_3(VAR_4, "devm_mfd_add_devices failed: %d\n", VAR_6);
  return VAR_6;
 }

 return 0;
}
