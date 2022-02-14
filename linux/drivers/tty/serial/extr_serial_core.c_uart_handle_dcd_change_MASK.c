
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dcd; } ;
struct uart_port {TYPE_2__ icount; int lock; TYPE_3__* state; } ;
struct tty_struct {int dummy; } ;
struct tty_port {int open_wait; struct tty_struct* tty; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct TYPE_6__ {struct tty_port port; } ;
struct TYPE_4__ {int (* dcd_change ) (struct tty_struct*,unsigned int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct tty_struct*,unsigned int) ;
 int FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct uart_port *VAR_0, unsigned int VAR_1)
{
 struct tty_port *VAR_2 = &VAR_0->state->port;
 struct tty_struct *VAR_3 = VAR_2->tty;
 struct tty_ldisc *VAR_4;

 FUNC_0(&VAR_0->lock);

 if (VAR_3) {
  VAR_4 = FUNC_4(VAR_3);
  if (VAR_4) {
   if (VAR_4->ops->dcd_change)
    VAR_4->ops->dcd_change(VAR_3, VAR_1);
   FUNC_3(VAR_4);
  }
 }

 VAR_0->icount.dcd++;

 if (FUNC_5(VAR_0)) {
  if (VAR_1)
   FUNC_6(&VAR_2->open_wait);
  else if (VAR_3)
   FUNC_2(VAR_3);
 }
}
