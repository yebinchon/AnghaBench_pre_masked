
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stats {scalar_t__ xchars; } ;
struct seq_file {int dummy; } ;
struct TYPE_8__ {int brk; int parity; int overrun; int frame; int dcd; int rng; int dsr; int cts; int rx; scalar_t__ tx; } ;
struct TYPE_7__ {int offset; } ;
struct TYPE_5__ {scalar_t__ console; } ;
struct fwtty_port {TYPE_4__ icount; TYPE_3__ rx_handler; int con_data; TYPE_2__* fwcon_ops; TYPE_1__ port; int stats; } ;
typedef int stats ;
struct TYPE_6__ {int (* stats ) (struct stats*,int ) ;} ;


 int FUNC_0 (struct stats*,int *,int) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ,...) ;
 int FUNC_2 (struct stats*,int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, struct fwtty_port *VAR_1)
{
 struct stats VAR_2;

 FUNC_0(&VAR_2, &VAR_1->stats, sizeof(VAR_2));
 if (VAR_1->port.console)
  (*VAR_1->fwcon_ops->stats)(&VAR_2, VAR_1->con_data);

 FUNC_1(VAR_0, " addr:%012llx tx:%d rx:%d", VAR_1->rx_handler.offset,
     VAR_1->icount.tx + VAR_2.xchars, VAR_1->icount.rx);
 FUNC_1(VAR_0, " cts:%d dsr:%d rng:%d dcd:%d", VAR_1->icount.cts,
     VAR_1->icount.dsr, VAR_1->icount.rng, VAR_1->icount.dcd);
 FUNC_1(VAR_0, " fe:%d oe:%d pe:%d brk:%d", VAR_1->icount.frame,
     VAR_1->icount.overrun, VAR_1->icount.parity, VAR_1->icount.brk);
}
