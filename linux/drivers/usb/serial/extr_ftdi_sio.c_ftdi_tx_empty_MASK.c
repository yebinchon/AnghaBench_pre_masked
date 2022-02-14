
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct usb_serial_port*,unsigned char*) ;

__attribute__((used)) static bool FUNC_1(struct usb_serial_port *VAR_1)
{
 unsigned char VAR_2[2];
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 == 2) {
  if (!(VAR_2[1] & VAR_0))
   return 0;
 }

 return 1;
}
