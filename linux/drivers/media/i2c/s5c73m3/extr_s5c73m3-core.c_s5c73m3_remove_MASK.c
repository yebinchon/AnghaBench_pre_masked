
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; int ctrl_handler; } ;
struct s5c73m3 {struct v4l2_subdev sensor_sd; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 struct s5c73m3* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct s5c73m3*) ;
 int FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct s5c73m3 *VAR_2 = FUNC_2(VAR_1);
 struct v4l2_subdev *VAR_3 = &VAR_2->sensor_sd;

 FUNC_4(VAR_1);

 FUNC_5(VAR_1->ctrl_handler);
 FUNC_1(&VAR_1->entity);

 FUNC_6(VAR_3);
 FUNC_1(&VAR_3->entity);

 FUNC_3(VAR_2);

 return 0;
}
