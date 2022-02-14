
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ionic_notifyq_comp {int dummy; } ionic_notifyq_comp ;
struct ionic_q_stats {int dummy; } ;
struct ionic_notifyq_cmd {int dummy; } ;
struct ionic_lif {int nxqs; int * adminqcq; int * notifyqcq; TYPE_2__* txqcqs; TYPE_2__* rxqcqs; int kern_pid; TYPE_1__* ionic; } ;
struct ionic_admin_comp {int dummy; } ;
struct ionic_admin_cmd {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* stats; } ;
struct TYPE_3__ {scalar_t__ nnqs_per_lif; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device*,TYPE_2__*) ;
 void* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ionic_lif*,int ,int ,char*,unsigned int,int ,int,int,int ,int ,int **) ;
 int FUNC_4 (struct ionic_lif*,int *) ;

__attribute__((used)) static int FUNC_5(struct ionic_lif *VAR_8)
{
 struct device *VAR_9 = VAR_8->ionic->dev;
 unsigned int VAR_10;
 unsigned int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_11 = VAR_4;
 VAR_12 = FUNC_3(VAR_8, VAR_6, 0, "admin", VAR_11,
         VAR_2,
         sizeof(struct ionic_admin_cmd),
         sizeof(struct ionic_admin_comp),
         0, VAR_8->kern_pid, &VAR_8->adminqcq);
 if (VAR_12)
  return VAR_12;

 if (VAR_8->ionic->nnqs_per_lif) {
  VAR_11 = VAR_5;
  VAR_12 = FUNC_3(VAR_8, VAR_7, 0, "notifyq",
          VAR_11, VAR_3,
          sizeof(struct ionic_notifyq_cmd),
          sizeof(union ionic_notifyq_comp),
          0, VAR_8->kern_pid, &VAR_8->notifyqcq);
  if (VAR_12)
   goto err_out_free_adminqcq;


  FUNC_2(VAR_8->adminqcq, VAR_8->notifyqcq);
 }

 VAR_10 = sizeof(*VAR_8->txqcqs) * VAR_8->nxqs;
 VAR_12 = -VAR_0;
 VAR_8->txqcqs = FUNC_1(VAR_9, VAR_10, VAR_1);
 if (!VAR_8->txqcqs)
  goto err_out_free_notifyqcq;
 for (VAR_13 = 0; VAR_13 < VAR_8->nxqs; VAR_13++) {
  VAR_8->txqcqs[VAR_13].stats = FUNC_1(VAR_9,
          sizeof(struct ionic_q_stats),
          VAR_1);
  if (!VAR_8->txqcqs[VAR_13].stats)
   goto err_out_free_tx_stats;
 }

 VAR_8->rxqcqs = FUNC_1(VAR_9, VAR_10, VAR_1);
 if (!VAR_8->rxqcqs)
  goto err_out_free_tx_stats;
 for (VAR_13 = 0; VAR_13 < VAR_8->nxqs; VAR_13++) {
  VAR_8->rxqcqs[VAR_13].stats = FUNC_1(VAR_9,
          sizeof(struct ionic_q_stats),
          VAR_1);
  if (!VAR_8->rxqcqs[VAR_13].stats)
   goto err_out_free_rx_stats;
 }

 return 0;

err_out_free_rx_stats:
 for (VAR_13 = 0; VAR_13 < VAR_8->nxqs; VAR_13++)
  if (VAR_8->rxqcqs[VAR_13].stats)
   FUNC_0(VAR_9, VAR_8->rxqcqs[VAR_13].stats);
 FUNC_0(VAR_9, VAR_8->rxqcqs);
 VAR_8->rxqcqs = ((void*)0);
err_out_free_tx_stats:
 for (VAR_13 = 0; VAR_13 < VAR_8->nxqs; VAR_13++)
  if (VAR_8->txqcqs[VAR_13].stats)
   FUNC_0(VAR_9, VAR_8->txqcqs[VAR_13].stats);
 FUNC_0(VAR_9, VAR_8->txqcqs);
 VAR_8->txqcqs = ((void*)0);
err_out_free_notifyqcq:
 if (VAR_8->notifyqcq) {
  FUNC_4(VAR_8, VAR_8->notifyqcq);
  VAR_8->notifyqcq = ((void*)0);
 }
err_out_free_adminqcq:
 FUNC_4(VAR_8, VAR_8->adminqcq);
 VAR_8->adminqcq = ((void*)0);

 return VAR_12;
}
