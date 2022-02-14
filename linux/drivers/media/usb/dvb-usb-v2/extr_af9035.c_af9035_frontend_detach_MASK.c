
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct state {scalar_t__* i2c_client; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct dvb_usb_adapter {int id; } ;


 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct state* FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_adapter *VAR_0)
{
 struct state *VAR_1 = FUNC_1(VAR_0);
 struct dvb_usb_device *VAR_2 = FUNC_0(VAR_0);
 struct usb_interface *VAR_3 = VAR_2->intf;

 FUNC_3(&VAR_3->dev, "adap->id=%d\n", VAR_0->id);

 if (VAR_0->id == 1) {
  if (VAR_1->i2c_client[1])
   FUNC_2(VAR_2);
 } else if (VAR_0->id == 0) {
  if (VAR_1->i2c_client[0])
   FUNC_2(VAR_2);
 }

 return 0;
}
