
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_wwan_port_private {int rts_state; int dtr_state; } ;
struct usb_wwan_intf_private {int use_send_setup; } ;
struct usb_serial_port {int serial; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct usb_wwan_intf_private* FUNC_0 (int ) ;
 struct usb_wwan_port_private* FUNC_1 (struct usb_serial_port*) ;
 int FUNC_2 (struct usb_serial_port*) ;

int FUNC_3(struct tty_struct *VAR_3,
        unsigned int VAR_4, unsigned int VAR_5)
{
 struct usb_serial_port *VAR_6 = VAR_3->driver_data;
 struct usb_wwan_port_private *VAR_7;
 struct usb_wwan_intf_private *VAR_8;

 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = FUNC_0(VAR_6->serial);

 if (!VAR_8->use_send_setup)
  return -VAR_0;


 if (VAR_4 & VAR_2)
  VAR_7->rts_state = 1;
 if (VAR_4 & VAR_1)
  VAR_7->dtr_state = 1;

 if (VAR_5 & VAR_2)
  VAR_7->rts_state = 0;
 if (VAR_5 & VAR_1)
  VAR_7->dtr_state = 0;
 return FUNC_2(VAR_6);
}
