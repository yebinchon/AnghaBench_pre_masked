
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct msp_state {int i2s_mode; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,char*,int) ;
 int VAR_1 ;
 struct msp_state* FUNC_1 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, u32 VAR_3)
{
 struct msp_state *VAR_4 = FUNC_1(VAR_2);
 struct i2c_client *VAR_5 = FUNC_2(VAR_2);

 FUNC_0(&VAR_5->dev, 1, VAR_1, "Setting I2S speed to %d\n", VAR_3);

 switch (VAR_3) {
  case 1024000:
   VAR_4->i2s_mode = 0;
   break;
  case 2048000:
   VAR_4->i2s_mode = 1;
   break;
  default:
   return -VAR_0;
 }
 return 0;
}
