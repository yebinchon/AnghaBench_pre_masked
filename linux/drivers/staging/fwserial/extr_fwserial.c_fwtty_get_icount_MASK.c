
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_struct {struct fwtty_port* driver_data; } ;
struct stats {scalar_t__ xchars; } ;
struct serial_icounter_struct {int buf_overrun; int brk; int parity; int overrun; int frame; scalar_t__ tx; int rx; int dcd; int rng; int dsr; int cts; } ;
struct TYPE_6__ {int overrun; int brk; int parity; int frame; scalar_t__ tx; int rx; int dcd; int rng; int dsr; int cts; } ;
struct TYPE_4__ {scalar_t__ console; } ;
struct fwtty_port {TYPE_3__ icount; int con_data; TYPE_2__* fwcon_ops; TYPE_1__ port; int stats; } ;
typedef int stats ;
struct TYPE_5__ {int (* stats ) (struct stats*,int ) ;} ;


 int FUNC_0 (struct stats*,int *,int) ;
 int FUNC_1 (struct stats*,int ) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0,
       struct serial_icounter_struct *VAR_1)
{
 struct fwtty_port *VAR_2 = VAR_0->driver_data;
 struct stats VAR_3;

 FUNC_0(&VAR_3, &VAR_2->stats, sizeof(VAR_3));
 if (VAR_2->port.console)
  (*VAR_2->fwcon_ops->stats)(&VAR_3, VAR_2->con_data);

 VAR_1->cts = VAR_2->icount.cts;
 VAR_1->dsr = VAR_2->icount.dsr;
 VAR_1->rng = VAR_2->icount.rng;
 VAR_1->dcd = VAR_2->icount.dcd;
 VAR_1->rx = VAR_2->icount.rx;
 VAR_1->tx = VAR_2->icount.tx + VAR_3.xchars;
 VAR_1->frame = VAR_2->icount.frame;
 VAR_1->overrun = VAR_2->icount.overrun;
 VAR_1->parity = VAR_2->icount.parity;
 VAR_1->brk = VAR_2->icount.brk;
 VAR_1->buf_overrun = VAR_2->icount.overrun;
 return 0;
}
