
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int entity; } ;
struct mipid02_dev {int lock; TYPE_1__ sd; int notifier; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mipid02_dev*) ;
 int FUNC_3 (int *) ;
 struct mipid02_dev* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_0(VAR_0);
 struct mipid02_dev *VAR_2 = FUNC_4(VAR_1);

 FUNC_6(&VAR_2->notifier);
 FUNC_5(&VAR_2->notifier);
 FUNC_7(&VAR_2->sd);
 FUNC_2(VAR_2);
 FUNC_1(&VAR_2->sd.entity);
 FUNC_3(&VAR_2->lock);

 return 0;
}
