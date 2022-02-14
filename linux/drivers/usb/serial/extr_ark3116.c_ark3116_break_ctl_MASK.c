
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int serial; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct ark3116_private {int hw_lock; int lcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ark3116_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2, int VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_2->driver_data;
 struct ark3116_private *VAR_5 = FUNC_3(VAR_4);


 FUNC_1(&VAR_5->hw_lock);

 if (VAR_3)
  VAR_5->lcr |= VAR_1;
 else
  VAR_5->lcr &= ~VAR_1;

 FUNC_0(VAR_4->serial, VAR_0, VAR_5->lcr);

 FUNC_2(&VAR_5->hw_lock);
}
