
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct urb {int interval; int transfer_flags; scalar_t__ status; struct usb_device* dev; struct comedi_device* context; } ;
struct comedi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_device* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (struct urb*,int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
       struct urb **VAR_3, int VAR_4,
       int VAR_5)
{
 struct usb_device *VAR_6 = FUNC_0(VAR_2);
 struct urb *VAR_7;
 int VAR_8;
 int VAR_9;


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7 = VAR_3[VAR_9];


  if (VAR_5)
   VAR_7->interval = 1;
  VAR_7->context = VAR_2;
  VAR_7->dev = VAR_6;
  VAR_7->status = 0;
  VAR_7->transfer_flags = VAR_1;

  VAR_8 = FUNC_1(VAR_7, VAR_0);
  if (VAR_8)
   return VAR_8;
 }
 return 0;
}
