
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct tua9001_platform_data {int clock; int inversion; int if_port; TYPE_9__* fe; TYPE_9__* dvb_frontend; struct v4l2_subdev* (* get_v4l2_subdev ) (struct i2c_client*) ;} ;
struct si2157_config {int clock; int inversion; int if_port; TYPE_9__* fe; TYPE_9__* dvb_frontend; struct v4l2_subdev* (* get_v4l2_subdev ) (struct i2c_client*) ;} ;
struct TYPE_12__ {int regmap; int clk; } ;
struct rtl28xxu_dev {int tuner; struct platform_device* platform_device_sdr; TYPE_3__ rtl2832_platform_data; struct i2c_client* i2c_client_tuner; int * demod_i2c_adapter; } ;
struct rtl2832_sdr_platform_data {int addr; int tuner; struct v4l2_subdev* v4l2_subdev; struct dvb_usb_device* dvb_usb_device; TYPE_9__* dvb_frontend; int regmap; int clk; int type; struct tua9001_platform_data* platform_data; } ;
struct TYPE_13__ {int * driver; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_11__ {TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct i2c_board_info {int addr; int tuner; struct v4l2_subdev* v4l2_subdev; struct dvb_usb_device* dvb_usb_device; TYPE_9__* dvb_frontend; int regmap; int clk; int type; struct tua9001_platform_data* platform_data; } ;
struct fc2580_platform_data {int clock; int inversion; int if_port; TYPE_9__* fe; TYPE_9__* dvb_frontend; struct v4l2_subdev* (* get_v4l2_subdev ) (struct i2c_client*) ;} ;
struct e4000_config {int clock; int inversion; int if_port; TYPE_9__* fe; TYPE_9__* dvb_frontend; struct v4l2_subdev* (* get_v4l2_subdev ) (struct i2c_client*) ;} ;
struct dvb_usb_device {TYPE_5__* intf; int i2c_adap; } ;
struct dvb_usb_adapter {TYPE_9__** fe; } ;
struct dvb_tuner_ops {int dummy; } ;
struct dvb_frontend {int dummy; } ;
typedef int pdata ;
struct TYPE_16__ {int get_rf_strength; } ;
struct TYPE_15__ {TYPE_7__ tuner_ops; int read_signal_strength; } ;
struct TYPE_17__ {TYPE_6__ ops; int tuner_priv; } ;
struct TYPE_14__ {int dev; } ;
struct TYPE_10__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct platform_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dvb_usb_device* FUNC_1 (struct dvb_usb_adapter*) ;
 struct rtl28xxu_dev* FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int) ;
 struct dvb_frontend* FUNC_5 (int ,TYPE_9__*,int *,int,...) ;
 int VAR_6 ;
 int VAR_7 ;
 struct v4l2_subdev* FUNC_6 (struct i2c_client*) ;
 struct i2c_client* FUNC_7 (int *,struct rtl2832_sdr_platform_data*) ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (TYPE_7__*,TYPE_7__*,int) ;
 int FUNC_10 (struct rtl2832_sdr_platform_data*,int ,int) ;
 struct platform_device* FUNC_11 (int *,char*,int ,struct rtl2832_sdr_platform_data*,int) ;
 int VAR_8 ;
 int FUNC_12 (char*,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (struct dvb_usb_device*,int ,int,int) ;
 int FUNC_14 (int ,char*,int ) ;
 struct v4l2_subdev* FUNC_15 (struct i2c_client*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct dvb_usb_adapter *VAR_12)
{
 int VAR_13;
 struct dvb_usb_device *VAR_14 = FUNC_1(VAR_12);
 struct rtl28xxu_dev *VAR_15 = FUNC_2(VAR_14);
 struct dvb_frontend *VAR_16 = ((void*)0);
 struct i2c_board_info VAR_17;
 struct i2c_client *VAR_18;
 struct v4l2_subdev *VAR_19 = ((void*)0);
 struct platform_device *VAR_20;
 struct rtl2832_sdr_platform_data VAR_21;

 FUNC_3(&VAR_14->intf->dev, "\n");

 FUNC_10(&VAR_17, 0, sizeof(struct i2c_board_info));
 FUNC_10(&VAR_21, 0, sizeof(VAR_21));

 switch (VAR_15->tuner) {
 case 134:
  VAR_16 = FUNC_5(VAR_6, VAR_12->fe[0],
   VAR_15->demod_i2c_adapter, VAR_9);



  VAR_12->fe[0]->ops.read_signal_strength =
    VAR_12->fe[0]->ops.tuner_ops.get_rf_strength;
  break;
 case 133:
  VAR_16 = FUNC_5(VAR_7, VAR_12->fe[0],
   VAR_15->demod_i2c_adapter, 0xc6>>1, 0, VAR_1);


  VAR_12->fe[0]->ops.read_signal_strength =
    VAR_12->fe[0]->ops.tuner_ops.get_rf_strength;
  break;
 case 135: {
   struct e4000_config VAR_22 = {
    .fe = VAR_12->fe[0],
    .clock = 28800000,
   };

   FUNC_14(VAR_17.type, "e4000", VAR_2);
   VAR_17.addr = 0x64;
   VAR_17.platform_data = &VAR_22;

   FUNC_12(VAR_17.type);
   VAR_18 = FUNC_7(VAR_15->demod_i2c_adapter, &VAR_17);
   if (VAR_18 == ((void*)0) || VAR_18->dev.driver == ((void*)0))
    break;

   if (!FUNC_16(VAR_18->dev.driver->owner)) {
    FUNC_8(VAR_18);
    break;
   }

   VAR_15->i2c_client_tuner = VAR_18;
   VAR_19 = FUNC_6(VAR_18);
  }
  break;
 case 132: {
   struct fc2580_platform_data VAR_23 = {
    .dvb_frontend = VAR_12->fe[0],
   };
   struct i2c_board_info VAR_24 = {};

   FUNC_14(VAR_24.type, "fc2580", VAR_2);
   VAR_24.addr = 0x56;
   VAR_24.platform_data = &VAR_23;
   FUNC_12("fc2580");
   VAR_18 = FUNC_7(VAR_15->demod_i2c_adapter,
      &VAR_24);
   if (VAR_18 == ((void*)0) || VAR_18->dev.driver == ((void*)0))
    break;
   if (!FUNC_16(VAR_18->dev.driver->owner)) {
    FUNC_8(VAR_18);
    break;
   }
   VAR_15->i2c_client_tuner = VAR_18;
   VAR_19 = VAR_23.get_v4l2_subdev(VAR_18);
  }
  break;
 case 128: {
  struct tua9001_platform_data VAR_25 = {
   .dvb_frontend = VAR_12->fe[0],
  };
  struct i2c_board_info VAR_26 = {};


  VAR_13 = FUNC_13(VAR_14, VAR_4, 0x00, 0x12);
  if (VAR_13)
   goto err;

  VAR_13 = FUNC_13(VAR_14, VAR_5, 0x12, 0x12);
  if (VAR_13)
   goto err;

  FUNC_14(VAR_26.type, "tua9001", VAR_2);
  VAR_26.addr = 0x60;
  VAR_26.platform_data = &VAR_25;
  FUNC_12("tua9001");
  VAR_18 = FUNC_7(VAR_15->demod_i2c_adapter, &VAR_26);
  if (VAR_18 == ((void*)0) || VAR_18->dev.driver == ((void*)0))
   break;
  if (!FUNC_16(VAR_18->dev.driver->owner)) {
   FUNC_8(VAR_18);
   break;
  }
  VAR_15->i2c_client_tuner = VAR_18;
  break;
 }
 case 131:
  VAR_16 = FUNC_5(VAR_8, VAR_12->fe[0],
    VAR_15->demod_i2c_adapter,
    VAR_10);


  VAR_12->fe[0]->ops.read_signal_strength =
    VAR_12->fe[0]->ops.tuner_ops.get_rf_strength;
  break;
 case 130:
  VAR_16 = FUNC_5(VAR_8, VAR_12->fe[0],
    VAR_15->demod_i2c_adapter,
    VAR_11);
  VAR_12->fe[0]->ops.read_signal_strength =
    VAR_12->fe[0]->ops.tuner_ops.get_rf_strength;

  if (VAR_12->fe[1]) {
   VAR_16 = FUNC_5(VAR_8, VAR_12->fe[1],
     VAR_15->demod_i2c_adapter,
     VAR_11);
   VAR_12->fe[1]->ops.read_signal_strength =
     VAR_12->fe[1]->ops.tuner_ops.get_rf_strength;
  }
  break;
 case 129: {
   struct si2157_config VAR_27 = {
    .fe = VAR_12->fe[0],
    .if_port = 0,
    .inversion = 0,
   };

   FUNC_14(VAR_17.type, "si2157", VAR_2);
   VAR_17.addr = 0x60;
   VAR_17.platform_data = &VAR_27;
   FUNC_12(VAR_17.type);
   VAR_18 = FUNC_7(&VAR_14->i2c_adap, &VAR_17);
   if (VAR_18 == ((void*)0) || VAR_18->dev.driver == ((void*)0))
    break;

   if (!FUNC_16(VAR_18->dev.driver->owner)) {
    FUNC_8(VAR_18);
    break;
   }

   VAR_15->i2c_client_tuner = VAR_18;
   VAR_19 = FUNC_6(VAR_18);


   if (VAR_12->fe[1]) {
    VAR_12->fe[1]->tuner_priv =
      VAR_12->fe[0]->tuner_priv;
    FUNC_9(&VAR_12->fe[1]->ops.tuner_ops,
      &VAR_12->fe[0]->ops.tuner_ops,
      sizeof(struct dvb_tuner_ops));
   }
  }
  break;
 default:
  FUNC_4(&VAR_14->intf->dev, "unknown tuner %d\n", VAR_15->tuner);
 }
 if (VAR_16 == ((void*)0) && VAR_15->i2c_client_tuner == ((void*)0)) {
  VAR_13 = -VAR_0;
  goto err;
 }


 switch (VAR_15->tuner) {
 case 132:
 case 134:
 case 133:
 case 135:
 case 131:
 case 130:
  VAR_21.clk = VAR_15->rtl2832_platform_data.clk;
  VAR_21.tuner = VAR_15->tuner;
  VAR_21.regmap = VAR_15->rtl2832_platform_data.regmap;
  VAR_21.dvb_frontend = VAR_12->fe[0];
  VAR_21.dvb_usb_device = VAR_14;
  VAR_21.v4l2_subdev = VAR_19;

  FUNC_12("%s", "rtl2832_sdr");
  VAR_20 = FUNC_11(&VAR_14->intf->dev,
           "rtl2832_sdr",
           VAR_3,
           &VAR_21, sizeof(VAR_21));
  if (FUNC_0(VAR_20) || VAR_20->dev.driver == ((void*)0))
   break;
  VAR_15->platform_device_sdr = VAR_20;
  break;
 default:
  FUNC_3(&VAR_14->intf->dev, "no SDR for tuner=%d\n", VAR_15->tuner);
 }

 return 0;
err:
 FUNC_3(&VAR_14->intf->dev, "failed=%d\n", VAR_13);
 return VAR_13;
}
