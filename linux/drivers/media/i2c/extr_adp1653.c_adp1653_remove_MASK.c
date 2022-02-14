
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int entity; } ;
struct adp1653_flash {TYPE_1__ subdev; int ctrls; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 struct adp1653_flash* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct adp1653_flash *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(&VAR_2->subdev);
 FUNC_3(&VAR_2->ctrls);
 FUNC_1(&VAR_2->subdev.entity);

 return 0;
}
