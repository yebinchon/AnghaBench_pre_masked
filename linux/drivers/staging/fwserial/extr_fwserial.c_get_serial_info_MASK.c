
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {struct fwtty_port* driver_data; } ;
struct serial_struct {int baud_base; int close_delay; int xmit_fifo_size; int flags; int line; int type; } ;
struct TYPE_4__ {int mutex; int close_delay; int flags; TYPE_1__* tty; } ;
struct fwtty_port {TYPE_2__ port; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2,
      struct serial_struct *VAR_3)
{
 struct fwtty_port *VAR_4 = VAR_2->driver_data;

 FUNC_0(&VAR_4->port.mutex);
 VAR_3->type = VAR_1;
 VAR_3->line = VAR_4->port.tty->index;
 VAR_3->flags = VAR_4->port.flags;
 VAR_3->xmit_fifo_size = VAR_0;
 VAR_3->baud_base = 400000000;
 VAR_3->close_delay = VAR_4->port.close_delay;
 FUNC_1(&VAR_4->port.mutex);
 return 0;
}
