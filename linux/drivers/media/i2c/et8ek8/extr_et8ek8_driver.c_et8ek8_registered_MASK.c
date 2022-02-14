
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dev; } ;
struct et8ek8_sensor {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct et8ek8_sensor*,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (struct et8ek8_sensor*) ;
 struct et8ek8_sensor* FUNC_7 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int
FUNC_9(struct v4l2_subdev *VAR_2)
{
 struct et8ek8_sensor *VAR_3 = FUNC_7(VAR_2);
 struct i2c_client *VAR_4 = FUNC_8(VAR_2);
 int VAR_5;

 FUNC_1(&VAR_4->dev, "registered!");

 VAR_5 = FUNC_3(&VAR_4->dev, &VAR_1);
 if (VAR_5) {
  FUNC_2(&VAR_4->dev, "could not register sysfs entry\n");
  return VAR_5;
 }

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5)
  goto err_file;

 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5) {
  FUNC_2(&VAR_4->dev, "controls initialization failed\n");
  goto err_file;
 }

 FUNC_0(VAR_3, ((void*)0), 0, VAR_0);

 return 0;

err_file:
 FUNC_4(&VAR_4->dev, &VAR_1);

 return VAR_5;
}
