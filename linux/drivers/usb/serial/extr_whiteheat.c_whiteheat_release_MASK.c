
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct usb_serial {struct usb_serial_port** port; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_2(struct usb_serial *VAR_1)
{
 struct usb_serial_port *VAR_2;


 VAR_2 = VAR_1->port[VAR_0];
 FUNC_0(FUNC_1(VAR_2));
}
