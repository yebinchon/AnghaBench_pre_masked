
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct imx319 {int streaming; int mutex; int hflip; int vflip; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct imx319*) ;
 int FUNC_2 (struct imx319*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct imx319* FUNC_8 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_9 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct imx319 *VAR_2 = FUNC_8(VAR_0);
 struct i2c_client *VAR_3 = FUNC_9(VAR_0);
 int VAR_4 = 0;

 FUNC_3(&VAR_2->mutex);
 if (VAR_2->streaming == VAR_1) {
  FUNC_4(&VAR_2->mutex);
  return 0;
 }

 if (VAR_1) {
  VAR_4 = FUNC_5(&VAR_3->dev);
  if (VAR_4 < 0) {
   FUNC_7(&VAR_3->dev);
   goto err_unlock;
  }





  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   goto err_rpm_put;
 } else {
  FUNC_2(VAR_2);
  FUNC_6(&VAR_3->dev);
 }

 VAR_2->streaming = VAR_1;


 FUNC_0(VAR_2->vflip, VAR_1);
 FUNC_0(VAR_2->hflip, VAR_1);

 FUNC_4(&VAR_2->mutex);

 return VAR_4;

err_rpm_put:
 FUNC_6(&VAR_3->dev);
err_unlock:
 FUNC_4(&VAR_2->mutex);

 return VAR_4;
}
