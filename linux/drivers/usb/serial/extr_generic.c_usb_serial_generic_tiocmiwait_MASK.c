
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delta_msr_wait; } ;
struct async_icount {int dummy; } ;
struct usb_serial_port {TYPE_1__ port; int lock; struct async_icount icount; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct tty_struct*,unsigned long,struct async_icount*) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct tty_struct *VAR_1, unsigned long VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_1->driver_data;
 struct async_icount VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_0(&VAR_3->lock, VAR_5);
 VAR_4 = VAR_3->icount;
 FUNC_1(&VAR_3->lock, VAR_5);

 VAR_6 = FUNC_4(VAR_3->port.delta_msr_wait,
   FUNC_3(VAR_1, VAR_2, &VAR_4));
 if (!VAR_6 && !FUNC_2(&VAR_3->port))
  VAR_6 = -VAR_0;

 return VAR_6;
}
