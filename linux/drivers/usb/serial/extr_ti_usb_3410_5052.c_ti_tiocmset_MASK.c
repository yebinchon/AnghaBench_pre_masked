
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct ti_port {unsigned int tp_shadow_mcr; int tp_lock; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ti_port*,unsigned int) ;
 struct ti_port* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_6,
    unsigned int VAR_7, unsigned int VAR_8)
{
 struct usb_serial_port *VAR_9 = VAR_6->driver_data;
 struct ti_port *VAR_10 = FUNC_3(VAR_9);
 unsigned int VAR_11;
 unsigned long VAR_12;

 FUNC_0(&VAR_10->tp_lock, VAR_12);
 VAR_11 = VAR_10->tp_shadow_mcr;

 if (VAR_7 & VAR_2)
  VAR_11 |= VAR_5;
 if (VAR_7 & VAR_0)
  VAR_11 |= VAR_3;
 if (VAR_7 & VAR_1)
  VAR_11 |= VAR_4;

 if (VAR_8 & VAR_2)
  VAR_11 &= ~VAR_5;
 if (VAR_8 & VAR_0)
  VAR_11 &= ~VAR_3;
 if (VAR_8 & VAR_1)
  VAR_11 &= ~VAR_4;
 FUNC_1(&VAR_10->tp_lock, VAR_12);

 return FUNC_2(VAR_10, VAR_11);
}
