
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl28xxu_dev {struct i2c_client* i2c_client_demod; struct i2c_client* i2c_client_slave_demod; } ;
struct TYPE_4__ {TYPE_3__* driver; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct dvb_usb_device {TYPE_2__* intf; } ;
struct dvb_usb_adapter {int dummy; } ;
struct TYPE_6__ {int owner; } ;
struct TYPE_5__ {int dev; } ;


 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct rtl28xxu_dev* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_0)
{
 struct dvb_usb_device *VAR_1 = FUNC_0(VAR_0);
 struct rtl28xxu_dev *VAR_2 = FUNC_1(VAR_1);
 struct i2c_client *VAR_3;

 FUNC_2(&VAR_1->intf->dev, "\n");


 VAR_3 = VAR_2->i2c_client_slave_demod;
 if (VAR_3) {
  FUNC_4(VAR_3->dev.driver->owner);
  FUNC_3(VAR_3);
 }


 VAR_3 = VAR_2->i2c_client_demod;
 if (VAR_3) {
  FUNC_4(VAR_3->dev.driver->owner);
  FUNC_3(VAR_3);
 }

 return 0;
}
