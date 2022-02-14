
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port_number; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct moschip_port {unsigned char shadowLCR; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 struct moschip_port* FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (struct usb_serial*,int ,int ,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_2, int VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_2->driver_data;
 unsigned char VAR_5;
 struct usb_serial *VAR_6;
 struct moschip_port *VAR_7;

 VAR_6 = VAR_4->serial;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 == ((void*)0))
  return;

 if (VAR_3 == -1)
  VAR_5 = VAR_7->shadowLCR | VAR_1;
 else
  VAR_5 = VAR_7->shadowLCR & ~VAR_1;

 VAR_7->shadowLCR = VAR_5;
 FUNC_1(VAR_6, VAR_4->port_number, VAR_0,
        VAR_7->shadowLCR);
}
