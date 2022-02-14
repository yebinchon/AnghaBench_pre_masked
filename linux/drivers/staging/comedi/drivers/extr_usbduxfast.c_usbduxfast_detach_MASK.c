
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbduxfast_private {int mut; int duxbuf; scalar_t__ urb; int inbuf; } ;
struct usb_interface {int dummy; } ;
struct comedi_device {struct usbduxfast_private* private; } ;


 struct usb_interface* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct comedi_device *VAR_0)
{
 struct usb_interface *VAR_1 = FUNC_0(VAR_0);
 struct usbduxfast_private *VAR_2 = VAR_0->private;

 if (!VAR_2)
  return;

 FUNC_3(&VAR_2->mut);

 FUNC_7(VAR_1, ((void*)0));

 if (VAR_2->urb) {

  FUNC_6(VAR_2->urb);

  FUNC_1(VAR_2->inbuf);
  FUNC_5(VAR_2->urb);
 }

 FUNC_1(VAR_2->duxbuf);

 FUNC_4(&VAR_2->mut);

 FUNC_2(&VAR_2->mut);
}
