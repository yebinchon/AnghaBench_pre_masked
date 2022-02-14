
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int ctrl_handler; int entity; } ;
struct i2c_client {int dummy; } ;
struct adv76xx_state {int delayed_work_enable_hotplug; } ;


 int FUNC_0 (struct adv76xx_state*) ;
 int FUNC_1 (int *) ;
 struct v4l2_subdev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct v4l2_subdev*,int,int ) ;
 int FUNC_4 (int *) ;
 struct adv76xx_state* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (struct v4l2_subdev*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_2(VAR_0);
 struct adv76xx_state *VAR_2 = FUNC_5(VAR_1);


 FUNC_3(VAR_1, 0x40, 0);
 FUNC_3(VAR_1, 0x41, 0);
 FUNC_3(VAR_1, 0x46, 0);
 FUNC_3(VAR_1, 0x6e, 0);
 FUNC_3(VAR_1, 0x73, 0);

 FUNC_1(&VAR_2->delayed_work_enable_hotplug);
 FUNC_6(VAR_1);
 FUNC_4(&VAR_1->entity);
 FUNC_0(FUNC_5(VAR_1));
 FUNC_7(VAR_1->ctrl_handler);
 return 0;
}
