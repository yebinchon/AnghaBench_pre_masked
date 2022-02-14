
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int fwnode; int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

void FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 && !VAR_1->dev.of_node && !VAR_1->dev.fwnode)
  FUNC_0(VAR_1);
}
