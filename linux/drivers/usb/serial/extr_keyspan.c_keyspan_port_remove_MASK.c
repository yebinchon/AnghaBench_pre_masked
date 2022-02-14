
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct keyspan_port_private {struct keyspan_port_private** in_buffer; struct keyspan_port_private** out_buffer; struct keyspan_port_private* inack_buffer; struct keyspan_port_private* outcont_buffer; int * out_urbs; int * in_urbs; int outcont_urb; int inack_urb; } ;


 int FUNC_0 (struct keyspan_port_private**) ;
 int FUNC_1 (struct keyspan_port_private*) ;
 int FUNC_2 (int ) ;
 struct keyspan_port_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_0)
{
 struct keyspan_port_private *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_1->inack_urb);
 FUNC_4(VAR_1->outcont_urb);
 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  FUNC_4(VAR_1->in_urbs[VAR_2]);
  FUNC_4(VAR_1->out_urbs[VAR_2]);
 }

 FUNC_2(VAR_1->inack_urb);
 FUNC_2(VAR_1->outcont_urb);
 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  FUNC_2(VAR_1->in_urbs[VAR_2]);
  FUNC_2(VAR_1->out_urbs[VAR_2]);
 }

 FUNC_1(VAR_1->outcont_buffer);
 FUNC_1(VAR_1->inack_buffer);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->out_buffer); ++VAR_2)
  FUNC_1(VAR_1->out_buffer[VAR_2]);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->in_buffer); ++VAR_2)
  FUNC_1(VAR_1->in_buffer[VAR_2]);

 FUNC_1(VAR_1);

 return 0;
}
