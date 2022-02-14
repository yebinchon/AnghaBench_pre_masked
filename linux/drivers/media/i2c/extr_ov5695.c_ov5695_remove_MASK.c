
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct ov5695 {int mutex; int ctrl_handler; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (struct ov5695*) ;
 struct v4l2_subdev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ov5695* FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_1(VAR_0);
 struct ov5695 *VAR_2 = FUNC_7(VAR_1);

 FUNC_8(VAR_1);



 FUNC_9(&VAR_2->ctrl_handler);
 FUNC_3(&VAR_2->mutex);

 FUNC_4(&VAR_0->dev);
 if (!FUNC_6(&VAR_0->dev))
  FUNC_0(VAR_2);
 FUNC_5(&VAR_0->dev);

 return 0;
}
