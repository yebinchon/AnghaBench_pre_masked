
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov8856 {int streaming; int mutex; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ov8856*) ;
 int FUNC_3 (struct ov8856*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ov8856* FUNC_7 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct ov8856 *VAR_2 = FUNC_7(VAR_0);
 struct i2c_client *VAR_3 = FUNC_8(VAR_0);
 int VAR_4 = 0;

 if (VAR_2->streaming == VAR_1)
  return 0;

 FUNC_0(&VAR_2->mutex);
 if (VAR_1) {
  VAR_4 = FUNC_4(&VAR_3->dev);
  if (VAR_4 < 0) {
   FUNC_6(&VAR_3->dev);
   FUNC_1(&VAR_2->mutex);
   return VAR_4;
  }

  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4) {
   VAR_1 = 0;
   FUNC_3(VAR_2);
   FUNC_5(&VAR_3->dev);
  }
 } else {
  FUNC_3(VAR_2);
  FUNC_5(&VAR_3->dev);
 }

 VAR_2->streaming = VAR_1;
 FUNC_1(&VAR_2->mutex);

 return VAR_4;
}
