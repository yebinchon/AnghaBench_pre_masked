
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct ti_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ti_port*,int*) ;
 struct ti_port* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static bool FUNC_2(struct usb_serial_port *VAR_1)
{
 struct ti_port *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_0(VAR_2, &VAR_4);
 if (!VAR_3 && !(VAR_4 & VAR_0))
  return 0;

 return 1;
}
