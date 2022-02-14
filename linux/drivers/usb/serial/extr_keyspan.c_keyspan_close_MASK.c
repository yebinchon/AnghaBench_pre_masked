
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct keyspan_port_private {int * out_urbs; int * in_urbs; int inack_urb; scalar_t__ in_flip; scalar_t__ out_flip; scalar_t__ dtr_state; scalar_t__ rts_state; } ;


 int FUNC_0 (struct usb_serial_port*,int) ;
 int FUNC_1 (int) ;
 struct keyspan_port_private* FUNC_2 (struct usb_serial_port*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct usb_serial_port *VAR_0)
{
 int VAR_1;
 struct keyspan_port_private *VAR_2;

 VAR_2 = FUNC_2(VAR_0);

 VAR_2->rts_state = 0;
 VAR_2->dtr_state = 0;

 FUNC_0(VAR_0, 2);

 FUNC_1(100);

 VAR_2->out_flip = 0;
 VAR_2->in_flip = 0;

 FUNC_3(VAR_2->inack_urb);
 for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
  FUNC_3(VAR_2->in_urbs[VAR_1]);
  FUNC_3(VAR_2->out_urbs[VAR_1]);
 }
}
