
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp873x {unsigned int rev; int * dev; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 struct lp873x* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,struct lp873x*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,int ,int ,int ,int *,int ,int *) ;
 int FUNC_8 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct lp873x *VAR_9;
 int VAR_10;
 unsigned int VAR_11;

 VAR_9 = FUNC_4(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->dev = &VAR_7->dev;

 VAR_9->regmap = FUNC_5(VAR_7, &VAR_6);
 if (FUNC_1(VAR_9->regmap)) {
  VAR_10 = FUNC_2(VAR_9->regmap);
  FUNC_3(VAR_9->dev,
   "Failed to initialize register map: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_8(VAR_9->regmap, VAR_3, &VAR_11);
 if (VAR_10) {
  FUNC_3(VAR_9->dev, "Failed to read OTP ID\n");
  return VAR_10;
 }

 VAR_9->rev = VAR_11 & VAR_2;

 FUNC_6(VAR_7, VAR_9);

 VAR_10 = FUNC_7(VAR_9->dev, VAR_4, VAR_5,
         FUNC_0(VAR_5), ((void*)0), 0, ((void*)0));

 return VAR_10;
}
