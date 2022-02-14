
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stats {int throttled; int sent; int lost; int fifo_errs; int tx_stall; int dropped; } ;
struct seq_file {int dummy; } ;
struct TYPE_3__ {scalar_t__ console; } ;
struct fwtty_port {int stats; int con_data; TYPE_2__* fwcon_ops; TYPE_1__ port; } ;
typedef int stats ;
struct TYPE_4__ {int (* proc_show ) (struct seq_file*,int ) ;int (* stats ) (struct stats*,int ) ;} ;


 int FUNC_0 (struct seq_file*,int *) ;
 int FUNC_1 (struct stats*,int *,int) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,...) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (struct stats*,int ) ;
 int FUNC_5 (struct seq_file*,int ) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_0, struct fwtty_port *VAR_1)
{
 struct stats VAR_2;

 FUNC_1(&VAR_2, &VAR_1->stats, sizeof(VAR_2));
 if (VAR_1->port.console)
  (*VAR_1->fwcon_ops->stats)(&VAR_2, VAR_1->con_data);

 FUNC_2(VAR_0, " dr:%d st:%d err:%d lost:%d", VAR_2.dropped,
     VAR_2.tx_stall, VAR_2.fifo_errs, VAR_2.lost);
 FUNC_2(VAR_0, " pkts:%d thr:%d", VAR_2.sent, VAR_2.throttled);

 if (VAR_1->port.console) {
  FUNC_3(VAR_0, "\n    ");
  (*VAR_1->fwcon_ops->proc_show)(VAR_0, VAR_1->con_data);
 }

 FUNC_0(VAR_0, &VAR_1->stats);
}
