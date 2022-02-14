
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct keyspan_port_private {int rts_state; int dtr_state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*,int ) ;
 struct keyspan_port_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 struct usb_serial_port *VAR_5 = VAR_2->driver_data;
 struct keyspan_port_private *VAR_6 = FUNC_1(VAR_5);

 if (VAR_3 & VAR_1)
  VAR_6->rts_state = 1;
 if (VAR_3 & VAR_0)
  VAR_6->dtr_state = 1;
 if (VAR_4 & VAR_1)
  VAR_6->rts_state = 0;
 if (VAR_4 & VAR_0)
  VAR_6->dtr_state = 0;
 FUNC_0(VAR_5, 0);
 return 0;
}
