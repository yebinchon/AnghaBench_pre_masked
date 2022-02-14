
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {TYPE_1__* interface; } ;
struct urb {int transfer_buffer; } ;
struct sierra_port_private {int num_in_urbs; int ** in_urbs; int active; int lock; int outstanding_urbs; int delayed; } ;
struct sierra_intf_private {scalar_t__ open_ports; int susp_lock; } ;
struct TYPE_3__ {scalar_t__ needs_remote_wakeup; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct urb*) ;
 struct urb* FUNC_8 (int *) ;
 struct sierra_intf_private* FUNC_9 (struct usb_serial*) ;
 struct sierra_port_private* FUNC_10 (struct usb_serial_port*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct usb_serial_port *VAR_0)
{
 int VAR_1;
 struct usb_serial *VAR_2 = VAR_0->serial;
 struct sierra_port_private *VAR_3;
 struct sierra_intf_private *VAR_4 = FUNC_9(VAR_2);
 struct urb *VAR_5;

 VAR_3 = FUNC_10(VAR_0);





 FUNC_3(&VAR_4->susp_lock);
 if (--VAR_4->open_ports == 0)
  VAR_2->interface->needs_remote_wakeup = 0;
 FUNC_4(&VAR_4->susp_lock);

 for (;;) {
  VAR_5 = FUNC_8(&VAR_3->delayed);
  if (!VAR_5)
   break;
  FUNC_0(VAR_5->transfer_buffer);
  FUNC_7(VAR_5);
  FUNC_6(VAR_2->interface);
  FUNC_3(&VAR_3->lock);
  VAR_3->outstanding_urbs--;
  FUNC_4(&VAR_3->lock);
 }

 FUNC_2(VAR_0);
 FUNC_11(&VAR_3->active);

 for (VAR_1 = 0; VAR_1 < VAR_3->num_in_urbs; VAR_1++) {
  FUNC_1(VAR_3->in_urbs[VAR_1]);
  VAR_3->in_urbs[VAR_1] = ((void*)0);
 }

 FUNC_5(VAR_2->interface);
}
