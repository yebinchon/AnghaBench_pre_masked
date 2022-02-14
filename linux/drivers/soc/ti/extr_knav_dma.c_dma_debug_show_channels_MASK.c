
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_6__ {int * fdq; int thresh; int dst_q; int desc_type; int psinfo_present; int einfo_present; } ;
struct TYPE_5__ {int priority; int filt_pswords; int filt_einfo; } ;
struct TYPE_7__ {TYPE_2__ rx; TYPE_1__ tx; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct knav_dma_chan {scalar_t__ direction; TYPE_4__ cfg; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct knav_dma_chan*) ;
 int FUNC_1 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_2,
     struct knav_dma_chan *VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_2, "\t%s %d:\t",
  ((VAR_3->direction == VAR_0) ? "tx chan" : "rx flow"),
  FUNC_0(VAR_3));

 if (VAR_3->direction == VAR_0) {
  FUNC_1(VAR_2, "einfo - %d, pswords - %d, priority - %d\n",
   VAR_3->cfg.u.tx.filt_einfo,
   VAR_3->cfg.u.tx.filt_pswords,
   VAR_3->cfg.u.tx.priority);
 } else {
  FUNC_1(VAR_2, "einfo - %d, psinfo - %d, desc_type - %d\n",
   VAR_3->cfg.u.rx.einfo_present,
   VAR_3->cfg.u.rx.psinfo_present,
   VAR_3->cfg.u.rx.desc_type);
  FUNC_1(VAR_2, "\t\t\tdst_q: [%d], thresh: %d fdq: ",
   VAR_3->cfg.u.rx.dst_q,
   VAR_3->cfg.u.rx.thresh);
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
   FUNC_1(VAR_2, "[%d]", VAR_3->cfg.u.rx.fdq[VAR_4]);
  FUNC_1(VAR_2, "\n");
 }
}
