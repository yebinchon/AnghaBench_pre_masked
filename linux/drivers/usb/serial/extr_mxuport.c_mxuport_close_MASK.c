
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port_number; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct usb_serial_port *VAR_2)
{
 struct usb_serial *VAR_3 = VAR_2->serial;

 FUNC_0(VAR_3, VAR_0, 0,
         VAR_2->port_number);

 FUNC_0(VAR_3, VAR_1, 0,
         VAR_2->port_number);
}
