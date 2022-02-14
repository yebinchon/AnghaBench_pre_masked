
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zd1301_dev {struct platform_device* platform_device_demod; struct i2c_client* i2c_client_tuner; } ;
struct usb_interface {int dev; } ;
struct TYPE_8__ {TYPE_3__* driver; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_6__ {TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct dvb_usb_adapter {int dummy; } ;
struct TYPE_7__ {int owner; } ;
struct TYPE_5__ {int owner; } ;


 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct zd1301_dev* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_adapter *VAR_0)
{
 struct dvb_usb_device *VAR_1 = FUNC_0(VAR_0);
 struct zd1301_dev *VAR_2 = FUNC_1(VAR_1);
 struct usb_interface *VAR_3 = VAR_1->intf;
 struct platform_device *VAR_4;
 struct i2c_client *VAR_5;

 FUNC_2(&VAR_3->dev, "\n");

 VAR_5 = VAR_2->i2c_client_tuner;
 VAR_4 = VAR_2->platform_device_demod;


 if (VAR_5) {
  FUNC_4(VAR_5->dev.driver->owner);
  FUNC_3(VAR_5);
 }


 if (VAR_4) {
  FUNC_4(VAR_4->dev.driver->owner);
  FUNC_5(VAR_4);
 }

 return 0;
}
