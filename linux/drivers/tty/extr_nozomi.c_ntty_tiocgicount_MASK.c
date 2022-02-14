
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct port* driver_data; } ;
struct serial_icounter_struct {int buf_overrun; int brk; int parity; int overrun; int frame; int tx; int rx; int dcd; int rng; int dsr; int cts; } ;
struct async_icount {int buf_overrun; int brk; int parity; int overrun; int frame; int tx; int rx; int dcd; int rng; int dsr; int cts; } ;
struct port {struct async_icount tty_icount; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0,
    struct serial_icounter_struct *VAR_1)
{
 struct port *VAR_2 = VAR_0->driver_data;
 const struct async_icount VAR_3 = VAR_2->tty_icount;

 VAR_1->cts = VAR_3.cts;
 VAR_1->dsr = VAR_3.dsr;
 VAR_1->rng = VAR_3.rng;
 VAR_1->dcd = VAR_3.dcd;
 VAR_1->rx = VAR_3.rx;
 VAR_1->tx = VAR_3.tx;
 VAR_1->frame = VAR_3.frame;
 VAR_1->overrun = VAR_3.overrun;
 VAR_1->parity = VAR_3.parity;
 VAR_1->brk = VAR_3.brk;
 VAR_1->buf_overrun = VAR_3.buf_overrun;
 return 0;
}
