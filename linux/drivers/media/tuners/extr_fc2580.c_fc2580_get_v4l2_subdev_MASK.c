
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {scalar_t__ ops; } ;
struct i2c_client {int dummy; } ;
struct fc2580_dev {struct v4l2_subdev subdev; } ;


 struct fc2580_dev* FUNC_0 (struct i2c_client*) ;

__attribute__((used)) static struct v4l2_subdev *FUNC_1(struct i2c_client *VAR_0)
{
 struct fc2580_dev *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->subdev.ops)
  return &VAR_1->subdev;
 else
  return ((void*)0);
}
