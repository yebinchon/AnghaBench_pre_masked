
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9m001 {int streaming; int mutex; int hdl; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 struct mt9m001* FUNC_7 (struct i2c_client*) ;
 struct i2c_client* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_8(VAR_1);
 struct mt9m001 *VAR_4 = FUNC_7(VAR_3);
 int VAR_5 = 0;

 FUNC_2(&VAR_4->mutex);

 if (VAR_4->streaming == VAR_2)
  goto done;

 if (VAR_2) {
  VAR_5 = FUNC_4(&VAR_3->dev);
  if (VAR_5 < 0)
   goto put_unlock;

  VAR_5 = FUNC_1(VAR_1);
  if (VAR_5)
   goto put_unlock;

  VAR_5 = FUNC_0(&VAR_4->hdl);
  if (VAR_5)
   goto put_unlock;


  VAR_5 = FUNC_6(VAR_3, VAR_0, 2);
  if (VAR_5 < 0)
   goto put_unlock;
 } else {

  FUNC_6(VAR_3, VAR_0, 0);
  FUNC_5(&VAR_3->dev);
 }

 VAR_4->streaming = VAR_2;
done:
 FUNC_3(&VAR_4->mutex);

 return 0;

put_unlock:
 FUNC_5(&VAR_3->dev);
 FUNC_3(&VAR_4->mutex);

 return VAR_5;
}
