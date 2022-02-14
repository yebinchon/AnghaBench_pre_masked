
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usb_wwan_port_private {int * out_urbs; int * in_urbs; int delayed; } ;
struct usb_wwan_intf_private {scalar_t__ open_ports; int susp_lock; } ;
struct usb_serial_port {int interrupt_in_urb; struct usb_serial* serial; } ;
struct usb_serial {TYPE_1__* interface; } ;
struct urb {int dummy; } ;
struct TYPE_3__ {scalar_t__ needs_remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct urb*,struct usb_wwan_port_private*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct urb* FUNC_5 (int *) ;
 struct usb_wwan_intf_private* FUNC_6 (struct usb_serial*) ;
 struct usb_wwan_port_private* FUNC_7 (struct usb_serial_port*) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct usb_serial_port *VAR_2)
{
 int VAR_3;
 struct usb_serial *VAR_4 = VAR_2->serial;
 struct usb_wwan_port_private *VAR_5;
 struct usb_wwan_intf_private *VAR_6 = FUNC_6(VAR_4);
 struct urb *VAR_7;

 VAR_5 = FUNC_7(VAR_2);





 FUNC_0(&VAR_6->susp_lock);
 if (--VAR_6->open_ports == 0)
  VAR_4->interface->needs_remote_wakeup = 0;
 FUNC_1(&VAR_6->susp_lock);

 for (;;) {
  VAR_7 = FUNC_5(&VAR_5->delayed);
  if (!VAR_7)
   break;
  FUNC_2(VAR_7, VAR_5);
  FUNC_4(VAR_4->interface);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_8(VAR_5->in_urbs[VAR_3]);
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_8(VAR_5->out_urbs[VAR_3]);
 FUNC_8(VAR_2->interrupt_in_urb);

 FUNC_3(VAR_4->interface);
}
