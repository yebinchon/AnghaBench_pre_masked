
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct dw2102_state {struct i2c_client* i2c_client_demod; struct i2c_client* i2c_client_tuner; } ;
struct dvb_usb_device {scalar_t__ priv; } ;
struct TYPE_3__ {int owner; } ;


 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 struct dvb_usb_device* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct dvb_usb_device *VAR_1 = FUNC_3(VAR_0);
 struct dw2102_state *VAR_2 = (struct dw2102_state *)VAR_1->priv;
 struct i2c_client *VAR_3;


 VAR_3 = VAR_2->i2c_client_tuner;
 if (VAR_3) {
  FUNC_2(VAR_3->dev.driver->owner);
  FUNC_1(VAR_3);
 }


 VAR_3 = VAR_2->i2c_client_demod;
 if (VAR_3) {
  FUNC_2(VAR_3->dev.driver->owner);
  FUNC_1(VAR_3);
 }

 FUNC_0(VAR_0);
}
