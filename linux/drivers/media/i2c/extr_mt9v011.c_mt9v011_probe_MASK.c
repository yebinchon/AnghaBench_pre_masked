
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_9__ {int function; } ;
struct v4l2_subdev {TYPE_1__* ctrl_handler; TYPE_4__ entity; } ;
struct mt9v011_platform_data {int xtal; } ;
struct TYPE_8__ {int error; } ;
struct TYPE_10__ {int flags; } ;
struct mt9v011 {int global_gain; int exposure; int width; int height; int xtal; TYPE_1__ ctrls; struct v4l2_subdev sd; TYPE_5__ pad; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_12__ {struct mt9v011_platform_data* platform_data; } ;
struct i2c_client {int addr; TYPE_6__* adapter; TYPE_7__ dev; } ;
struct TYPE_11__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct mt9v011* FUNC_0 (TYPE_7__*,int,int ) ;
 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (TYPE_4__*,int,TYPE_5__*) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int *,int ,int,int,int,int) ;
 int FUNC_7 (int,int ,struct v4l2_subdev*,char*,int,int) ;
 int FUNC_8 (struct v4l2_subdev*,char*,int) ;
 int FUNC_9 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_10 (struct v4l2_subdev*,char*,scalar_t__) ;
 int FUNC_11 (struct i2c_client*,char*,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_20,
    const struct i2c_device_id *VAR_21)
{
 u16 VAR_22;
 struct mt9v011 *VAR_23;
 struct v4l2_subdev *VAR_24;





 if (!FUNC_1(VAR_20->adapter,
      VAR_4 | VAR_5))
  return -VAR_1;

 VAR_23 = FUNC_0(&VAR_20->dev, sizeof(struct mt9v011), VAR_3);
 if (!VAR_23)
  return -VAR_2;

 VAR_24 = &VAR_23->sd;
 FUNC_9(VAR_24, VAR_20, &VAR_19);
 VAR_22 = FUNC_3(VAR_24, VAR_10);
 if ((VAR_22 != VAR_9) &&
     (VAR_22 != VAR_8)) {
  FUNC_10(VAR_24, "*** unknown micron chip detected (0x%04x).\n",
     VAR_22);
  return -VAR_0;
 }

 FUNC_5(&VAR_23->ctrls, 5);
 FUNC_6(&VAR_23->ctrls, &VAR_18,
     VAR_13, 0, (1 << 12) - 1 - 0x20, 1, 0x20);
 FUNC_6(&VAR_23->ctrls, &VAR_18,
     VAR_12, 0, 2047, 1, 0x01fc);
 FUNC_6(&VAR_23->ctrls, &VAR_18,
     VAR_15, -(1 << 9), (1 << 9) - 1, 1, 0);
 FUNC_6(&VAR_23->ctrls, &VAR_18,
     VAR_11, -(1 << 9), (1 << 9) - 1, 1, 0);
 FUNC_6(&VAR_23->ctrls, &VAR_18,
     VAR_14, 0, 1, 1, 0);
 FUNC_6(&VAR_23->ctrls, &VAR_18,
     VAR_16, 0, 1, 1, 0);

 if (VAR_23->ctrls.error) {
  int VAR_25 = VAR_23->ctrls.error;

  FUNC_8(VAR_24, "control initialization error %d\n", VAR_25);
  FUNC_4(&VAR_23->ctrls);
  return VAR_25;
 }
 VAR_23->sd.ctrl_handler = &VAR_23->ctrls;

 VAR_23->global_gain = 0x0024;
 VAR_23->exposure = 0x01fc;
 VAR_23->width = 640;
 VAR_23->height = 480;
 VAR_23->xtal = 27000000;

 if (VAR_20->dev.platform_data) {
  struct mt9v011_platform_data *VAR_26 = VAR_20->dev.platform_data;

  VAR_23->xtal = VAR_26->xtal;
  FUNC_7(1, VAR_17, VAR_24, "xtal set to %d.%03d MHz\n",
   VAR_23->xtal / 1000000, (VAR_23->xtal / 1000) % 1000);
 }

 FUNC_11(VAR_20, "chip found @ 0x%02x (%s - chip version 0x%04x)\n",
   VAR_20->addr << 1, VAR_20->adapter->name, VAR_22);

 return 0;
}
