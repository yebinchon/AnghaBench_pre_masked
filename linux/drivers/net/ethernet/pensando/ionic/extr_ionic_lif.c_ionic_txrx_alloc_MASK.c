
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct ionic_txq_sg_desc {int dummy; } ;
struct ionic_txq_desc {int dummy; } ;
struct ionic_txq_comp {int dummy; } ;
struct ionic_rxq_desc {int dummy; } ;
struct ionic_rxq_comp {int dummy; } ;
struct ionic_lif {unsigned int nxqs; TYPE_4__* txqcqs; TYPE_3__* rxqcqs; TYPE_8__* ionic; int kern_pid; int nrxq_descs; int rx_coalesce_usecs; int ntxq_descs; } ;
struct TYPE_9__ {int intr_ctrl; } ;
struct TYPE_14__ {TYPE_1__ idev; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_13__ {TYPE_2__ intr; int stats; } ;
struct TYPE_12__ {TYPE_5__* qcq; int stats; } ;
struct TYPE_11__ {TYPE_5__* qcq; int stats; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_3 (struct ionic_lif*,int ,unsigned int,char*,unsigned int,int ,int,int,int,int ,TYPE_5__**) ;
 int FUNC_4 (struct ionic_lif*) ;

__attribute__((used)) static int FUNC_5(struct ionic_lif *VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 0;
 u32 VAR_10;

 VAR_7 = VAR_3 | VAR_2;
 for (VAR_8 = 0; VAR_8 < VAR_6->nxqs; VAR_8++) {
  VAR_9 = FUNC_3(VAR_6, VAR_5, VAR_8, "tx", VAR_7,
          VAR_6->ntxq_descs,
          sizeof(struct ionic_txq_desc),
          sizeof(struct ionic_txq_comp),
          sizeof(struct ionic_txq_sg_desc),
          VAR_6->kern_pid, &VAR_6->txqcqs[VAR_8].qcq);
  if (VAR_9)
   goto err_out;

  VAR_6->txqcqs[VAR_8].qcq->stats = VAR_6->txqcqs[VAR_8].stats;
 }

 VAR_7 = VAR_1 | VAR_0;
 VAR_10 = FUNC_0(VAR_6->ionic, VAR_6->rx_coalesce_usecs);
 for (VAR_8 = 0; VAR_8 < VAR_6->nxqs; VAR_8++) {
  VAR_9 = FUNC_3(VAR_6, VAR_4, VAR_8, "rx", VAR_7,
          VAR_6->nrxq_descs,
          sizeof(struct ionic_rxq_desc),
          sizeof(struct ionic_rxq_comp),
          0, VAR_6->kern_pid, &VAR_6->rxqcqs[VAR_8].qcq);
  if (VAR_9)
   goto err_out;

  VAR_6->rxqcqs[VAR_8].qcq->stats = VAR_6->rxqcqs[VAR_8].stats;

  FUNC_1(VAR_6->ionic->idev.intr_ctrl,
         VAR_6->rxqcqs[VAR_8].qcq->intr.index, VAR_10);
  FUNC_2(VAR_6->rxqcqs[VAR_8].qcq,
       VAR_6->txqcqs[VAR_8].qcq);
 }

 return 0;

err_out:
 FUNC_4(VAR_6);

 return VAR_9;
}
