
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct imx258 {int dummy; } ;
struct i2c_client {int dev; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct imx258*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct imx258* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct imx258 *VAR_2 = FUNC_5(VAR_1);

 FUNC_6(VAR_1);
 FUNC_2(&VAR_1->entity);
 FUNC_1(VAR_2);

 FUNC_3(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 return 0;
}
