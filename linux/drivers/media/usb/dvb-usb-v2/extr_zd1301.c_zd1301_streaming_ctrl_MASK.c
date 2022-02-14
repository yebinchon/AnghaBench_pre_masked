
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dev; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (int *,char*,int) ;
 struct dvb_usb_device* FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_usb_device*,int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dvb_usb_device *VAR_2 = FUNC_1(VAR_0);
 struct usb_interface *VAR_3 = VAR_2->intf;
 int VAR_4;
 u8 VAR_5[3] = {0x03, 0x00, VAR_1 ? 0x07 : 0x08};

 FUNC_0(&VAR_3->dev, "onoff=%d\n", VAR_1);

 VAR_4 = FUNC_2(VAR_2, VAR_5, 3, ((void*)0), 0);
 if (VAR_4)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_3->dev, "failed=%d\n", VAR_4);
 return VAR_4;
}
