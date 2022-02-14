
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_wwan_port_private {struct usb_wwan_port_private** out_buffer; int * out_urbs; scalar_t__* in_buffer; int * in_urbs; } ;
struct usb_serial_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct usb_wwan_port_private*) ;
 int FUNC_2 (int ) ;
 struct usb_wwan_port_private* FUNC_3 (struct usb_serial_port*) ;
 int FUNC_4 (struct usb_serial_port*,int *) ;

int FUNC_5(struct usb_serial_port *VAR_2)
{
 int VAR_3;
 struct usb_wwan_port_private *VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 FUNC_4(VAR_2, ((void*)0));

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_2(VAR_4->in_urbs[VAR_3]);
  FUNC_0((unsigned long)VAR_4->in_buffer[VAR_3]);
 }
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_2(VAR_4->out_urbs[VAR_3]);
  FUNC_1(VAR_4->out_buffer[VAR_3]);
 }

 FUNC_1(VAR_4);

 return 0;
}
