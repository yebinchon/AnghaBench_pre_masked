
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9t112_priv {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct mt9t112_priv*) ;
 int FUNC_1 (struct mt9t112_priv*) ;
 struct mt9t112_priv* FUNC_2 (struct i2c_client*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_3(VAR_0);
 struct mt9t112_priv *VAR_3 = FUNC_2(VAR_2);

 return VAR_1 ? FUNC_1(VAR_3) :
      FUNC_0(VAR_3);
}
