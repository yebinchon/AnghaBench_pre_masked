
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tw9910_priv {int dummy; } ;
struct i2c_client {int dummy; } ;


 struct tw9910_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct tw9910_priv*) ;
 int FUNC_2 (struct tw9910_priv*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_3(VAR_0);
 struct tw9910_priv *VAR_3 = FUNC_0(VAR_2);

 return VAR_1 ? FUNC_2(VAR_3) : FUNC_1(VAR_3);
}
