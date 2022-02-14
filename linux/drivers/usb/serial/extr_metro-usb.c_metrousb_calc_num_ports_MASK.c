
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_endpoints {scalar_t__ num_interrupt_out; } ;
struct usb_serial {TYPE_1__* interface; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct usb_serial*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_1,
       struct usb_serial_endpoints *VAR_2)
{
 if (FUNC_1(VAR_1)) {
  if (VAR_2->num_interrupt_out == 0) {
   FUNC_0(&VAR_1->interface->dev, "interrupt-out endpoint missing\n");
   return -VAR_0;
  }
 }

 return 1;
}
