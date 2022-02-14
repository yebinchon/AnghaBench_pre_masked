
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;
struct ak7375_device {int dummy; } ;


 int FUNC_0 (struct ak7375_device*) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ak7375_device* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_1(VAR_0);
 struct ak7375_device *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(VAR_2);
 FUNC_2(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);

 return 0;
}
