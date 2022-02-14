
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_wwan_port_private {int out_busy; struct urb** out_urbs; } ;
struct usb_wwan_intf_private {int susp_lock; int in_flight; } ;
struct usb_serial_port {TYPE_1__* serial; } ;
struct urb {struct usb_serial_port* context; } ;
struct TYPE_2__ {int interface; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 struct usb_wwan_intf_private* FUNC_5 (TYPE_1__*) ;
 struct usb_wwan_port_private* FUNC_6 (struct usb_serial_port*) ;
 int FUNC_7 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_8(struct urb *VAR_1)
{
 struct usb_serial_port *VAR_2;
 struct usb_wwan_port_private *VAR_3;
 struct usb_wwan_intf_private *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_2 = VAR_1->context;
 VAR_4 = FUNC_5(VAR_2->serial);

 FUNC_7(VAR_2);
 FUNC_4(VAR_2->serial->interface);
 VAR_3 = FUNC_6(VAR_2);
 FUNC_2(&VAR_4->susp_lock, VAR_5);
 VAR_4->in_flight--;
 FUNC_3(&VAR_4->susp_lock, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
  if (VAR_3->out_urbs[VAR_6] == VAR_1) {
   FUNC_1();
   FUNC_0(VAR_6, &VAR_3->out_busy);
   break;
  }
 }
}
