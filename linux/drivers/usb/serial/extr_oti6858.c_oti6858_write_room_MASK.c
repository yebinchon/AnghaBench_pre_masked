
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int lock; int write_fifo; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->driver_data;
 int VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_2 = FUNC_0(&VAR_1->write_fifo);
 FUNC_2(&VAR_1->lock, VAR_3);

 return VAR_2;
}
