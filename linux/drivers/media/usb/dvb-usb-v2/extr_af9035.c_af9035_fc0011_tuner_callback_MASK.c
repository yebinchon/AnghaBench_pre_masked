
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;


 int VAR_0 ;


 int FUNC_0 (struct dvb_usb_device*,int,int) ;
 int FUNC_1 (struct dvb_usb_device*,int,int,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_1,
  int VAR_2, int VAR_3)
{
 struct usb_interface *VAR_4 = VAR_1->intf;
 int VAR_5;

 switch (VAR_2) {
 case 129:

  VAR_5 = FUNC_1(VAR_1, 0xd8eb, 1, 1);
  if (VAR_5 < 0)
   goto err;

  VAR_5 = FUNC_1(VAR_1, 0xd8ec, 1, 1);
  if (VAR_5 < 0)
   goto err;

  VAR_5 = FUNC_1(VAR_1, 0xd8ed, 1, 1);
  if (VAR_5 < 0)
   goto err;


  VAR_5 = FUNC_1(VAR_1, 0xd8d0, 1, 1);
  if (VAR_5 < 0)
   goto err;

  VAR_5 = FUNC_1(VAR_1, 0xd8d1, 1, 1);
  if (VAR_5 < 0)
   goto err;

  FUNC_3(10000, 50000);
  break;
 case 128:
  VAR_5 = FUNC_0(VAR_1, 0xd8e9, 1);
  if (VAR_5 < 0)
   goto err;

  VAR_5 = FUNC_0(VAR_1, 0xd8e8, 1);
  if (VAR_5 < 0)
   goto err;

  VAR_5 = FUNC_0(VAR_1, 0xd8e7, 1);
  if (VAR_5 < 0)
   goto err;

  FUNC_3(10000, 20000);

  VAR_5 = FUNC_0(VAR_1, 0xd8e7, 0);
  if (VAR_5 < 0)
   goto err;

  FUNC_3(10000, 20000);
  break;
 default:
  VAR_5 = -VAR_0;
  goto err;
 }

 return 0;

err:
 FUNC_2(&VAR_4->dev, "failed=%d\n", VAR_5);

 return VAR_5;
}
