
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_interface {int dev; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct dvb_usb_device *VAR_3 = VAR_0;
 struct usb_interface *VAR_4 = VAR_3->intf;
 int VAR_5;
 u8 VAR_6[7] = {0x07, 0x00, 0x03, 0x01,
       (VAR_1 >> 0) & 0xff, (VAR_1 >> 8) & 0xff, VAR_2};

 VAR_5 = FUNC_1(VAR_3, VAR_6, 7, ((void*)0), 0);
 if (VAR_5)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_4->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
