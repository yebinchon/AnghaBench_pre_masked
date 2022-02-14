
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int serial; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct ark3116_private {int hw_lock; int mcr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ark3116_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_9,
   unsigned VAR_10, unsigned VAR_11)
{
 struct usb_serial_port *VAR_12 = VAR_9->driver_data;
 struct ark3116_private *VAR_13 = FUNC_3(VAR_12);





 FUNC_1(&VAR_13->hw_lock);

 if (VAR_10 & VAR_3)
  VAR_13->mcr |= VAR_8;
 if (VAR_10 & VAR_0)
  VAR_13->mcr |= VAR_5;
 if (VAR_10 & VAR_1)
  VAR_13->mcr |= VAR_6;
 if (VAR_10 & VAR_2)
  VAR_13->mcr |= VAR_7;
 if (VAR_11 & VAR_3)
  VAR_13->mcr &= ~VAR_8;
 if (VAR_11 & VAR_0)
  VAR_13->mcr &= ~VAR_5;
 if (VAR_11 & VAR_1)
  VAR_13->mcr &= ~VAR_6;
 if (VAR_11 & VAR_2)
  VAR_13->mcr &= ~VAR_7;

 FUNC_0(VAR_12->serial, VAR_4, VAR_13->mcr);

 FUNC_2(&VAR_13->hw_lock);

 return 0;
}
