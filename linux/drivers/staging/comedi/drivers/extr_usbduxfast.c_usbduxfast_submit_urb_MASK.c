
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxfast_private {int urb; int inbuf; } ;
struct usb_device {int dummy; } ;
struct comedi_device {int class_dev; struct usbduxfast_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct usb_device*,int ,int ,int ,int ,struct comedi_device*) ;
 int FUNC_3 (struct usb_device*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_0(VAR_4);
 struct usbduxfast_private *VAR_6 = VAR_4->private;
 int VAR_7;

 FUNC_2(VAR_6->urb, VAR_5, FUNC_3(VAR_5, VAR_0),
     VAR_6->inbuf, VAR_2,
     VAR_3, VAR_4);

 VAR_7 = FUNC_4(VAR_6->urb, VAR_1);
 if (VAR_7) {
  FUNC_1(VAR_4->class_dev, "usb_submit_urb error %d\n", VAR_7);
  return VAR_7;
 }
 return 0;
}
