
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_wwan_port_private {int rts_state; int dtr_state; } ;
struct usb_wwan_intf_private {int use_send_setup; } ;
struct usb_serial_port {int serial; } ;


 struct usb_wwan_intf_private* FUNC_0 (int ) ;
 struct usb_wwan_port_private* FUNC_1 (struct usb_serial_port*) ;
 int FUNC_2 (struct usb_serial_port*) ;

void FUNC_3(struct usb_serial_port *VAR_0, int VAR_1)
{
 struct usb_wwan_port_private *VAR_2;
 struct usb_wwan_intf_private *VAR_3;

 VAR_3 = FUNC_0(VAR_0->serial);

 if (!VAR_3->use_send_setup)
  return;

 VAR_2 = FUNC_1(VAR_0);

 VAR_2->rts_state = VAR_1;
 VAR_2->dtr_state = VAR_1;

 FUNC_2(VAR_0);
}
