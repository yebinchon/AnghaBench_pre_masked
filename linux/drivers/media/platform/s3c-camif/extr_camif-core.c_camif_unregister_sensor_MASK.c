
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_2__ {struct v4l2_subdev* sd; } ;
struct camif_dev {TYPE_1__ sensor; } ;


 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_4(struct camif_dev *VAR_0)
{
 struct v4l2_subdev *VAR_1 = VAR_0->sensor.sd;
 struct i2c_client *VAR_2 = VAR_1 ? FUNC_3(VAR_1) : ((void*)0);
 struct i2c_adapter *VAR_3;

 if (VAR_2 == ((void*)0))
  return;

 VAR_3 = VAR_2->adapter;
 FUNC_2(VAR_1);
 VAR_0->sensor.sd = ((void*)0);
 FUNC_1(VAR_2);
 FUNC_0(VAR_3);
}
