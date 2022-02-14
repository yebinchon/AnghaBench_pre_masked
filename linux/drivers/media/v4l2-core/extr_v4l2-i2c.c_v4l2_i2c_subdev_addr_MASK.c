
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {unsigned short addr; } ;


 unsigned short VAR_0 ;
 struct i2c_client* FUNC_0 (struct v4l2_subdev*) ;

unsigned short FUNC_1(struct v4l2_subdev *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_0(VAR_1);

 return VAR_2 ? VAR_2->addr : VAR_0;
}
