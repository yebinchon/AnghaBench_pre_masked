
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dev; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;




 int FUNC_0 (struct dvb_usb_device*,int,int,int) ;
 int FUNC_1 (int *,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_0,
  int VAR_1, int VAR_2)
{
 struct usb_interface *VAR_3 = VAR_0->intf;
 int VAR_4;
 u8 VAR_5;

 FUNC_1(&VAR_3->dev, "cmd=%d arg=%d\n", VAR_1, VAR_2);







 switch (VAR_1) {
 case 129:
  if (VAR_2)
   VAR_5 = 0x00;
  else
   VAR_5 = 0x01;

  VAR_4 = FUNC_0(VAR_0, 0x00d8e7, VAR_5, 0x01);
  if (VAR_4 < 0)
   goto err;
  break;
 case 128:
  if (VAR_2)
   VAR_5 = 0x01;
  else
   VAR_5 = 0x00;

  VAR_4 = FUNC_0(VAR_0, 0x00d8eb, VAR_5, 0x01);
  if (VAR_4 < 0)
   goto err;
  break;
 }

 return 0;

err:
 FUNC_1(&VAR_3->dev, "failed=%d\n", VAR_4);

 return VAR_4;
}
