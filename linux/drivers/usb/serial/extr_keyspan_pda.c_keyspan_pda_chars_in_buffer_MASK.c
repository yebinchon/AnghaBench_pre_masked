
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int lock; int write_urbs_free; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct keyspan_pda_private {scalar_t__ tx_throttled; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int *) ;
 struct keyspan_pda_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->driver_data;
 struct keyspan_pda_private *VAR_2;
 unsigned long VAR_3;
 int VAR_4 = 0;

 VAR_2 = FUNC_3(VAR_1);




 FUNC_0(&VAR_1->lock, VAR_3);
 if (!FUNC_2(0, &VAR_1->write_urbs_free) || VAR_2->tx_throttled)
  VAR_4 = 256;
 FUNC_1(&VAR_1->lock, VAR_3);
 return VAR_4;
}
