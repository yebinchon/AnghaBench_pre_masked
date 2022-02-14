
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int ctrl_handler; int entity; } ;
struct imx355 {int mutex; } ;
struct i2c_client {int dev; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct imx355* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct imx355 *VAR_2 = FUNC_5(VAR_1);

 FUNC_6(VAR_1);
 FUNC_1(&VAR_1->entity);
 FUNC_7(VAR_1->ctrl_handler);

 FUNC_3(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);

 FUNC_2(&VAR_2->mutex);

 return 0;
}
