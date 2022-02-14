
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int*) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_4)
{
 u8 VAR_5;
 int VAR_6;
 struct i2c_client *VAR_7 = FUNC_3(VAR_4);

 VAR_6 = FUNC_2(VAR_4, VAR_3, 0x01);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_1, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5 != 0x56) {
  FUNC_0(&VAR_7->dev, "ID High expected 0x56 got %x", VAR_5);
  return -VAR_0;
 }

 VAR_6 = FUNC_1(VAR_4, VAR_2, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5 != 0x47) {
  FUNC_0(&VAR_7->dev, "ID Low expected 0x47 got %x", VAR_5);
  return -VAR_0;
 }

 return FUNC_2(VAR_4, VAR_3, 0x00);
}
