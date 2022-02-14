
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct mt9m032 {int lock; int ctrls; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mt9m032* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct mt9m032 *VAR_2 = FUNC_3(VAR_1);

 FUNC_5(VAR_1);
 FUNC_4(&VAR_2->ctrls);
 FUNC_1(&VAR_1->entity);
 FUNC_2(&VAR_2->lock);
 return 0;
}
