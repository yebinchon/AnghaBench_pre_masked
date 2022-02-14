
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int name; int entity; int fwnode; } ;
struct v4l2_async_subdev {int dummy; } ;
struct v4l2_async_notifier {int sd; } ;
struct TYPE_2__ {int entity; } ;
struct mipid02_dev {struct v4l2_subdev* s_subdev; TYPE_1__ sd; struct i2c_client* i2c_client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,struct v4l2_subdev*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int,int *,int ,int) ;
 int FUNC_3 (int *,int ,int ) ;
 struct mipid02_dev* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_async_notifier *VAR_3,
          struct v4l2_subdev *VAR_4,
          struct v4l2_async_subdev *VAR_5)
{
 struct mipid02_dev *VAR_6 = FUNC_4(VAR_3->sd);
 struct i2c_client *VAR_7 = VAR_6->i2c_client;
 int VAR_8;
 int VAR_9;

 FUNC_0(&VAR_7->dev, "sensor_async_bound call %p", VAR_4);

 VAR_8 = FUNC_3(&VAR_4->entity,
       VAR_4->fwnode,
       VAR_2);
 if (VAR_8 < 0) {
  FUNC_1(&VAR_7->dev, "Couldn't find output pad for subdev %s\n",
   VAR_4->name);
  return VAR_8;
 }

 VAR_9 = FUNC_2(&VAR_4->entity, VAR_8,
        &VAR_6->sd.entity, 0,
        VAR_0 |
        VAR_1);
 if (VAR_9) {
  FUNC_1(&VAR_7->dev, "Couldn't create media link %d", VAR_9);
  return VAR_9;
 }

 VAR_6->s_subdev = VAR_4;

 return 0;
}
