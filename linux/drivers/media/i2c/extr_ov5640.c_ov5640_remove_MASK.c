
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {int handler; } ;
struct TYPE_4__ {int entity; } ;
struct ov5640_dev {TYPE_1__ ctrls; TYPE_2__ sd; int lock; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ov5640_dev* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct ov5640_dev *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(&VAR_2->sd);
 FUNC_2(&VAR_2->lock);
 FUNC_1(&VAR_2->sd.entity);
 FUNC_5(&VAR_2->ctrls.handler);

 return 0;
}
