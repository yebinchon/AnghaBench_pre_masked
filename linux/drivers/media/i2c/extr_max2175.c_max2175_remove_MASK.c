
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct max2175 {int ctrl_hdl; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 struct max2175* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct max2175 *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(&VAR_2->ctrl_hdl);
 FUNC_2(VAR_1);

 return 0;
}
