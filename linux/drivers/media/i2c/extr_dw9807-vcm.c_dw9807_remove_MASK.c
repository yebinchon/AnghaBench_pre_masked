
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;
struct dw9807_device {int dummy; } ;


 int FUNC_0 (struct dw9807_device*) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 struct dw9807_device* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_1(VAR_0);
 struct dw9807_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(&VAR_0->dev);

 FUNC_0(VAR_2);

 return 0;
}
