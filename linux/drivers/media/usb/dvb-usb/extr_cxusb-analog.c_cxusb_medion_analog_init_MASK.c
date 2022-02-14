
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int tuner_analog_msg_data ;
typedef int subfmt ;
struct TYPE_6__ {int height; int width; int colorspace; int field; int code; } ;
struct v4l2_subdev_format {TYPE_3__ format; int which; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dvb_usb_device {TYPE_2__* udev; int i2c_adap; struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int input; int height; int width; int cx25840; int norm; int tuner; int tda9887; TYPE_1__* videodev; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int tvnorms; } ;


 int * FUNC_0 (struct v4l2_subdev_format*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct v4l2_subdev_format* VAR_8 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,struct i2c_msg*,int) ;
 int FUNC_3 (struct v4l2_subdev_format*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ,int ,int ,int *,...) ;
 int VAR_15 ;

int FUNC_5(struct dvb_usb_device *VAR_16)
{
 struct cxusb_medion_dev *VAR_17 = VAR_16->priv;
 u8 VAR_18[] = { 0x9c, 0x60, 0x85, 0x54 };
 struct i2c_msg VAR_19 = { .addr = 0x61, .flags = 0,
         .buf = VAR_18,
         .len =
         sizeof(VAR_18) };
 struct v4l2_subdev_format VAR_20;
 int VAR_21;


 VAR_21 = FUNC_2(&VAR_16->i2c_adap, &VAR_19, 1);
 if (VAR_21 != 1)
  FUNC_1(&VAR_16->udev->dev,
    "tuner analog switch failed (%d)\n", VAR_21);





 VAR_21 = FUNC_4(VAR_17->cx25840, VAR_7, VAR_10, 0);
 if (VAR_21 != 0)
  FUNC_1(&VAR_16->udev->dev,
    "cx25840 reset failed (%d)\n", VAR_21);

 VAR_21 = FUNC_4(VAR_17->cx25840, VAR_15, VAR_12,
          &VAR_0, 0, 0);
 if (VAR_21 != 0)
  FUNC_1(&VAR_16->udev->dev,
    "cx25840 initial input setting failed (%d)\n", VAR_21);


 VAR_17->input = 1;
 VAR_17->videodev->tvnorms = VAR_4;
 VAR_17->norm = VAR_5;



 VAR_21 = FUNC_4(VAR_17->cx25840, VAR_7, VAR_11,
          FUNC_0(VAR_8),
          VAR_8);
 if (VAR_21 != 0)
  FUNC_1(&VAR_16->udev->dev,
    "cx25840 pin config failed (%d)\n", VAR_21);


 FUNC_4(VAR_17->tda9887, VAR_15, VAR_13, &VAR_17->norm);
 FUNC_4(VAR_17->tuner, VAR_15, VAR_13, &VAR_17->norm);
 FUNC_4(VAR_17->cx25840, VAR_15, VAR_13, &VAR_17->norm);

 FUNC_3(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.which = VAR_6;
 VAR_20.format.width = VAR_17->width;
 VAR_20.format.height = VAR_17->height;
 VAR_20.format.code = VAR_1;
 VAR_20.format.field = VAR_3;
 VAR_20.format.colorspace = VAR_2;

 VAR_21 = FUNC_4(VAR_17->cx25840, VAR_9, VAR_14, ((void*)0), &VAR_20);
 if (VAR_21 != 0)
  FUNC_1(&VAR_16->udev->dev,
    "cx25840 format set failed (%d)\n", VAR_21);

 if (VAR_21 == 0) {
  VAR_17->width = VAR_20.format.width;
  VAR_17->height = VAR_20.format.height;
 }

 return 0;
}
