
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_serial_port {int dummy; } ;
struct cp210x_port_private {scalar_t__ has_swapped_line_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_serial_port*,int ,int *) ;
 int FUNC_1 (int ) ;
 struct cp210x_port_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_1, u16 *VAR_2)
{
 struct cp210x_port_private *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2);
 if (VAR_4)
  return VAR_4;


 if (VAR_3->has_swapped_line_ctl)
  *VAR_2 = FUNC_1(*VAR_2);

 return 0;
}
