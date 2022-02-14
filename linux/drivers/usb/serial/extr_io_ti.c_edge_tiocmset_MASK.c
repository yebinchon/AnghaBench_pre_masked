
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct edgeport_port {unsigned int shadow_mcr; int ep_lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct edgeport_port*,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct edgeport_port* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_6,
     unsigned int VAR_7, unsigned int VAR_8)
{
 struct usb_serial_port *VAR_9 = VAR_6->driver_data;
 struct edgeport_port *VAR_10 = FUNC_3(VAR_9);
 unsigned int VAR_11;
 unsigned long VAR_12;

 FUNC_1(&VAR_10->ep_lock, VAR_12);
 VAR_11 = VAR_10->shadow_mcr;
 if (VAR_7 & VAR_5)
  VAR_11 |= VAR_2;
 if (VAR_7 & VAR_3)
  VAR_11 |= VAR_0;
 if (VAR_7 & VAR_4)
  VAR_11 |= VAR_1;

 if (VAR_8 & VAR_5)
  VAR_11 &= ~VAR_2;
 if (VAR_8 & VAR_3)
  VAR_11 &= ~VAR_0;
 if (VAR_8 & VAR_4)
  VAR_11 &= ~VAR_1;

 VAR_10->shadow_mcr = VAR_11;
 FUNC_2(&VAR_10->ep_lock, VAR_12);

 FUNC_0(VAR_10, VAR_11);
 return 0;
}
