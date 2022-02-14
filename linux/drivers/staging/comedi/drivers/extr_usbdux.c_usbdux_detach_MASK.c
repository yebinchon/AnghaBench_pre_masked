
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbdux_private {int mut; } ;
struct usb_interface {int dummy; } ;
struct comedi_device {struct usbdux_private* private; } ;


 struct usb_interface* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 int FUNC_5 (struct comedi_device*,int) ;
 int FUNC_6 (struct comedi_device*,int) ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (struct comedi_device*,int) ;

__attribute__((used)) static void FUNC_9(struct comedi_device *VAR_0)
{
 struct usb_interface *VAR_1 = FUNC_0(VAR_0);
 struct usbdux_private *VAR_2 = VAR_0->private;

 FUNC_4(VAR_1, ((void*)0));

 if (!VAR_2)
  return;

 FUNC_2(&VAR_2->mut);


 FUNC_8(VAR_0, 1);
 FUNC_6(VAR_0, 1);
 FUNC_5(VAR_0, 1);

 FUNC_7(VAR_0);

 FUNC_3(&VAR_2->mut);

 FUNC_1(&VAR_2->mut);
}
