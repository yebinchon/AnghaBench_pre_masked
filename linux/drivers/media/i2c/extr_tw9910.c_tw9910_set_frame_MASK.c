
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct tw9910_priv {TYPE_2__* scale; TYPE_1__* info; int norm; } ;
struct i2c_client {int dummy; } ;
struct TYPE_5__ {int height; int width; } ;
struct TYPE_4__ {int buswidth; int mpout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct tw9910_priv* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ,int,int) ;
 int FUNC_2 (struct i2c_client*) ;
 TYPE_2__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,TYPE_2__*) ;
 struct i2c_client* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_13, u32 *VAR_14, u32 *VAR_15)
{
 struct i2c_client *VAR_16 = FUNC_6(VAR_13);
 struct tw9910_priv *VAR_17 = FUNC_0(VAR_16);
 int VAR_18 = -VAR_0;
 u8 VAR_19;


 VAR_17->scale = FUNC_3(VAR_17->norm, *VAR_14, *VAR_15);
 if (!VAR_17->scale)
  goto tw9910_set_fmt_error;


 FUNC_2(VAR_16);


 VAR_19 = 0x00;
 if (VAR_17->info->buswidth == 16)
  VAR_19 = VAR_1;

 VAR_18 = FUNC_1(VAR_16, VAR_2, VAR_1, VAR_19);
 if (VAR_18 < 0)
  goto tw9910_set_fmt_error;


 switch (VAR_17->info->mpout) {
 case 128:
  VAR_19 = VAR_11; break;
 case 133:
  VAR_19 = VAR_5; break;
 case 130:
  VAR_19 = VAR_9; break;
 case 129:
  VAR_19 = VAR_10; break;
 case 132:
  VAR_19 = VAR_7; break;
 case 135:
  VAR_19 = VAR_3; break;
 case 134:
  VAR_19 = VAR_4; break;
 case 131:
  VAR_19 = VAR_8; break;
 default:
  VAR_19 = 0;
 }

 VAR_18 = FUNC_1(VAR_16, VAR_12, VAR_6, VAR_19);
 if (VAR_18 < 0)
  goto tw9910_set_fmt_error;


 VAR_18 = FUNC_5(VAR_16, VAR_17->scale);
 if (VAR_18 < 0)
  goto tw9910_set_fmt_error;


 VAR_18 = FUNC_4(VAR_16);
 if (VAR_18 < 0)
  goto tw9910_set_fmt_error;

 *VAR_14 = VAR_17->scale->width;
 *VAR_15 = VAR_17->scale->height;

 return VAR_18;

tw9910_set_fmt_error:

 FUNC_2(VAR_16);
 VAR_17->scale = ((void*)0);

 return VAR_18;
}
