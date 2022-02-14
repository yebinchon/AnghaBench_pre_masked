
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; struct mxser_port* driver_data; } ;
struct tty_port {int mutex; int closing_wait; int close_delay; int flags; } ;
struct serial_struct {int custom_divisor; int closing_wait; int close_delay; int baud_base; int flags; int irq; int port; int line; int type; } ;
struct mxser_port {int custom_divisor; struct tty_port port; int baud_base; TYPE_1__* board; int ioaddr; int type; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2,
  struct serial_struct *VAR_3)
{
 struct mxser_port *VAR_4 = VAR_2->driver_data;
 struct tty_port *VAR_5 = &VAR_4->port;

 if (VAR_2->index == VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_5->mutex);
 VAR_3->type = VAR_4->type,
 VAR_3->line = VAR_2->index,
 VAR_3->port = VAR_4->ioaddr,
 VAR_3->irq = VAR_4->board->irq,
 VAR_3->flags = VAR_4->port.flags,
 VAR_3->baud_base = VAR_4->baud_base,
 VAR_3->close_delay = VAR_4->port.close_delay,
 VAR_3->closing_wait = VAR_4->port.closing_wait,
 VAR_3->custom_divisor = VAR_4->custom_divisor,
 FUNC_1(&VAR_5->mutex);
 return 0;
}
