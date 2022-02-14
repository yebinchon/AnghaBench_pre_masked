
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov9740_priv {int current_enable; scalar_t__ flag_hflip; scalar_t__ flag_vflip; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int ,int,int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct ov9740_priv* FUNC_3 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3, int VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_4(VAR_3);
 struct ov9740_priv *VAR_6 = FUNC_3(VAR_3);
 int VAR_7;


 if (VAR_6->flag_vflip)
  VAR_7 = FUNC_1(VAR_5, VAR_0, 0x2, 0);
 else
  VAR_7 = FUNC_1(VAR_5, VAR_0, 0, 0x2);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6->flag_hflip)
  VAR_7 = FUNC_1(VAR_5, VAR_0, 0x1, 0);
 else
  VAR_7 = FUNC_1(VAR_5, VAR_0, 0, 0x1);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_4) {
  FUNC_0(&VAR_5->dev, "Enabling Streaming\n");

  VAR_7 = FUNC_2(VAR_5, VAR_1, 0x01);

 } else {
  FUNC_0(&VAR_5->dev, "Disabling Streaming\n");

  VAR_7 = FUNC_2(VAR_5, VAR_2, 0x01);
  if (!VAR_7)

   VAR_7 = FUNC_2(VAR_5, VAR_1,
            0x00);
 }

 VAR_6->current_enable = VAR_4;

 return VAR_7;
}
