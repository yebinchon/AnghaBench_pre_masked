
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int hdl; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 TYPE_1__* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(&FUNC_1(VAR_1)->hdl);
 return 0;
}
