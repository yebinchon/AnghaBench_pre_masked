
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;




 int FUNC_0 (struct usb_serial_port*,unsigned char*) ;
 int FUNC_1 (struct usb_serial_port*,unsigned char*) ;

__attribute__((used)) static void FUNC_2(struct usb_serial_port *VAR_0, unsigned char *VAR_1)
{
 switch (*VAR_1) {
 case 129:
  FUNC_0(VAR_0, VAR_1 + 1);
  break;
 case 128:
  FUNC_1(VAR_0, VAR_1 + 1);
  break;
 }
}
