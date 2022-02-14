
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; struct serial_state* driver_data; } ;
struct serial_struct {int custom_divisor; int closing_wait; int close_delay; int baud_base; int xmit_fifo_size; int flags; int port; int line; } ;
struct TYPE_2__ {int closing_wait; int close_delay; int flags; } ;
struct serial_state {int custom_divisor; TYPE_1__ tport; int baud_base; int xmit_fifo_size; int port; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0, struct serial_struct *VAR_1)
{
 struct serial_state *VAR_2 = VAR_0->driver_data;

 FUNC_0(VAR_0);
 VAR_1->line = VAR_0->index;
 VAR_1->port = VAR_2->port;
 VAR_1->flags = VAR_2->tport.flags;
 VAR_1->xmit_fifo_size = VAR_2->xmit_fifo_size;
 VAR_1->baud_base = VAR_2->baud_base;
 VAR_1->close_delay = VAR_2->tport.close_delay;
 VAR_1->closing_wait = VAR_2->tport.closing_wait;
 VAR_1->custom_divisor = VAR_2->custom_divisor;
 FUNC_1(VAR_0);
 return 0;
}
