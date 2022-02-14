
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {scalar_t__ data; } ;
struct lp87565 {unsigned int rev; int dev_type; int * dev; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
typedef enum lp87565_device_type { ____Placeholder_lp87565_device_type } lp87565_device_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 struct lp87565* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int *,int ,int *) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct lp87565*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct of_device_id* FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct lp87565 *VAR_10;
 const struct of_device_id *VAR_11;
 int VAR_12;
 unsigned int VAR_13;

 VAR_10 = FUNC_4(&VAR_8->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->dev = &VAR_8->dev;

 VAR_10->regmap = FUNC_6(VAR_8, &VAR_6);
 if (FUNC_1(VAR_10->regmap)) {
  VAR_12 = FUNC_2(VAR_10->regmap);
  FUNC_3(VAR_10->dev,
   "Failed to initialize register map: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_9(VAR_10->regmap, VAR_3, &VAR_13);
 if (VAR_12) {
  FUNC_3(VAR_10->dev, "Failed to read OTP ID\n");
  return VAR_12;
 }

 VAR_10->rev = VAR_13 & VAR_2;

 VAR_11 = FUNC_8(VAR_7, &VAR_8->dev);
 if (VAR_11)
  VAR_10->dev_type = (enum lp87565_device_type)VAR_11->data;

 FUNC_7(VAR_8, VAR_10);

 return FUNC_5(VAR_10->dev, VAR_4,
        VAR_5, FUNC_0(VAR_5),
        ((void*)0), 0, ((void*)0));
}
