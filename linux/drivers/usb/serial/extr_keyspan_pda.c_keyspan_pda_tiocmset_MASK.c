
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct usb_serial*,unsigned char*) ;
 int FUNC_1 (struct usb_serial*,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2,
    unsigned int VAR_3, unsigned int VAR_4)
{
 struct usb_serial_port *VAR_5 = VAR_2->driver_data;
 struct usb_serial *VAR_6 = VAR_5->serial;
 int VAR_7;
 unsigned char VAR_8;

 VAR_7 = FUNC_0(VAR_6, &VAR_8);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_3 & VAR_1)
  VAR_8 |= (1<<2);
 if (VAR_3 & VAR_0)
  VAR_8 |= (1<<7);

 if (VAR_4 & VAR_1)
  VAR_8 &= ~(1<<2);
 if (VAR_4 & VAR_0)
  VAR_8 &= ~(1<<7);
 VAR_7 = FUNC_1(VAR_6, VAR_8);
 return VAR_7;
}
