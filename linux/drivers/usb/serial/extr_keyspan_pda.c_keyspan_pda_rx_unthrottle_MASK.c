
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; int interrupt_in_urb; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->driver_data;


 if (FUNC_1(VAR_2->interrupt_in_urb, VAR_0))
  FUNC_0(&VAR_2->dev, "usb_submit_urb(read urb) failed\n");
}
