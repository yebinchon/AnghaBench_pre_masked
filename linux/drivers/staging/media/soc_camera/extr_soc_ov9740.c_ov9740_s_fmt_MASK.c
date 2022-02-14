
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; } ;
struct ov9740_priv {struct v4l2_mbus_framefmt current_mf; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;
 struct ov9740_priv* FUNC_3 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1,
   struct v4l2_mbus_framefmt *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_4(VAR_1);
 struct ov9740_priv *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0,
         FUNC_0(VAR_0));
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_2->width, VAR_2->height);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4->current_mf = *VAR_2;
 return VAR_5;
}
