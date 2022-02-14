
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct status_block_msix {int status_rx_quick_consumer_index; int status_tx_quick_consumer_index; int status_rx_quick_consumer_index0; int status_tx_quick_consumer_index0; } ;
struct TYPE_3__ {struct status_block_msix* msix; struct status_block_msix* msi; } ;
struct bnx2_napi {int int_num; int * hw_rx_cons_ptr; int * hw_tx_cons_ptr; TYPE_1__ status_blk; } ;
struct bnx2 {int flags; int irq_nvecs; int ctx_pages; int * ctx_blk; int * ctx_blk_mapping; TYPE_2__* pdev; struct status_block_msix* status_blk; struct bnx2_napi* bnx2_napi; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2*) ;
 int FUNC_2 (struct bnx2*) ;
 int FUNC_3 (struct bnx2*) ;
 int FUNC_4 (int *,int,int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct bnx2 *VAR_6)
{
 int VAR_7, VAR_8;
 struct bnx2_napi *VAR_9;

 VAR_9 = &VAR_6->bnx2_napi[0];
 VAR_9->status_blk.msi = VAR_6->status_blk;
 VAR_9->hw_tx_cons_ptr =
  &VAR_9->status_blk.msi->status_tx_quick_consumer_index0;
 VAR_9->hw_rx_cons_ptr =
  &VAR_9->status_blk.msi->status_rx_quick_consumer_index0;
 if (VAR_6->flags & VAR_1) {
  for (VAR_7 = 1; VAR_7 < VAR_6->irq_nvecs; VAR_7++) {
   struct status_block_msix *VAR_10;

   VAR_9 = &VAR_6->bnx2_napi[VAR_7];

   VAR_10 = (VAR_6->status_blk + VAR_3 * VAR_7);
   VAR_9->status_blk.msix = VAR_10;
   VAR_9->hw_tx_cons_ptr =
    &VAR_10->status_tx_quick_consumer_index;
   VAR_9->hw_rx_cons_ptr =
    &VAR_10->status_rx_quick_consumer_index;
   VAR_9->int_num = VAR_7 << 24;
  }
 }

 if (FUNC_0(VAR_6) == VAR_0) {
  VAR_6->ctx_pages = 0x2000 / VAR_2;
  if (VAR_6->ctx_pages == 0)
   VAR_6->ctx_pages = 1;
  for (VAR_7 = 0; VAR_7 < VAR_6->ctx_pages; VAR_7++) {
   VAR_6->ctx_blk[VAR_7] = FUNC_4(&VAR_6->pdev->dev,
      VAR_2,
      &VAR_6->ctx_blk_mapping[VAR_7],
      VAR_5);
   if (!VAR_6->ctx_blk[VAR_7])
    goto alloc_mem_err;
  }
 }

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8)
  goto alloc_mem_err;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8)
  goto alloc_mem_err;

 return 0;

alloc_mem_err:
 FUNC_3(VAR_6);
 return -VAR_4;
}
