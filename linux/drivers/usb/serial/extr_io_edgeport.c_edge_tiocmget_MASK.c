
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct edgeport_port {unsigned int shadowMSR; unsigned int shadowMCR; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 struct edgeport_port* FUNC_0 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_12)
{
 struct usb_serial_port *VAR_13 = VAR_12->driver_data;
 struct edgeport_port *VAR_14 = FUNC_0(VAR_13);
 unsigned int VAR_15 = 0;
 unsigned int VAR_16;
 unsigned int VAR_17;

 VAR_16 = VAR_14->shadowMSR;
 VAR_17 = VAR_14->shadowMCR;
 VAR_15 = ((VAR_17 & VAR_4) ? VAR_9: 0)
    | ((VAR_17 & VAR_5) ? VAR_11: 0)
    | ((VAR_16 & VAR_1) ? VAR_7: 0)
    | ((VAR_16 & VAR_0) ? VAR_6: 0)
    | ((VAR_16 & VAR_3) ? VAR_10: 0)
    | ((VAR_16 & VAR_2) ? VAR_8: 0);

 return VAR_15;
}
