
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dma; } ;
struct iwl_trans_pcie {int cmd_queue; TYPE_5__** txq; int irq_lock; TYPE_1__ kw; int txq_memory; } ;
struct iwl_trans {TYPE_4__* trans_cfg; TYPE_2__* cfg; } ;
struct TYPE_10__ {int dma_addr; } ;
struct TYPE_9__ {TYPE_3__* base_params; } ;
struct TYPE_8__ {int num_of_queues; } ;
struct TYPE_7__ {int min_256_ba_txq_size; int min_txq_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_trans*,char*,int) ;
 struct iwl_trans_pcie* FUNC_2 (struct iwl_trans*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct iwl_trans*) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,TYPE_5__*,int,int) ;
 int FUNC_6 (struct iwl_trans*) ;
 int FUNC_7 (struct iwl_trans*,int ,int ) ;
 int FUNC_8 (struct iwl_trans*,int ,int) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_6 ;

int FUNC_12(struct iwl_trans *VAR_7)
{
 struct iwl_trans_pcie *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;
 int VAR_10, VAR_11;
 bool VAR_12 = 0;

 if (!VAR_8->txq_memory) {
  VAR_9 = FUNC_3(VAR_7);
  if (VAR_9)
   goto error;
  VAR_12 = 1;
 }

 FUNC_10(&VAR_8->irq_lock);


 FUNC_6(VAR_7);


 FUNC_8(VAR_7, VAR_0,
      VAR_8->kw.dma >> 4);

 FUNC_11(&VAR_8->irq_lock);


 for (VAR_10 = 0; VAR_10 < VAR_7->trans_cfg->base_params->num_of_queues;
      VAR_10++) {
  bool VAR_13 = (VAR_10 == VAR_8->cmd_queue);

  if (VAR_13)
   VAR_11 = FUNC_9(VAR_6, VAR_1,
       VAR_7->cfg->min_txq_size);
  else
   VAR_11 = FUNC_9(VAR_6, VAR_2,
       VAR_7->cfg->min_256_ba_txq_size);
  VAR_9 = FUNC_5(VAR_7, VAR_8->txq[VAR_10],
     VAR_11, VAR_13);
  if (VAR_9) {
   FUNC_1(VAR_7, "Tx %d queue init failed\n", VAR_10);
   goto error;
  }







  FUNC_8(VAR_7, FUNC_0(VAR_7, VAR_10),
       VAR_8->txq[VAR_10]->dma_addr >> 8);
 }

 FUNC_7(VAR_7, VAR_3, VAR_4);
 if (VAR_7->trans_cfg->base_params->num_of_queues > 20)
  FUNC_7(VAR_7, VAR_3,
      VAR_5);

 return 0;
error:

 if (VAR_12)
  FUNC_4(VAR_7);
 return VAR_9;
}
