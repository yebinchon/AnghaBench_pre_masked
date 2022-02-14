
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct s5k4ecgx {int handler; int lock; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct s5k4ecgx*) ;
 struct s5k4ecgx* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct s5k4ecgx *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(&VAR_2->lock);
 FUNC_3(VAR_2);
 FUNC_6(VAR_1);
 FUNC_5(&VAR_2->handler);
 FUNC_1(&VAR_1->entity);

 return 0;
}
