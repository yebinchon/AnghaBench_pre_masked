
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_endpoints {int num_interrupt_in; } ;
struct usb_serial {TYPE_1__* interface; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct usb_serial*,struct usb_serial_endpoints*) ;
 scalar_t__ FUNC_2 (struct usb_serial*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial *VAR_2,
     struct usb_serial_endpoints *VAR_3)
{
 unsigned long VAR_4 = (unsigned long)FUNC_2(VAR_2);
 struct device *VAR_5 = &VAR_2->interface->dev;
 int VAR_6;

 if (VAR_4 & VAR_1) {
  VAR_6 = FUNC_1(VAR_2, VAR_3);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_3->num_interrupt_in < 1) {
  FUNC_0(VAR_5, "required interrupt-in endpoint missing\n");
  return -VAR_0;
 }

 return 1;
}
