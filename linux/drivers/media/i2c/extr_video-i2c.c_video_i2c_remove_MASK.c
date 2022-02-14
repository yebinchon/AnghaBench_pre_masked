
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_i2c_data {int vdev; TYPE_1__* chip; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int (* set_power ) (struct video_i2c_data*,int) ;} ;


 struct video_i2c_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct video_i2c_data*,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct video_i2c_data *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_0->dev);
 FUNC_1(&VAR_0->dev);
 FUNC_4(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);

 if (VAR_1->chip->set_power)
  VAR_1->chip->set_power(VAR_1, 0);

 FUNC_6(&VAR_1->vdev);

 return 0;
}
