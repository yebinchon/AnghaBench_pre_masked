
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int entity; } ;
struct i2c_client {int irq; } ;
struct adv7180_state {scalar_t__ irq; int mutex; int csi_client; int vpp_client; } ;


 int FUNC_0 (struct adv7180_state*) ;
 int FUNC_1 (struct adv7180_state*,int) ;
 int FUNC_2 (int ,struct adv7180_state*) ;
 struct v4l2_subdev* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct adv7180_state* FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_3(VAR_0);
 struct adv7180_state *VAR_2 = FUNC_7(VAR_1);

 FUNC_8(VAR_1);

 if (VAR_2->irq > 0)
  FUNC_2(VAR_0->irq, VAR_2);

 FUNC_5(&VAR_1->entity);
 FUNC_0(VAR_2);

 FUNC_4(VAR_2->vpp_client);
 FUNC_4(VAR_2->csi_client);

 FUNC_1(VAR_2, 0);

 FUNC_6(&VAR_2->mutex);

 return 0;
}
