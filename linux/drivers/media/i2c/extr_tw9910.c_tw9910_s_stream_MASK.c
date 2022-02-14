
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tw9910_priv {int revision; TYPE_1__* scale; } ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int height; int width; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (int *,char*) ;
 struct tw9910_priv* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ,int ) ;
 int FUNC_4 (struct i2c_client*,int) ;
 struct i2c_client* FUNC_5 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_7, int VAR_8)
{
 struct i2c_client *VAR_9 = FUNC_5(VAR_7);
 struct tw9910_priv *VAR_10 = FUNC_2(VAR_9);
 u8 VAR_11;
 int VAR_12;

 if (!VAR_8) {
  switch (VAR_10->revision) {
  case 0:
   VAR_11 = VAR_2;
   break;
  case 1:
   VAR_11 = VAR_3;
   break;
  default:
   FUNC_1(&VAR_9->dev, "un-supported revision\n");
   return -VAR_0;
  }
 } else {
  VAR_11 = VAR_4;

  if (!VAR_10->scale) {
   FUNC_1(&VAR_9->dev, "norm select error\n");
   return -VAR_1;
  }

  FUNC_0(&VAR_9->dev, "%s %dx%d\n",
   VAR_10->scale->name,
   VAR_10->scale->width,
   VAR_10->scale->height);
 }

 VAR_12 = FUNC_3(VAR_9, VAR_6, VAR_5, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 return FUNC_4(VAR_9, VAR_8);
}
