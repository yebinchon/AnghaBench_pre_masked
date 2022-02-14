
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int entity; } ;
struct mt9m001 {int mutex; int hdl; TYPE_1__ subdev; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct mt9m001* FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_0)
{
 struct mt9m001 *VAR_1 = FUNC_7(VAR_0);

 FUNC_4(&VAR_0->dev);

 FUNC_8(&VAR_1->subdev);
 FUNC_0(&VAR_1->subdev.entity);

 FUNC_3(&VAR_0->dev);
 FUNC_6(&VAR_0->dev);
 FUNC_5(&VAR_0->dev);
 FUNC_1(&VAR_0->dev);

 FUNC_9(&VAR_1->hdl);
 FUNC_2(&VAR_1->mutex);

 return 0;
}
