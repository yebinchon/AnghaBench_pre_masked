
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int width; int height; int code; } ;
struct v4l2_subdev_format {TYPE_1__ format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9v011_platform_data {int xtal; } ;
struct i2c_client {int addr; } ;
struct i2c_board_info {char* type; int addr; int flags; struct mt9v011_platform_data* platform_data; } ;
struct i2c_adapter {int dummy; } ;
struct em28xx_v4l2 {int sensor_xres; int sensor_yres; int sensor_xtal; int vinctl; int vinmode; int v4l2_dev; } ;
struct TYPE_4__ {int xclk; } ;
struct em28xx {size_t def_i2c_bus; int em28xx_sensor; TYPE_2__ board; struct em28xx_v4l2* v4l2; struct i2c_adapter* i2c_adap; struct i2c_client* i2c_client; } ;


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
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (struct em28xx*) ;
 int FUNC_2 (struct em28xx*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 struct v4l2_subdev* FUNC_3 (int *,struct i2c_adapter*,struct i2c_board_info*,int *) ;
 int FUNC_4 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_format*) ;

int FUNC_5(struct em28xx *VAR_15)
{
 struct i2c_client *VAR_16 = &VAR_15->i2c_client[VAR_15->def_i2c_bus];
 struct i2c_adapter *VAR_17 = &VAR_15->i2c_adap[VAR_15->def_i2c_bus];
 struct em28xx_v4l2 *VAR_18 = VAR_15->v4l2;

 switch (VAR_15->em28xx_sensor) {
 case 130:
 {
  struct mt9v011_platform_data VAR_19;
  struct i2c_board_info VAR_20 = {
   .type = "mt9v011",
   .addr = VAR_16->addr,
   .platform_data = &VAR_19,
  };

  VAR_18->sensor_xres = 640;
  VAR_18->sensor_yres = 480;
  VAR_15->board.xclk = VAR_8;
  FUNC_2(VAR_15, VAR_1, VAR_15->board.xclk);
  VAR_18->sensor_xtal = 4300000;
  VAR_19.xtal = VAR_18->sensor_xtal;
  if (((void*)0) ==
      FUNC_3(&VAR_18->v4l2_dev, VAR_17,
           &VAR_20, ((void*)0)))
   return -VAR_9;
  VAR_18->vinmode = VAR_3;
  VAR_18->vinctl = 0x00;

  break;
 }
 case 132:
  VAR_18->sensor_xres = 1280;
  VAR_18->sensor_yres = 1024;

  FUNC_0(VAR_15);

  VAR_18->vinmode = VAR_2;
  VAR_18->vinctl = 0x00;

  break;
 case 131:
  VAR_18->sensor_xres = 640;
  VAR_18->sensor_yres = 512;

  VAR_15->board.xclk = VAR_7;
  FUNC_2(VAR_15, VAR_1, VAR_15->board.xclk);
  FUNC_1(VAR_15);

  VAR_18->vinmode = VAR_4;
  VAR_18->vinctl = 0x00;

  break;
 case 128:
 {
  struct v4l2_subdev *VAR_21;
  struct i2c_board_info VAR_22 = {
   .type = "ov2640",
   .flags = VAR_10,
   .addr = VAR_16->addr,
  };
  struct v4l2_subdev_format VAR_23 = {
   .which = VAR_12,
  };
  VAR_18->sensor_xres = 640;
  VAR_18->sensor_yres = 480;

  VAR_21 =
       FUNC_3(&VAR_18->v4l2_dev, VAR_17,
            &VAR_22, ((void*)0));
  if (!VAR_21)
   return -VAR_9;

  VAR_23.format.code = VAR_11;
  VAR_23.format.width = 640;
  VAR_23.format.height = 480;
  FUNC_4(VAR_21, VAR_13, VAR_14, ((void*)0), &VAR_23);


  VAR_15->board.xclk = VAR_6;
  FUNC_2(VAR_15, VAR_1, VAR_15->board.xclk);
  VAR_18->vinmode = VAR_5;
  VAR_18->vinctl = 0x00;

  break;
 }
 case 129:
 default:
  return -VAR_0;
 }

 return 0;
}
