
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbtest_dev {int* buf; struct usb_interface* intf; } ;
struct usb_interface {TYPE_2__* altsetting; } ;
struct usb_device {int dummy; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,int ,int ,int*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usbtest_dev *VAR_5)
{
 struct usb_interface *VAR_6 = VAR_5->intf;
 struct usb_device *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_1(VAR_7, FUNC_2(VAR_7, 0),
   VAR_4, VAR_2|VAR_3,
   0, VAR_6->altsetting[0].desc.bInterfaceNumber,
   VAR_5->buf, 1, VAR_1);
 switch (VAR_8) {
 case 1:
  return VAR_5->buf[0];
 case 0:
  VAR_8 = -VAR_0;

 default:
  return VAR_8;
 }
}
