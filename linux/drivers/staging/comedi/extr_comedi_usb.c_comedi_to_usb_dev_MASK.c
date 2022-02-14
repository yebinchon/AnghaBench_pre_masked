
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct comedi_device {int dummy; } ;


 struct usb_interface* FUNC_0 (struct comedi_device*) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;

struct usb_device *FUNC_2(struct comedi_device *VAR_0)
{
 struct usb_interface *VAR_1 = FUNC_0(VAR_0);

 return VAR_1 ? FUNC_1(VAR_1) : ((void*)0);
}
