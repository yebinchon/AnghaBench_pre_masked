
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxfast_private {int* duxbuf; } ;
struct usb_device {int dummy; } ;
struct comedi_device {int class_dev; struct usbduxfast_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int*,int ,int*,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2, int VAR_3)
{
 struct usb_device *VAR_4 = FUNC_0(VAR_2);
 struct usbduxfast_private *VAR_5 = VAR_2->private;
 int VAR_6;
 int VAR_7;

 VAR_5->duxbuf[0] = VAR_3;

 VAR_7 = FUNC_2(VAR_4, FUNC_3(VAR_4, VAR_0),
      VAR_5->duxbuf, VAR_1,
      &VAR_6, 10000);
 if (VAR_7 < 0)
  FUNC_1(VAR_2->class_dev,
   "could not transmit command to the usb-device, err=%d\n",
   VAR_7);
 return VAR_7;
}
