
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;
struct et8ek8_sensor {int ctrl_handler; TYPE_1__* current_reglist; struct v4l2_subdev subdev; } ;
struct TYPE_2__ {int regs; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (int *) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct et8ek8_sensor *VAR_0)
{
 struct v4l2_subdev *VAR_1 = &VAR_0->subdev;
 struct i2c_client *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0->current_reglist->regs);
 if (VAR_3)
  goto fail;





 VAR_3 = FUNC_2(&VAR_0->ctrl_handler);
 if (VAR_3)
  goto fail;

 return 0;

fail:
 FUNC_0(&VAR_2->dev, "sensor configuration failed\n");

 return VAR_3;
}
