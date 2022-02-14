
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct sierra_port_private {int rts_state; int dtr_state; } ;


 int FUNC_0 (struct usb_serial_port*) ;
 struct sierra_port_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_2(struct usb_serial_port *VAR_0, int VAR_1)
{
 struct sierra_port_private *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 VAR_2->rts_state = VAR_1;
 VAR_2->dtr_state = VAR_1;

 FUNC_0(VAR_0);
}
