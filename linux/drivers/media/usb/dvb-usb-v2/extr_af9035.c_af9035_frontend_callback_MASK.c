
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;



 int FUNC_0 (struct dvb_usb_device*,int,int) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 struct dvb_usb_device* FUNC_2 (struct i2c_adapter*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, int VAR_1,
        int VAR_2, int VAR_3)
{
 struct i2c_adapter *VAR_4 = VAR_0;
 struct dvb_usb_device *VAR_5 = FUNC_2(VAR_4);
 struct usb_interface *VAR_6 = VAR_5->intf;

 FUNC_1(&VAR_6->dev, "component=%d cmd=%d arg=%d\n",
  VAR_1, VAR_2, VAR_3);

 switch (VAR_1) {
 case 128:
  return FUNC_0(VAR_5, VAR_2, VAR_3);
 default:
  break;
 }

 return 0;
}
