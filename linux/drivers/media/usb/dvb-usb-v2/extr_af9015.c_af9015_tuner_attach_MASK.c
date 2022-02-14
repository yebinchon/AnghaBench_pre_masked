
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct i2c_client {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct dvb_usb_adapter {size_t id; TYPE_4__** fe; } ;
struct af9015_state {scalar_t__* tuner_sleep; scalar_t__* tuner_init; TYPE_1__* af9013_pdata; int * mt2060_if1; struct i2c_client** demod_i2c_client; } ;
struct TYPE_6__ {scalar_t__ sleep; scalar_t__ init; } ;
struct TYPE_7__ {TYPE_2__ tuner_ops; } ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int tuner; struct i2c_adapter* (* get_i2c_adapter ) (struct i2c_client*) ;} ;
 int VAR_0 ;
 int VAR_1 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct af9015_state* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (int ,TYPE_4__*,int,int,...) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct i2c_adapter* FUNC_5 (struct i2c_client*) ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_adapter *VAR_20)
{
 struct dvb_usb_device *VAR_21 = FUNC_0(VAR_20);
 struct af9015_state *VAR_22 = FUNC_1(VAR_21);
 struct usb_interface *VAR_23 = VAR_21->intf;
 struct i2c_client *VAR_24;
 struct i2c_adapter *VAR_25;
 int VAR_26;

 FUNC_2(&VAR_23->dev, "adap id %u\n", VAR_20->id);

 VAR_24 = VAR_22->demod_i2c_client[VAR_20->id];
 VAR_25 = VAR_22->af9013_pdata[VAR_20->id].get_i2c_adapter(VAR_24);

 switch (VAR_22->af9013_pdata[VAR_20->id].tuner) {
 case 138:
 case 137:
  VAR_26 = FUNC_4(VAR_14, VAR_20->fe[0], VAR_25,
     VAR_3,
     VAR_22->mt2060_if1[VAR_20->id]) == ((void*)0) ? -VAR_1 : 0;
  break;
 case 132:
 case 131:
  VAR_26 = FUNC_4(VAR_17, VAR_20->fe[0], VAR_25,
     VAR_7) == ((void*)0) ? -VAR_1 : 0;
  break;
 case 129:
  VAR_26 = FUNC_4(VAR_19, VAR_20->fe[0], 0x60, VAR_25,
     &VAR_9) == ((void*)0) ? -VAR_1 : 0;
  break;
 case 130:
  VAR_26 = FUNC_4(VAR_18, VAR_20->fe[0], VAR_25,
     VAR_8) == ((void*)0) ? -VAR_1 : 0;
  break;
 case 136:
  VAR_26 = FUNC_4(VAR_15, VAR_20->fe[0], VAR_25,
     VAR_4) == ((void*)0) ? -VAR_1 : 0;
  break;
 case 135:
 case 134:
  VAR_26 = FUNC_4(VAR_15, VAR_20->fe[0], VAR_25,
     VAR_5) == ((void*)0) ? -VAR_1 : 0;
  break;
 case 140:
  VAR_26 = FUNC_4(VAR_12, VAR_20->fe[0], 0x60, VAR_25,
     VAR_0) == ((void*)0) ? -VAR_1 : 0;
  break;
 case 139:
  VAR_26 = FUNC_4(VAR_13, VAR_20->fe[0], VAR_25,
     VAR_2) == ((void*)0) ? -VAR_1 : 0;
  break;
 case 133:
  VAR_26 = FUNC_4(VAR_16, VAR_20->fe[0], VAR_25,
     0x60, &VAR_6) == ((void*)0) ? -VAR_1 : 0;
  break;
 case 128:
 default:
  FUNC_3(&VAR_23->dev, "unknown tuner, tuner id %02x\n",
   VAR_22->af9013_pdata[VAR_20->id].tuner);
  VAR_26 = -VAR_1;
 }

 if (VAR_20->fe[0]->ops.tuner_ops.init) {
  VAR_22->tuner_init[VAR_20->id] =
   VAR_20->fe[0]->ops.tuner_ops.init;
  VAR_20->fe[0]->ops.tuner_ops.init = VAR_10;
 }

 if (VAR_20->fe[0]->ops.tuner_ops.sleep) {
  VAR_22->tuner_sleep[VAR_20->id] =
   VAR_20->fe[0]->ops.tuner_ops.sleep;
  VAR_20->fe[0]->ops.tuner_ops.sleep = VAR_11;
 }

 return VAR_26;
}
