
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usb_serial*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_6)
{
 struct usb_serial_port *VAR_7 = VAR_6->driver_data;
 struct usb_serial *VAR_8 = VAR_7->serial;
 int VAR_9;
 unsigned char VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_8, &VAR_10);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_11 =
  ((VAR_10 & (1<<7)) ? VAR_3 : 0) |
  ((VAR_10 & (1<<6)) ? VAR_0 : 0) |
  ((VAR_10 & (1<<5)) ? VAR_4 : 0) |
  ((VAR_10 & (1<<4)) ? VAR_2 : 0) |
  ((VAR_10 & (1<<3)) ? VAR_1 : 0) |
  ((VAR_10 & (1<<2)) ? VAR_5 : 0);
 return VAR_11;
}
