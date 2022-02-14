
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rb_allocator {int lock; } ;
struct iwl_trans_pcie {struct iwl_rxq* rxq; scalar_t__ base_rb_stts_dma; int * base_rb_stts; struct iwl_rb_allocator rba; } ;
struct iwl_trans {size_t num_rx_queues; int dev; TYPE_1__* trans_cfg; } ;
struct iwl_rxq {int id; } ;
struct iwl_rb_status {int dummy; } ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ device_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct iwl_trans_pcie* FUNC_0 (struct iwl_trans*) ;
 scalar_t__ FUNC_1 (struct iwl_rxq*) ;
 int * FUNC_2 (int ,size_t,scalar_t__*,int ) ;
 int FUNC_3 (int ,size_t,int *,scalar_t__) ;
 int FUNC_4 (struct iwl_trans*,struct iwl_rxq*) ;
 struct iwl_rxq* FUNC_5 (size_t,int,int ) ;
 int FUNC_6 (struct iwl_rxq*) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct iwl_trans *VAR_4)
{
 struct iwl_trans_pcie *VAR_5 = FUNC_0(VAR_4);
 struct iwl_rb_allocator *VAR_6 = &VAR_5->rba;
 int VAR_7, VAR_8;
 size_t VAR_9 = VAR_4->trans_cfg->device_family >=
         VAR_3 ?
         sizeof(__le16) : sizeof(struct iwl_rb_status);

 if (FUNC_1(VAR_5->rxq))
  return -VAR_0;

 VAR_5->rxq = FUNC_5(VAR_4->num_rx_queues, sizeof(struct iwl_rxq),
      VAR_2);
 if (!VAR_5->rxq)
  return -VAR_1;

 FUNC_7(&VAR_6->lock);





 VAR_5->base_rb_stts =
   FUNC_2(VAR_4->dev,
        VAR_9 * VAR_4->num_rx_queues,
        &VAR_5->base_rb_stts_dma,
        VAR_2);
 if (!VAR_5->base_rb_stts) {
  VAR_8 = -VAR_1;
  goto err;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->num_rx_queues; VAR_7++) {
  struct iwl_rxq *VAR_10 = &VAR_5->rxq[VAR_7];

  VAR_10->id = VAR_7;
  VAR_8 = FUNC_4(VAR_4, VAR_10);
  if (VAR_8)
   goto err;
 }
 return 0;

err:
 if (VAR_5->base_rb_stts) {
  FUNC_3(VAR_4->dev,
      VAR_9 * VAR_4->num_rx_queues,
      VAR_5->base_rb_stts,
      VAR_5->base_rb_stts_dma);
  VAR_5->base_rb_stts = ((void*)0);
  VAR_5->base_rb_stts_dma = 0;
 }
 FUNC_6(VAR_5->rxq);

 return VAR_8;
}
