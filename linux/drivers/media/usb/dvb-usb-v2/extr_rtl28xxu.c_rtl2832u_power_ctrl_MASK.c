
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_device {TYPE_1__* intf; int udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int,int) ;
 int FUNC_2 (struct dvb_usb_device*,int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_4->intf->dev, "onoff=%d\n", VAR_5);

 if (VAR_5) {

  VAR_6 = FUNC_1(VAR_4, VAR_2, 0x08, 0x18);
  if (VAR_6)
   goto err;


  VAR_6 = FUNC_1(VAR_4, VAR_1, 0x00, 0x10);
  if (VAR_6)
   goto err;


  VAR_6 = FUNC_1(VAR_4, VAR_0, 0x80, 0x80);
  if (VAR_6)
   goto err;


  VAR_6 = FUNC_1(VAR_4, VAR_0, 0x20, 0x20);
  if (VAR_6)
   goto err;


  VAR_6 = FUNC_2(VAR_4, VAR_3, "\x00\x00", 2);
  if (VAR_6)
   goto err;

  VAR_6 = FUNC_3(VAR_4->udev, FUNC_4(VAR_4->udev, 0x81));
  if (VAR_6)
   goto err;
 } else {

  VAR_6 = FUNC_1(VAR_4, VAR_2, 0x10, 0x10);
  if (VAR_6)
   goto err;


  VAR_6 = FUNC_1(VAR_4, VAR_0, 0x00, 0x80);
  if (VAR_6)
   goto err;


  VAR_6 = FUNC_2(VAR_4, VAR_3, "\x10\x02", 2);
  if (VAR_6)
   goto err;
 }

 return VAR_6;
err:
 FUNC_0(&VAR_4->intf->dev, "failed=%d\n", VAR_6);
 return VAR_6;
}
