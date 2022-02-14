
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int ctrl_handler; } ;
struct si4713_device {scalar_t__ power_state; int pd; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct si4713_device*,int ) ;
 struct si4713_device* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_0(VAR_1);
 struct si4713_device *VAR_3 = FUNC_3(VAR_2);

 FUNC_1(VAR_3->pd);

 if (VAR_3->power_state)
  FUNC_2(VAR_3, VAR_0);

 FUNC_5(VAR_2);
 FUNC_4(VAR_2->ctrl_handler);

 return 0;
}
