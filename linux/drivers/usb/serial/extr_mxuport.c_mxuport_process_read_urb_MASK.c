
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {struct usb_serial_port** port; } ;
struct urb {struct usb_serial_port* context; } ;


 int FUNC_0 (struct urb*) ;
 int FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->context;
 struct usb_serial *VAR_2 = VAR_1->serial;

 if (VAR_1 == VAR_2->port[0])
  FUNC_0(VAR_0);

 if (VAR_1 == VAR_2->port[1])
  FUNC_1(VAR_0);
}
