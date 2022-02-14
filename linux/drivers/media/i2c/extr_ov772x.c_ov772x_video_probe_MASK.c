
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov772x_priv {int hdl; int regmap; int subdev; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int *,char*,char const*,int,int,int,int) ;
 int FUNC_3 (struct ov772x_priv*) ;
 int FUNC_4 (struct ov772x_priv*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int *) ;
 struct i2c_client* FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ov772x_priv *VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_7(&VAR_5->subdev);
 int VAR_7, VAR_8, VAR_9, VAR_10;
 const char *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_4(VAR_5);
 if (VAR_12 < 0)
  return VAR_12;


 VAR_12 = FUNC_5(VAR_5->regmap, VAR_3, &VAR_7);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_12 = FUNC_5(VAR_5->regmap, VAR_4, &VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 switch (FUNC_0(VAR_7, VAR_8)) {
 case 129:
  VAR_11 = "ov7720";
  break;
 case 128:
  VAR_11 = "ov7725";
  break;
 default:
  FUNC_1(&VAR_6->dev,
   "Product ID error %x:%x\n", VAR_7, VAR_8);
  VAR_12 = -VAR_0;
  goto done;
 }

 VAR_12 = FUNC_5(VAR_5->regmap, VAR_1, &VAR_9);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_12 = FUNC_5(VAR_5->regmap, VAR_2, &VAR_10);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_2(&VAR_6->dev,
   "%s Product ID %0x:%0x Manufacturer ID %x:%x\n",
   VAR_11, VAR_7, VAR_8, VAR_9, VAR_10);

 VAR_12 = FUNC_6(&VAR_5->hdl);

done:
 FUNC_3(VAR_5);

 return VAR_12;
}
