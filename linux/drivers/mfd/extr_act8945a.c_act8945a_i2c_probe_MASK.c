
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int VAR_0 ;
 int FUNC_2 (struct regmap*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int ,int ,int ,int *,int ,int *) ;
 struct regmap* FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct regmap*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_3,
         const struct i2c_device_id *VAR_4)
{
 int VAR_5;
 struct regmap *VAR_6;

 VAR_6 = FUNC_5(VAR_3, &VAR_2);
 if (FUNC_1(VAR_6)) {
  VAR_5 = FUNC_2(VAR_6);
  FUNC_3(&VAR_3->dev, "regmap init failed: %d\n", VAR_5);
  return VAR_5;
 }

 FUNC_6(VAR_3, VAR_6);

 VAR_5 = FUNC_4(&VAR_3->dev, VAR_0,
       VAR_1, FUNC_0(VAR_1),
       ((void*)0), 0, ((void*)0));
 if (VAR_5) {
  FUNC_3(&VAR_3->dev, "Failed to add sub devices\n");
  return VAR_5;
 }

 return 0;
}
