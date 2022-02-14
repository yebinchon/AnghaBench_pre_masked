
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;




 int FUNC_0 (struct v4l2_subdev*,char*,int) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0,
  u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_1(VAR_0);

 switch (VAR_1) {
 case 129:
  FUNC_2(VAR_4, 0x00, 0x1241);
  break;
 case 128:
  FUNC_2(VAR_4, 0x00, 0x1441);
  break;
 default:
  FUNC_0(VAR_0, "input %d not supported\n", VAR_1);
  break;
 }
 return 0;
}
