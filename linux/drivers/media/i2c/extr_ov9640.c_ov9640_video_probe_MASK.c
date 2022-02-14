
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct ov9640_priv {int revision; int subdev; int hdl; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*,char const*,int ,int ,int ,int ) ;
 struct v4l2_subdev* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ,int *) ;
 int FUNC_5 (int *,int) ;
 struct ov9640_priv* FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_5)
{
 struct v4l2_subdev *VAR_6 = FUNC_3(VAR_5);
 struct ov9640_priv *VAR_7 = FUNC_6(VAR_6);
 u8 VAR_8, VAR_9, VAR_10, VAR_11;
 const char *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(&VAR_7->subdev, 1);
 if (VAR_13 < 0)
  return VAR_13;





 VAR_13 = FUNC_4(VAR_5, VAR_3, &VAR_8);
 if (!VAR_13)
  VAR_13 = FUNC_4(VAR_5, VAR_4, &VAR_9);
 if (!VAR_13)
  VAR_13 = FUNC_4(VAR_5, VAR_1, &VAR_10);
 if (!VAR_13)
  VAR_13 = FUNC_4(VAR_5, VAR_2, &VAR_11);
 if (VAR_13)
  goto done;

 switch (FUNC_0(VAR_8, VAR_9)) {
 case 129:
  VAR_12 = "ov9640";
  VAR_7->revision = 2;
  break;
 case 128:
  VAR_12 = "ov9640";
  VAR_7->revision = 3;
  break;
 default:
  FUNC_1(&VAR_5->dev, "Product ID error %x:%x\n", VAR_8, VAR_9);
  VAR_13 = -VAR_0;
  goto done;
 }

 FUNC_2(&VAR_5->dev, "%s Product ID %0x:%0x Manufacturer ID %x:%x\n",
   VAR_12, VAR_8, VAR_9, VAR_10, VAR_11);

 VAR_13 = FUNC_7(&VAR_7->hdl);

done:
 FUNC_5(&VAR_7->subdev, 0);
 return VAR_13;
}
