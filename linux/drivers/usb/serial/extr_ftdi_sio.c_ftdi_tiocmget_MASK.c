
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct ftdi_private {int last_dtr_rts; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct usb_serial_port*,unsigned char*) ;
 struct ftdi_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_8)
{
 struct usb_serial_port *VAR_9 = VAR_8->driver_data;
 struct ftdi_private *VAR_10 = FUNC_1(VAR_9);
 unsigned char VAR_11[2];
 int VAR_12;

 VAR_12 = FUNC_0(VAR_9, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = (VAR_11[0] & VAR_1 ? VAR_6 : 0) |
  (VAR_11[0] & VAR_0 ? VAR_5 : 0) |
  (VAR_11[0] & VAR_2 ? VAR_7 : 0) |
  (VAR_11[0] & VAR_3 ? VAR_4 : 0) |
  VAR_10->last_dtr_rts;

 return VAR_12;
}
