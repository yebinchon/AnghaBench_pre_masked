
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {int dev; } ;
struct tua9001_platform_data {struct dvb_frontend* dvb_frontend; } ;
struct state {struct platform_device** platform_device_tuner; int dual_mode; TYPE_3__* af9033_config; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct platform_device {TYPE_2__ dev; } ;
struct it913x_platform_data {int role; struct dvb_frontend* fe; int regmap; } ;
struct i2c_msg {int addr; int len; char* buf; int flags; } ;
struct fc2580_platform_data {struct dvb_frontend* dvb_frontend; } ;
struct dvb_usb_device {struct usb_interface* intf; int i2c_adap; } ;
struct dvb_usb_adapter {int id; struct dvb_frontend** fe; } ;
struct dvb_frontend {int dummy; } ;
typedef int it913x_pdata ;
struct TYPE_6__ {int tuner; int regmap; } ;
struct TYPE_4__ {int owner; } ;
 int VAR_0 ;
 int FUNC_0 (struct platform_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dvb_usb_device* FUNC_1 (struct dvb_usb_adapter*) ;
 struct state* FUNC_2 (struct dvb_usb_adapter*) ;
 int FUNC_3 (struct dvb_usb_device*,char*,int,struct tua9001_platform_data*,int *) ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct dvb_usb_device*,int,int) ;
 int FUNC_5 (struct dvb_usb_device*,int,int,int) ;
 int FUNC_6 (int *,char*,int) ;
 struct dvb_frontend* FUNC_7 (int ,struct dvb_frontend*,int *,int,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (int *,struct i2c_msg*,int) ;
 int FUNC_9 (int) ;
 int VAR_11 ;
 struct platform_device* FUNC_10 (int *,char const*,int ,struct it913x_platform_data*,int) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (char*,char*) ;
 int VAR_12 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static int FUNC_15(struct dvb_usb_adapter *VAR_13)
{
 struct state *VAR_14 = FUNC_2(VAR_13);
 struct dvb_usb_device *VAR_15 = FUNC_1(VAR_13);
 struct usb_interface *VAR_16 = VAR_15->intf;
 int VAR_17;
 struct dvb_frontend *VAR_18;
 struct i2c_msg VAR_19[1];
 u8 VAR_20;

 FUNC_6(&VAR_16->dev, "adap->id=%d\n", VAR_13->id);






 switch (VAR_14->af9033_config[VAR_13->id].tuner) {
 case 128: {
  struct tua9001_platform_data VAR_21 = {
   .dvb_frontend = VAR_13->fe[0],
  };







  VAR_17 = FUNC_5(VAR_15, 0x00d8ec, 0x01, 0x01);
  if (VAR_17 < 0)
   goto err;

  VAR_17 = FUNC_5(VAR_15, 0x00d8ed, 0x01, 0x01);
  if (VAR_17 < 0)
   goto err;

  VAR_17 = FUNC_5(VAR_15, 0x00d8e8, 0x01, 0x01);
  if (VAR_17 < 0)
   goto err;

  VAR_17 = FUNC_5(VAR_15, 0x00d8e9, 0x01, 0x01);
  if (VAR_17 < 0)
   goto err;


  VAR_17 = FUNC_3(VAR_15, "tua9001", 0x60, &VAR_21,
      &VAR_15->i2c_adap);
  if (VAR_17)
   goto err;

  VAR_18 = VAR_13->fe[0];
  break;
 }
 case 139:
  VAR_18 = FUNC_7(VAR_9, VAR_13->fe[0],
    &VAR_15->i2c_adap, VAR_5);
  break;
 case 130:
  if (VAR_13->id == 0) {
   VAR_17 = FUNC_4(VAR_15, 0x00d8e0, 1);
   if (VAR_17 < 0)
    goto err;

   VAR_17 = FUNC_4(VAR_15, 0x00d8e1, 1);
   if (VAR_17 < 0)
    goto err;

   VAR_17 = FUNC_4(VAR_15, 0x00d8df, 0);
   if (VAR_17 < 0)
    goto err;

   FUNC_9(30);

   VAR_17 = FUNC_4(VAR_15, 0x00d8df, 1);
   if (VAR_17 < 0)
    goto err;

   FUNC_9(300);

   VAR_17 = FUNC_4(VAR_15, 0x00d8c0, 1);
   if (VAR_17 < 0)
    goto err;

   VAR_17 = FUNC_4(VAR_15, 0x00d8c1, 1);
   if (VAR_17 < 0)
    goto err;

   VAR_17 = FUNC_4(VAR_15, 0x00d8bf, 0);
   if (VAR_17 < 0)
    goto err;

   VAR_17 = FUNC_4(VAR_15, 0x00d8b4, 1);
   if (VAR_17 < 0)
    goto err;

   VAR_17 = FUNC_4(VAR_15, 0x00d8b5, 1);
   if (VAR_17 < 0)
    goto err;

   VAR_17 = FUNC_4(VAR_15, 0x00d8b3, 1);
   if (VAR_17 < 0)
    goto err;

   VAR_20 = 0x60;
  } else {
   VAR_20 = 0x60 | 0x80;
  }


  VAR_18 = FUNC_7(VAR_11, VAR_13->fe[0], &VAR_15->i2c_adap,
    VAR_20, &VAR_7[VAR_13->id]);
  break;
 case 129:

  VAR_18 = FUNC_7(VAR_12, VAR_13->fe[0],
    &VAR_15->i2c_adap, VAR_8);
  break;
 case 137: {
  struct fc2580_platform_data VAR_22 = {
   .dvb_frontend = VAR_13->fe[0],
  };


  VAR_17 = FUNC_5(VAR_15, 0xd8eb, 0x01, 0x01);
  if (VAR_17 < 0)
   goto err;

  VAR_17 = FUNC_5(VAR_15, 0xd8ec, 0x01, 0x01);
  if (VAR_17 < 0)
   goto err;

  VAR_17 = FUNC_5(VAR_15, 0xd8ed, 0x01, 0x01);
  if (VAR_17 < 0)
   goto err;

  FUNC_14(10000, 50000);

  VAR_17 = FUNC_3(VAR_15, "fc2580", 0x56, &VAR_22,
      &VAR_15->i2c_adap);
  if (VAR_17)
   goto err;

  VAR_18 = VAR_13->fe[0];
  break;
 }
 case 138:






  if (VAR_13->id == 0) {

   VAR_17 = FUNC_5(VAR_15, 0xd8eb, 0x01, 0x01);
   if (VAR_17 < 0)
    goto err;

   VAR_17 = FUNC_5(VAR_15, 0xd8ec, 0x01, 0x01);
   if (VAR_17 < 0)
    goto err;

   VAR_17 = FUNC_5(VAR_15, 0xd8ed, 0x01, 0x01);
   if (VAR_17 < 0)
    goto err;
  } else {





   VAR_19[0].addr = 0x63;
   VAR_19[0].flags = 0;
   VAR_19[0].len = 2;
   VAR_19[0].buf = "\x0d\x02";
   VAR_17 = FUNC_8(&VAR_15->i2c_adap, VAR_19, 1);
   if (VAR_17 < 0)
    goto err;
  }

  FUNC_14(10000, 50000);

  VAR_18 = FUNC_7(VAR_10, VAR_13->fe[0], &VAR_15->i2c_adap,
    VAR_6[VAR_13->id]);
  break;
 case 136:
 case 135:
 case 134:
 case 133:
 case 132:
 case 131:
 {
  struct platform_device *VAR_23;
  const char *VAR_24;
  struct it913x_platform_data VAR_25 = {
   .regmap = VAR_14->af9033_config[VAR_13->id].regmap,
   .fe = VAR_13->fe[0],
  };

  switch (VAR_14->af9033_config[VAR_13->id].tuner) {
  case 136:
  case 135:
  case 134:
   VAR_24 = "it9133ax-tuner";
   break;
  case 133:
  case 132:
  case 131:
   VAR_24 = "it9133bx-tuner";
   break;
  default:
   VAR_17 = -VAR_0;
   goto err;
  }

  if (VAR_14->dual_mode) {
   if (VAR_13->id == 0)
    VAR_25.role = VAR_1;
   else
    VAR_25.role = VAR_2;
  } else {
   VAR_25.role = VAR_3;
  }

  FUNC_12("%s", "it913x");
  VAR_23 = FUNC_10(&VAR_15->intf->dev, VAR_24,
           VAR_4,
           &VAR_25,
           sizeof(VAR_25));
  if (FUNC_0(VAR_23) || !VAR_23->dev.driver) {
   VAR_17 = -VAR_0;
   goto err;
  }
  if (!FUNC_13(VAR_23->dev.driver->owner)) {
   FUNC_11(VAR_23);
   VAR_17 = -VAR_0;
   goto err;
  }

  VAR_14->platform_device_tuner[VAR_13->id] = VAR_23;
  VAR_18 = VAR_13->fe[0];
  break;
 }
 default:
  VAR_18 = ((void*)0);
 }

 if (VAR_18 == ((void*)0)) {
  VAR_17 = -VAR_0;
  goto err;
 }

 return 0;

err:
 FUNC_6(&VAR_16->dev, "failed=%d\n", VAR_17);

 return VAR_17;
}
