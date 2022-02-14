
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_serial_port {int dummy; } ;
struct cp210x_port_private {int has_swapped_line_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*,int ,int*) ;
 int FUNC_1 (struct usb_serial_port*,int ,int) ;
 int FUNC_2 (int) ;
 struct cp210x_port_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_2)
{
 struct cp210x_port_private *VAR_3 = FUNC_3(VAR_2);
 u16 VAR_4;
 u16 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_0, &VAR_4);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_1, 0x800);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5 == 8) {
  VAR_3->has_swapped_line_ctl = 1;
  VAR_4 = FUNC_2(VAR_4);
 }

 return FUNC_1(VAR_2, VAR_1, VAR_4);
}
