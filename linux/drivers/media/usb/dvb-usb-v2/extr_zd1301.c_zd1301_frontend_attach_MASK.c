
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i2c_write_max; struct dvb_frontend* dvb_frontend; } ;
struct TYPE_12__ {int reg_write; int reg_read; struct dvb_usb_device* reg_priv; } ;
struct zd1301_dev {struct i2c_client* i2c_client_tuner; struct platform_device* platform_device_demod; TYPE_1__ mt2060_pdata; TYPE_6__ demod_pdata; } ;
struct usb_interface {int dev; } ;
struct TYPE_11__ {TYPE_4__* driver; } ;
struct platform_device {TYPE_5__ dev; } ;
struct TYPE_9__ {TYPE_2__* driver; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct i2c_board_info {int addr; TYPE_1__* platform_data; int type; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct dvb_usb_adapter {struct dvb_frontend** fe; } ;
struct dvb_frontend {int dummy; } ;
typedef int board_info ;
struct TYPE_10__ {int owner; } ;
struct TYPE_8__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct platform_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct platform_device*) ;
 struct dvb_usb_device* FUNC_2 (struct dvb_usb_adapter*) ;
 struct zd1301_dev* FUNC_3 (struct dvb_usb_adapter*) ;
 int FUNC_4 (int *,char*,...) ;
 struct i2c_client* FUNC_5 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (struct i2c_board_info*,int ,int) ;
 int FUNC_8 (int ) ;
 struct platform_device* FUNC_9 (int *,char*,int ,TYPE_6__*,int) ;
 int FUNC_10 (struct platform_device*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,char*,int ) ;
 int FUNC_13 (int ) ;
 struct dvb_frontend* FUNC_14 (struct platform_device*) ;
 struct i2c_adapter* FUNC_15 (struct platform_device*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_16(struct dvb_usb_adapter *VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_2(VAR_5);
 struct zd1301_dev *VAR_7 = FUNC_3(VAR_5);
 struct usb_interface *VAR_8 = VAR_6->intf;
 struct platform_device *VAR_9;
 struct i2c_client *VAR_10;
 struct i2c_board_info VAR_11;
 struct i2c_adapter *VAR_12;
 struct dvb_frontend *VAR_13;
 int VAR_14;

 FUNC_4(&VAR_8->dev, "\n");


 VAR_7->demod_pdata.reg_priv = VAR_6;
 VAR_7->demod_pdata.reg_read = VAR_3;
 VAR_7->demod_pdata.reg_write = VAR_4;
 FUNC_11("%s", "zd1301_demod");
 VAR_9 = FUNC_9(&VAR_8->dev,
          "zd1301_demod",
          VAR_2,
          &VAR_7->demod_pdata,
          sizeof(VAR_7->demod_pdata));
 if (FUNC_0(VAR_9)) {
  VAR_14 = FUNC_1(VAR_9);
  goto err;
 }
 if (!VAR_9->dev.driver) {
  VAR_14 = -VAR_0;
  goto err;
 }
 if (!FUNC_13(VAR_9->dev.driver->owner)) {
  VAR_14 = -VAR_0;
  goto err_platform_device_unregister;
 }

 VAR_12 = FUNC_15(VAR_9);
 VAR_13 = FUNC_14(VAR_9);
 if (!VAR_12 || !VAR_13) {
  VAR_14 = -VAR_0;
  goto err_module_put_demod;
 }


 VAR_7->mt2060_pdata.i2c_write_max = 9;
 VAR_7->mt2060_pdata.dvb_frontend = VAR_13;
 FUNC_7(&VAR_11, 0, sizeof(VAR_11));
 FUNC_12(VAR_11.type, "mt2060", VAR_1);
 VAR_11.addr = 0x60;
 VAR_11.platform_data = &VAR_7->mt2060_pdata;
 FUNC_11("%s", "mt2060");
 VAR_10 = FUNC_5(VAR_12, &VAR_11);
 if (!VAR_10 || !VAR_10->dev.driver) {
  VAR_14 = -VAR_0;
  goto err_module_put_demod;
 }
 if (!FUNC_13(VAR_10->dev.driver->owner)) {
  VAR_14 = -VAR_0;
  goto err_i2c_unregister_device;
 }

 VAR_7->platform_device_demod = VAR_9;
 VAR_7->i2c_client_tuner = VAR_10;
 VAR_5->fe[0] = VAR_13;

 return 0;
err_i2c_unregister_device:
 FUNC_6(VAR_10);
err_module_put_demod:
 FUNC_8(VAR_9->dev.driver->owner);
err_platform_device_unregister:
 FUNC_10(VAR_9);
err:
 FUNC_4(&VAR_8->dev, "failed=%d\n", VAR_14);
 return VAR_14;
}
