
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov2640_priv {int power_count; int lock; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ov2640_priv*,int) ;
 struct ov2640_priv* FUNC_4 (struct i2c_client*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_5(VAR_0);
 struct ov2640_priv *VAR_3 = FUNC_4(VAR_2);

 FUNC_1(&VAR_3->lock);





 if (VAR_3->power_count == !VAR_1)
  FUNC_3(VAR_3, VAR_1);
 VAR_3->power_count += VAR_1 ? 1 : -1;
 FUNC_0(VAR_3->power_count < 0);
 FUNC_2(&VAR_3->lock);

 return 0;
}
