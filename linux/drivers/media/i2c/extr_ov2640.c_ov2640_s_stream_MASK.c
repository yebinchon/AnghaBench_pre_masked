
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov2640_priv {int streaming; int lock; int hdl; int cfmt_code; int win; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 struct ov2640_priv* FUNC_4 (struct i2c_client*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_5(VAR_0);
 struct ov2640_priv *VAR_3 = FUNC_4(VAR_2);
 int VAR_4 = 0;

 FUNC_1(&VAR_3->lock);
 if (VAR_3->streaming == !VAR_1) {
  if (VAR_1) {
   VAR_4 = FUNC_3(VAR_2, VAR_3->win,
      VAR_3->cfmt_code);
   if (!VAR_4)
    VAR_4 = FUNC_0(&VAR_3->hdl);
  }
 }
 if (!VAR_4)
  VAR_3->streaming = VAR_1;
 FUNC_2(&VAR_3->lock);

 return VAR_4;
}
