
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int ctrl_handler; int entity; } ;
struct i2c_client {int dummy; } ;
struct adv7842_state {int delayed_work_enable_hotplug; } ;


 int FUNC_0 (struct v4l2_subdev*,int) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *) ;
 struct v4l2_subdev* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;
 struct adv7842_state* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_3(VAR_0);
 struct adv7842_state *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(VAR_1, 0);
 FUNC_2(&VAR_2->delayed_work_enable_hotplug);
 FUNC_7(VAR_1);
 FUNC_4(&VAR_1->entity);
 FUNC_1(VAR_1);
 FUNC_6(VAR_1->ctrl_handler);
 return 0;
}
