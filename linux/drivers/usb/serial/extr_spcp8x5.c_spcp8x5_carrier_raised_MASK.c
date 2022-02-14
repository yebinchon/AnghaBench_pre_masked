
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_serial_port*,int*) ;

__attribute__((used)) static int FUNC_1(struct usb_serial_port *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, &VAR_2);
 if (VAR_3 || VAR_2 & VAR_0)
  return 1;

 return 0;
}
