
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_8__ {TYPE_3__* driver; } ;
struct i2c_client {TYPE_4__ dev; } ;
struct TYPE_6__ {TYPE_1__* devices; } ;
struct dvb_usb_device {TYPE_2__ props; struct cxusb_state* priv; } ;
struct cxusb_state {struct i2c_client* i2c_client_demod; struct i2c_client* i2c_client_tuner; } ;
struct TYPE_7__ {int owner; } ;
struct TYPE_5__ {int ** warm_ids; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*) ;
 int * VAR_1 ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 struct dvb_usb_device* FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_5(struct usb_interface *VAR_2)
{
 struct dvb_usb_device *VAR_3 = FUNC_4(VAR_2);
 struct cxusb_state *VAR_4 = VAR_3->priv;
 struct i2c_client *VAR_5;

 if (VAR_3->props.devices[0].warm_ids[0] == &VAR_1[VAR_0])
  FUNC_0(VAR_3);


 VAR_5 = VAR_4->i2c_client_tuner;
 if (VAR_5) {
  FUNC_3(VAR_5->dev.driver->owner);
  FUNC_2(VAR_5);
 }


 VAR_5 = VAR_4->i2c_client_demod;
 if (VAR_5) {
  FUNC_3(VAR_5->dev.driver->owner);
  FUNC_2(VAR_5);
 }

 FUNC_1(VAR_2);
}
