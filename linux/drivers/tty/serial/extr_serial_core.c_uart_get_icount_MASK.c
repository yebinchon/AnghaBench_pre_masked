
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_state {int dummy; } ;
struct uart_port {int lock; int icount; } ;
struct uart_icount {int buf_overrun; int brk; int parity; int overrun; int frame; int tx; int rx; int dcd; int rng; int dsr; int cts; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct serial_icounter_struct {int buf_overrun; int brk; int parity; int overrun; int frame; int tx; int rx; int dcd; int rng; int dsr; int cts; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_icount*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uart_port*) ;
 struct uart_port* FUNC_4 (struct uart_state*) ;

__attribute__((used)) static int FUNC_5(struct tty_struct *VAR_1,
     struct serial_icounter_struct *VAR_2)
{
 struct uart_state *VAR_3 = VAR_1->driver_data;
 struct uart_icount VAR_4;
 struct uart_port *VAR_5;

 VAR_5 = FUNC_4(VAR_3);
 if (!VAR_5)
  return -VAR_0;
 FUNC_1(&VAR_5->lock);
 FUNC_0(&VAR_4, &VAR_5->icount, sizeof(struct uart_icount));
 FUNC_2(&VAR_5->lock);
 FUNC_3(VAR_5);

 VAR_2->cts = VAR_4.cts;
 VAR_2->dsr = VAR_4.dsr;
 VAR_2->rng = VAR_4.rng;
 VAR_2->dcd = VAR_4.dcd;
 VAR_2->rx = VAR_4.rx;
 VAR_2->tx = VAR_4.tx;
 VAR_2->frame = VAR_4.frame;
 VAR_2->overrun = VAR_4.overrun;
 VAR_2->parity = VAR_4.parity;
 VAR_2->brk = VAR_4.brk;
 VAR_2->buf_overrun = VAR_4.buf_overrun;

 return 0;
}
