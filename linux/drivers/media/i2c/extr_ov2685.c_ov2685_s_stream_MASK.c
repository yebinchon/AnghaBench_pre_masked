
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov2685 {int streaming; int mutex; struct i2c_client* client; int ctrl_handler; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i2c_client*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ov2685* FUNC_7 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct ov2685 *VAR_6 = FUNC_7(VAR_4);
 struct i2c_client *VAR_7 = VAR_6->client;
 int VAR_8 = 0;

 FUNC_1(&VAR_6->mutex);

 VAR_5 = !!VAR_5;
 if (VAR_5 == VAR_6->streaming)
  goto unlock_and_return;

 if (VAR_5) {
  VAR_8 = FUNC_4(&VAR_6->client->dev);
  if (VAR_8 < 0) {
   FUNC_6(&VAR_7->dev);
   goto unlock_and_return;
  }
  VAR_8 = FUNC_0(&VAR_6->ctrl_handler);
  if (VAR_8) {
   FUNC_5(&VAR_7->dev);
   goto unlock_and_return;
  }
  VAR_8 = FUNC_3(VAR_7, VAR_1,
    VAR_0, VAR_3);
  if (VAR_8) {
   FUNC_5(&VAR_7->dev);
   goto unlock_and_return;
  }
 } else {
  FUNC_3(VAR_7, VAR_1,
    VAR_0, VAR_2);
  FUNC_5(&VAR_6->client->dev);
 }

 VAR_6->streaming = VAR_5;

unlock_and_return:
 FUNC_2(&VAR_6->mutex);

 return VAR_8;
}
