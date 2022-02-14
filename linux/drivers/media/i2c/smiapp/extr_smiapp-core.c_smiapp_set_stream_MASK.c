
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct smiapp_sensor {int streaming; TYPE_1__* src; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct smiapp_sensor*) ;
 int FUNC_6 (struct smiapp_sensor*) ;
 struct smiapp_sensor* FUNC_7 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct smiapp_sensor *VAR_4 = FUNC_7(VAR_2);
 struct i2c_client *VAR_5 = FUNC_8(&VAR_4->src->sd);
 int VAR_6;

 if (VAR_4->streaming == VAR_3)
  return 0;

 if (VAR_3) {
  VAR_6 = FUNC_0(&VAR_5->dev);
  if (VAR_6 < 0) {
   if (VAR_6 != -VAR_1 && VAR_6 != -VAR_0)
    FUNC_4(&VAR_5->dev);
   FUNC_2(&VAR_5->dev);
   return VAR_6;
  }

  VAR_4->streaming = 1;

  VAR_6 = FUNC_5(VAR_4);
  if (VAR_6 < 0)
   VAR_4->streaming = 0;
 } else {
  VAR_6 = FUNC_6(VAR_4);
  VAR_4->streaming = 0;
  FUNC_1(&VAR_5->dev);
  FUNC_3(&VAR_5->dev);
 }

 return VAR_6;
}
