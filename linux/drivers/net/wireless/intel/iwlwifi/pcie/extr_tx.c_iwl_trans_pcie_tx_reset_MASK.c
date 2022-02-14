
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_txq {int dma_addr; scalar_t__ write_ptr; scalar_t__ read_ptr; } ;
struct TYPE_6__ {int dma; } ;
struct iwl_trans_pcie {TYPE_3__ kw; struct iwl_txq** txq; } ;
struct iwl_trans {TYPE_2__* trans_cfg; } ;
struct TYPE_5__ {scalar_t__ use_tfh; TYPE_1__* base_params; int gen2; } ;
struct TYPE_4__ {int num_of_queues; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_trans*,int) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_trans*,int ) ;
 int FUNC_4 (struct iwl_trans*,int) ;
 int FUNC_5 (struct iwl_trans*,int ,int) ;
 int FUNC_6 (struct iwl_trans*,int ,int) ;

void FUNC_7(struct iwl_trans *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;





 if (FUNC_2(VAR_1->trans_cfg->gen2))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_1->trans_cfg->base_params->num_of_queues;
      VAR_3++) {
  struct iwl_txq *VAR_4 = VAR_2->txq[VAR_3];
  if (VAR_1->trans_cfg->use_tfh)
   FUNC_6(VAR_1,
        FUNC_0(VAR_1, VAR_3),
        VAR_4->dma_addr);
  else
   FUNC_5(VAR_1,
        FUNC_0(VAR_1, VAR_3),
        VAR_4->dma_addr >> 8);
  FUNC_4(VAR_1, VAR_3);
  VAR_4->read_ptr = 0;
  VAR_4->write_ptr = 0;
 }


 FUNC_5(VAR_1, VAR_0,
      VAR_2->kw.dma >> 4);






 FUNC_3(VAR_1, 0);
}
