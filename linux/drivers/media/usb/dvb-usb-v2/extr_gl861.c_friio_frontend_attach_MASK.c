
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tc90522_config {int fe; } ;
struct i2c_client {int dummy; } ;
struct i2c_board_info {int addr; int type; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_8__ {int name; TYPE_1__ dev; int * algo; } ;
struct friio_priv {TYPE_3__ tuner_adap; TYPE_3__* demod_sub_i2c; struct i2c_client* i2c_client_demod; } ;
struct dvb_usb_device {int name; TYPE_2__* udev; int i2c_adap; } ;
struct dvb_usb_adapter {int * fe; } ;
struct TYPE_9__ {struct i2c_board_info demod_info; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct friio_priv* FUNC_1 (struct dvb_usb_adapter*) ;
 struct i2c_client* FUNC_2 (char*,int ,int *,int ,struct tc90522_config*) ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,struct dvb_usb_device*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_usb_adapter *VAR_3)
{
 const struct i2c_board_info *VAR_4;
 struct dvb_usb_device *VAR_5;
 struct tc90522_config VAR_6;
 struct i2c_client *VAR_7;
 struct friio_priv *VAR_8;

 VAR_4 = &VAR_1.demod_info;
 VAR_5 = FUNC_0(VAR_3);
 VAR_7 = FUNC_2("tc90522", VAR_4->type,
         &VAR_5->i2c_adap, VAR_4->addr, &VAR_6);
 if (!VAR_7)
  return -VAR_0;
 VAR_3->fe[0] = VAR_6.fe;


 VAR_8 = FUNC_1(VAR_3);
 VAR_8->i2c_client_demod = VAR_7;
 VAR_8->tuner_adap.algo = &VAR_2;
 VAR_8->tuner_adap.dev.parent = &VAR_5->udev->dev;
 FUNC_6(VAR_8->tuner_adap.name, VAR_5->name, sizeof(VAR_8->tuner_adap.name));
 FUNC_5(VAR_8->tuner_adap.name, "-tuner", sizeof(VAR_8->tuner_adap.name));
 VAR_8->demod_sub_i2c = &VAR_8->tuner_adap;
 FUNC_4(&VAR_8->tuner_adap, VAR_5);

 return FUNC_3(&VAR_8->tuner_adap);
}
