
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;
struct cs53l32a_state {int hdl; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 struct cs53l32a_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct cs53l32a_state *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(VAR_1);
 FUNC_2(&VAR_2->hdl);
 return 0;
}
