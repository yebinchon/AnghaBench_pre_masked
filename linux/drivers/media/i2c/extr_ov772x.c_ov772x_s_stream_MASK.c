
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ov772x_priv {int streaming; int lock; TYPE_2__* win; TYPE_1__* cfmt; int regmap; } ;
struct i2c_client {int dev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct ov772x_priv* FUNC_4 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_5(VAR_2);
 struct ov772x_priv *VAR_5 = FUNC_4(VAR_2);
 int VAR_6 = 0;

 FUNC_1(&VAR_5->lock);

 if (VAR_5->streaming == VAR_3)
  goto done;

 VAR_6 = FUNC_3(VAR_5->regmap, VAR_0, VAR_1,
     VAR_3 ? 0 : VAR_1);
 if (VAR_6)
  goto done;

 if (VAR_3) {
  FUNC_0(&VAR_4->dev, "format %d, win %s\n",
   VAR_5->cfmt->code, VAR_5->win->name);
 }
 VAR_5->streaming = VAR_3;

done:
 FUNC_2(&VAR_5->lock);

 return VAR_6;
}
