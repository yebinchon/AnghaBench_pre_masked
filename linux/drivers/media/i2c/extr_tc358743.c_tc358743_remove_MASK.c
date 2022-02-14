
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int entity; } ;
struct tc358743_state {int hdl; int confctl_mutex; int cec_adap; int delayed_work_enable_hotplug; int work_i2c_poll; int timer; TYPE_1__* i2c_client; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct v4l2_subdev* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct tc358743_state* FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_4(VAR_0);
 struct tc358743_state *VAR_2 = FUNC_7(VAR_1);

 if (!VAR_2->i2c_client->irq) {
  FUNC_2(&VAR_2->timer);
  FUNC_3(&VAR_2->work_i2c_poll);
 }
 FUNC_0(&VAR_2->delayed_work_enable_hotplug);
 FUNC_1(VAR_2->cec_adap);
 FUNC_8(VAR_1);
 FUNC_10(VAR_1);
 FUNC_6(&VAR_2->confctl_mutex);
 FUNC_5(&VAR_1->entity);
 FUNC_9(&VAR_2->hdl);

 return 0;
}
