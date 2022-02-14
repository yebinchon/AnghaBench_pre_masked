
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {int ai_interval; } ;
struct usb_device {int dummy; } ;
struct urb {int transfer_flags; scalar_t__ status; struct usb_device* dev; struct comedi_device* context; int interval; } ;
struct comedi_device {struct usbdux_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
         struct urb **VAR_3, int VAR_4,
         int VAR_5)
{
 struct usb_device *VAR_6 = FUNC_0(VAR_2);
 struct usbdux_private *VAR_7 = VAR_2->private;
 struct urb *VAR_8;
 int VAR_9;
 int VAR_10;


 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  VAR_8 = VAR_3[VAR_10];


  if (VAR_5)
   VAR_8->interval = VAR_7->ai_interval;
  VAR_8->context = VAR_2;
  VAR_8->dev = VAR_6;
  VAR_8->status = 0;
  VAR_8->transfer_flags = VAR_1;

  VAR_9 = FUNC_1(VAR_8, VAR_0);
  if (VAR_9)
   return VAR_9;
 }
 return 0;
}
