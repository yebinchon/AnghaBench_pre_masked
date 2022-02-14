
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct ov9740_priv {int model; int revision; int manid; int smiaver; int subdev; int hdl; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int,int,int,int) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int*) ;
 int FUNC_3 (int *,int) ;
 struct ov9740_priv* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6)
{
 struct v4l2_subdev *VAR_7 = FUNC_1(VAR_6);
 struct ov9740_priv *VAR_8 = FUNC_4(VAR_7);
 u8 VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(&VAR_8->subdev, 1);
 if (VAR_11 < 0)
  return VAR_11;




 VAR_11 = FUNC_2(VAR_6, VAR_2, &VAR_9);
 if (VAR_11 < 0)
  goto done;

 VAR_11 = FUNC_2(VAR_6, VAR_3, &VAR_10);
 if (VAR_11 < 0)
  goto done;

 VAR_8->model = (VAR_9 << 8) | VAR_10;

 VAR_11 = FUNC_2(VAR_6, VAR_4, &VAR_8->revision);
 if (VAR_11 < 0)
  goto done;

 VAR_11 = FUNC_2(VAR_6, VAR_1, &VAR_8->manid);
 if (VAR_11 < 0)
  goto done;

 VAR_11 = FUNC_2(VAR_6, VAR_5, &VAR_8->smiaver);
 if (VAR_11 < 0)
  goto done;

 if (VAR_8->model != 0x9740) {
  VAR_11 = -VAR_0;
  goto done;
 }

 FUNC_0(&VAR_6->dev, "ov9740 Model ID 0x%04x, Revision 0x%02x, Manufacturer 0x%02x, SMIA Version 0x%02x\n",
   VAR_8->model, VAR_8->revision, VAR_8->manid, VAR_8->smiaver);

 VAR_11 = FUNC_5(&VAR_8->hdl);

done:
 FUNC_3(&VAR_8->subdev, 0);
 return VAR_11;
}
