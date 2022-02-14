
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct f81232_private {int modem_control; int modem_status; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct f81232_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_12)
{
 int VAR_13;
 struct usb_serial_port *VAR_14 = VAR_12->driver_data;
 struct f81232_private *VAR_15 = FUNC_3(VAR_14);
 u8 VAR_16, VAR_17;


 FUNC_0(VAR_14);

 FUNC_1(&VAR_15->lock);
 VAR_16 = VAR_15->modem_control;
 VAR_17 = VAR_15->modem_status;
 FUNC_2(&VAR_15->lock);

 VAR_13 = (VAR_16 & VAR_6 ? VAR_3 : 0) |
  (VAR_16 & VAR_7 ? VAR_5 : 0) |
  (VAR_17 & VAR_8 ? VAR_1 : 0) |
  (VAR_17 & VAR_9 ? VAR_0 : 0) |
  (VAR_17 & VAR_11 ? VAR_4 : 0) |
  (VAR_17 & VAR_10 ? VAR_2 : 0);

 return VAR_13;
}
