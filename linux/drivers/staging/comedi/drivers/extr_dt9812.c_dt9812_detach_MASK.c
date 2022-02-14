
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct dt9812_private {int mut; } ;
struct comedi_device {struct dt9812_private* private; } ;


 struct usb_interface* FUNC_0 (struct comedi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_0)
{
 struct usb_interface *VAR_1 = FUNC_0(VAR_0);
 struct dt9812_private *VAR_2 = VAR_0->private;

 if (!VAR_2)
  return;

 FUNC_1(&VAR_2->mut);
 FUNC_2(VAR_1, ((void*)0));
}
