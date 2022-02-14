
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov5695 {int streaming; int mutex; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (struct ov5695*) ;
 int FUNC_1 (struct ov5695*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ov5695* FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct ov5695 *VAR_2 = FUNC_7(VAR_0);
 struct i2c_client *VAR_3 = VAR_2->client;
 int VAR_4 = 0;

 FUNC_2(&VAR_2->mutex);
 VAR_1 = !!VAR_1;
 if (VAR_1 == VAR_2->streaming)
  goto unlock_and_return;

 if (VAR_1) {
  VAR_4 = FUNC_4(&VAR_3->dev);
  if (VAR_4 < 0) {
   FUNC_6(&VAR_3->dev);
   goto unlock_and_return;
  }

  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4) {
   FUNC_8(VAR_0, "start stream failed while write regs\n");
   FUNC_5(&VAR_3->dev);
   goto unlock_and_return;
  }
 } else {
  FUNC_1(VAR_2);
  FUNC_5(&VAR_3->dev);
 }

 VAR_2->streaming = VAR_1;

unlock_and_return:
 FUNC_3(&VAR_2->mutex);

 return VAR_4;
}
