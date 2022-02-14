
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbport_trig_data {int count; } ;
struct usb_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct usbport_trig_data*,struct usb_device*) ;

__attribute__((used)) static int FUNC_1(struct usb_device *VAR_0, void *VAR_1)
{
 struct usbport_trig_data *VAR_2 = VAR_1;

 if (FUNC_0(VAR_2, VAR_0))
  VAR_2->count++;

 return 0;
}
