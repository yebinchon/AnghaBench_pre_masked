
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int dummy; } ;
struct fwtty_port {int lock; int tx_fifo; scalar_t__ overrun; scalar_t__ break_ctl; scalar_t__ flags; int drain; int emit_breaks; } ;


 int FUNC_0 (struct fwtty_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fwtty_port* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct fwtty_port* FUNC_5 (struct tty_port*,int ) ;

__attribute__((used)) static void FUNC_6(struct tty_port *VAR_1)
{
 struct fwtty_port *VAR_2 = FUNC_5(VAR_1, VAR_2);



 FUNC_1(&VAR_2->emit_breaks);
 FUNC_1(&VAR_2->drain);

 FUNC_3(&VAR_2->lock);
 VAR_2->flags = 0;
 VAR_2->break_ctl = 0;
 VAR_2->overrun = 0;
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->tx_fifo);
 FUNC_4(&VAR_2->lock);
}
