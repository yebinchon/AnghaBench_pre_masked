
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct v4l2_subdev*,int ,int*) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*,int ,int) ;
 int FUNC_6 (struct v4l2_subdev*,int ,int ) ;
 struct i2c_client* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_2)
{
 int VAR_3;
 u8 VAR_4, VAR_5;
 struct i2c_client *VAR_6 = FUNC_7(VAR_2);

 VAR_3 = FUNC_2(VAR_2, VAR_0, &VAR_5);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_6(VAR_2, VAR_1,
     FUNC_0(VAR_1));
 if (VAR_3 < 0) {
  FUNC_1(&VAR_6->dev, "write sensor default regs error\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2, 0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0, &VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 if (!(VAR_4 & 0x01)) {
  FUNC_1(&VAR_6->dev, "Device was in SW standby");
  VAR_3 = FUNC_5(VAR_2, VAR_0, 0x01);
  if (VAR_3 < 0)
   return VAR_3;
 }




 return FUNC_4(VAR_2);
}
