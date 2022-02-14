
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, u32 *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_1);







 if ((FUNC_0(VAR_3, 0x40c) & 0x00010000) == 0)
  *VAR_2 |= VAR_0;

 return 0;
}
