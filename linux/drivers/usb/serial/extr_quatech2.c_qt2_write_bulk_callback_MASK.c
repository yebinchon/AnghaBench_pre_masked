
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct urb {struct usb_serial_port* context; } ;
struct qt2_port_private {int urb_in_use; int urb_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct qt2_port_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_0)
{
 struct usb_serial_port *VAR_1;
 struct qt2_port_private *VAR_2;
 unsigned long VAR_3;

 VAR_1 = VAR_0->context;
 VAR_2 = FUNC_2(VAR_1);

 FUNC_0(&VAR_2->urb_lock, VAR_3);

 VAR_2->urb_in_use = 0;
 FUNC_3(VAR_1);

 FUNC_1(&VAR_2->urb_lock, VAR_3);

}
