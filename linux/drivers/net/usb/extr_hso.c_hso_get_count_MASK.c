
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_icount {int buf_overrun; int brk; int parity; int overrun; int frame; int tx; int rx; int dcd; int rng; int dsr; int cts; } ;
struct tty_struct {struct hso_serial* driver_data; } ;
struct serial_icounter_struct {int buf_overrun; int brk; int parity; int overrun; int frame; int tx; int rx; int dcd; int rng; int dsr; int cts; } ;
struct hso_tiocmget {int icount; } ;
struct hso_serial {int serial_lock; struct hso_tiocmget* tiocmget; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_icount*,int *,int) ;
 int FUNC_1 (struct serial_icounter_struct*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_1,
    struct serial_icounter_struct *VAR_2)
{
 struct uart_icount VAR_3;
 struct hso_serial *VAR_4 = VAR_1->driver_data;
 struct hso_tiocmget *VAR_5 = VAR_4->tiocmget;

 FUNC_1(VAR_2, 0, sizeof(struct serial_icounter_struct));

 if (!VAR_5)
   return -VAR_0;
 FUNC_2(&VAR_4->serial_lock);
 FUNC_0(&VAR_3, &VAR_5->icount, sizeof(struct uart_icount));
 FUNC_3(&VAR_4->serial_lock);

 VAR_2->cts = VAR_3.cts;
 VAR_2->dsr = VAR_3.dsr;
 VAR_2->rng = VAR_3.rng;
 VAR_2->dcd = VAR_3.dcd;
 VAR_2->rx = VAR_3.rx;
 VAR_2->tx = VAR_3.tx;
 VAR_2->frame = VAR_3.frame;
 VAR_2->overrun = VAR_3.overrun;
 VAR_2->parity = VAR_3.parity;
 VAR_2->brk = VAR_3.brk;
 VAR_2->buf_overrun = VAR_3.buf_overrun;

 return 0;
}
