
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct edgeport_port {unsigned int shadowMCR; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct edgeport_port*,int ,unsigned int) ;
 struct edgeport_port* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_7,
     unsigned int VAR_8, unsigned int VAR_9)
{
 struct usb_serial_port *VAR_10 = VAR_7->driver_data;
 struct edgeport_port *VAR_11 = FUNC_1(VAR_10);
 unsigned int VAR_12;

 VAR_12 = VAR_11->shadowMCR;
 if (VAR_8 & VAR_6)
  VAR_12 |= VAR_3;
 if (VAR_8 & VAR_4)
  VAR_12 |= VAR_1;
 if (VAR_8 & VAR_5)
  VAR_12 |= VAR_2;

 if (VAR_9 & VAR_6)
  VAR_12 &= ~VAR_3;
 if (VAR_9 & VAR_4)
  VAR_12 &= ~VAR_1;
 if (VAR_9 & VAR_5)
  VAR_12 &= ~VAR_2;

 VAR_11->shadowMCR = VAR_12;

 FUNC_0(VAR_11, VAR_0, VAR_11->shadowMCR);

 return 0;
}
