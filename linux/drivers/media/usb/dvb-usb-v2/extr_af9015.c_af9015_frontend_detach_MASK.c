
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct i2c_client {int dummy; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct dvb_usb_adapter {size_t id; } ;
struct af9015_state {struct i2c_client** demod_i2c_client; } ;


 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct af9015_state* FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_0)
{
 struct af9015_state *VAR_1 = FUNC_1(VAR_0);
 struct dvb_usb_device *VAR_2 = FUNC_0(VAR_0);
 struct usb_interface *VAR_3 = VAR_2->intf;
 struct i2c_client *VAR_4;

 FUNC_2(&VAR_3->dev, "adap id %u\n", VAR_0->id);


 VAR_4 = VAR_1->demod_i2c_client[VAR_0->id];
 FUNC_3(VAR_4);

 return 0;
}
