
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov2640_priv {int subdev; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*,char const*,int ,int ,int ,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (int *,int) ;
 struct ov2640_priv* FUNC_6 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7)
{
 struct ov2640_priv *VAR_8 = FUNC_6(VAR_7);
 u8 VAR_9, VAR_10, VAR_11, VAR_12;
 const char *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_5(&VAR_8->subdev, 1);
 if (VAR_14 < 0)
  return VAR_14;




 FUNC_4(VAR_7, VAR_0, VAR_1);
 VAR_9 = FUNC_3(VAR_7, VAR_5);
 VAR_10 = FUNC_3(VAR_7, VAR_6);
 VAR_11 = FUNC_3(VAR_7, VAR_3);
 VAR_12 = FUNC_3(VAR_7, VAR_4);

 switch (FUNC_0(VAR_9, VAR_10)) {
 case 128:
  VAR_13 = "ov2640";
  break;
 default:
  FUNC_1(&VAR_7->dev,
   "Product ID error %x:%x\n", VAR_9, VAR_10);
  VAR_14 = -VAR_2;
  goto done;
 }

 FUNC_2(&VAR_7->dev,
   "%s Product ID %0x:%0x Manufacturer ID %x:%x\n",
   VAR_13, VAR_9, VAR_10, VAR_11, VAR_12);

done:
 FUNC_5(&VAR_8->subdev, 0);
 return VAR_14;
}
