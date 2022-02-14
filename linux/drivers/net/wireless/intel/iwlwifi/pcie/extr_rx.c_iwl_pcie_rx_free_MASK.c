
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_rb_allocator {int rx_alloc; } ;
struct iwl_trans_pcie {struct iwl_rxq* rxq; scalar_t__ base_rb_stts_dma; int * base_rb_stts; struct iwl_rb_allocator rba; } ;
struct iwl_trans {size_t num_rx_queues; int dev; TYPE_1__* trans_cfg; } ;
struct TYPE_4__ {scalar_t__ poll; } ;
struct iwl_rxq {TYPE_2__ napi; } ;
struct iwl_rb_status {int dummy; } ;
typedef int __le16 ;
struct TYPE_3__ {scalar_t__ device_family; } ;


 int FUNC_0 (struct iwl_trans*,char*) ;
 scalar_t__ VAR_0 ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,size_t,int *,scalar_t__) ;
 int FUNC_4 (struct iwl_trans*) ;
 int FUNC_5 (struct iwl_trans*,struct iwl_rxq*) ;
 int FUNC_6 (struct iwl_rxq*) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(struct iwl_trans *VAR_1)
{
 struct iwl_trans_pcie *VAR_2 = FUNC_1(VAR_1);
 struct iwl_rb_allocator *VAR_3 = &VAR_2->rba;
 int VAR_4;
 size_t VAR_5 = VAR_1->trans_cfg->device_family >=
         VAR_0 ?
         sizeof(__le16) : sizeof(struct iwl_rb_status);





 if (!VAR_2->rxq) {
  FUNC_0(VAR_1, "Free NULL rx context\n");
  return;
 }

 FUNC_2(&VAR_3->rx_alloc);

 FUNC_4(VAR_1);

 if (VAR_2->base_rb_stts) {
  FUNC_3(VAR_1->dev,
      VAR_5 * VAR_1->num_rx_queues,
      VAR_2->base_rb_stts,
      VAR_2->base_rb_stts_dma);
  VAR_2->base_rb_stts = ((void*)0);
  VAR_2->base_rb_stts_dma = 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_1->num_rx_queues; VAR_4++) {
  struct iwl_rxq *VAR_6 = &VAR_2->rxq[VAR_4];

  FUNC_5(VAR_1, VAR_6);

  if (VAR_6->napi.poll)
   FUNC_7(&VAR_6->napi);
 }
 FUNC_6(VAR_2->rxq);
}
