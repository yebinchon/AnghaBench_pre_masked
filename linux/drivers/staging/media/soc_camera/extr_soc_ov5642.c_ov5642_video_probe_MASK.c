
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct v4l2_subdev*,int) ;
 int FUNC_3 (struct i2c_client*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3)
{
 struct v4l2_subdev *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;
 u8 VAR_6, VAR_7;
 u16 VAR_8;

 VAR_5 = FUNC_2(VAR_4, 1);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 = FUNC_3(VAR_3, VAR_1, &VAR_6);
 if (VAR_5 < 0)
  goto done;

 VAR_8 = VAR_6 << 8;

 VAR_5 = FUNC_3(VAR_3, VAR_2, &VAR_7);
 if (VAR_5 < 0)
  goto done;

 VAR_8 |= VAR_7;

 FUNC_0(&VAR_3->dev, "Chip ID 0x%04x detected\n", VAR_8);

 if (VAR_8 != 0x5642) {
  VAR_5 = -VAR_0;
  goto done;
 }

 VAR_5 = 0;

done:
 FUNC_2(VAR_4, 0);
 return VAR_5;
}
