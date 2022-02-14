
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_txq {int n_window; int stuck_timer; TYPE_3__* entries; scalar_t__ first_tb_dma; int * first_tb_bufs; int * tfds; scalar_t__ dma_addr; } ;
struct iwl_trans_pcie {int cmd_queue; int tfd_size; struct iwl_txq** txq; } ;
struct iwl_trans {TYPE_2__* trans_cfg; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int free_buf; int cmd; } ;
struct TYPE_5__ {TYPE_1__* base_params; } ;
struct TYPE_4__ {int max_tfd_queue_size; } ;


 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,int,int *,scalar_t__) ;
 int FUNC_4 (struct iwl_trans*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct iwl_txq*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct iwl_trans *VAR_0, int VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_0(VAR_0);
 struct iwl_txq *VAR_3 = VAR_2->txq[VAR_1];
 struct device *VAR_4 = VAR_0->dev;
 int VAR_5;

 if (FUNC_1(!VAR_3))
  return;

 FUNC_4(VAR_0, VAR_1);


 if (VAR_1 == VAR_2->cmd_queue)
  for (VAR_5 = 0; VAR_5 < VAR_3->n_window; VAR_5++) {
   FUNC_6(VAR_3->entries[VAR_5].cmd);
   FUNC_6(VAR_3->entries[VAR_5].free_buf);
  }


 if (VAR_3->tfds) {
  FUNC_3(VAR_4,
      VAR_2->tfd_size *
      VAR_0->trans_cfg->base_params->max_tfd_queue_size,
      VAR_3->tfds, VAR_3->dma_addr);
  VAR_3->dma_addr = 0;
  VAR_3->tfds = ((void*)0);

  FUNC_3(VAR_4,
      sizeof(*VAR_3->first_tb_bufs) * VAR_3->n_window,
      VAR_3->first_tb_bufs, VAR_3->first_tb_dma);
 }

 FUNC_5(VAR_3->entries);
 VAR_3->entries = ((void*)0);

 FUNC_2(&VAR_3->stuck_timer);


 FUNC_7(VAR_3, 0, sizeof(*VAR_3));
}
