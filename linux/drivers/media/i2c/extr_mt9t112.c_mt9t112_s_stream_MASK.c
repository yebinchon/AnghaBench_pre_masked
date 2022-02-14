
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_6__ {int height; int width; } ;
struct mt9t112_priv {int init_done; TYPE_3__ frame; TYPE_2__* format; TYPE_1__* info; } ;
struct i2c_client {int dev; } ;
struct TYPE_5__ {int fmt; int order; int code; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,char*,int ,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (int,struct i2c_client*,int ,int) ;
 int FUNC_9 (int,struct i2c_client*,int,int) ;
 int FUNC_10 (struct i2c_client*,int ,int ) ;
 struct mt9t112_priv* FUNC_11 (struct i2c_client*) ;
 struct i2c_client* FUNC_12 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_13(struct v4l2_subdev *VAR_4, int VAR_5)
{
 struct i2c_client *VAR_6 = FUNC_12(VAR_4);
 struct mt9t112_priv *VAR_7 = FUNC_11(VAR_6);
 int VAR_8 = 0;

 if (!VAR_5) {
  FUNC_10(VAR_6, VAR_3, VAR_2);
  return VAR_8;
 }

 if (!VAR_7->init_done) {
  u16 VAR_9 = VAR_1 & VAR_7->info->flags ?
       0x0001 : 0x0000;

  FUNC_1(VAR_8, FUNC_7(VAR_6));


  FUNC_9(VAR_8, VAR_6, 0x3C20, VAR_9);

  FUNC_5(5);

  VAR_7->init_done = 1;
 }

 FUNC_8(VAR_8, VAR_6, FUNC_2(26, 7), VAR_7->format->fmt);
 FUNC_8(VAR_8, VAR_6, FUNC_2(26, 9), VAR_7->format->order);
 FUNC_8(VAR_8, VAR_6, FUNC_3(1, 0), 0x06);

 FUNC_10(VAR_6, VAR_7->frame.width, VAR_7->frame.height);

 FUNC_1(VAR_8, FUNC_6(VAR_6));

 FUNC_4(&VAR_6->dev, "format : %d\n", VAR_7->format->code);
 FUNC_4(&VAR_6->dev, "size   : %d x %d\n",
  VAR_7->frame.width,
  VAR_7->frame.height);

 FUNC_0(VAR_6, VAR_0);

 return VAR_8;
}
