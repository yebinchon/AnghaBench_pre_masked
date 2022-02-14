
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct slic_tx_queue {unsigned int len; struct slic_tx_buffer* txbuffs; int dma_pool; scalar_t__ done_idx; scalar_t__ put_idx; } ;
struct slic_tx_desc {void* type; scalar_t__ flags; int cmd; void* hnd; } ;
struct slic_tx_buffer {int desc_paddr; struct slic_tx_desc* desc; } ;
struct slic_device {int netdev; TYPE_1__* pdev; struct slic_tx_queue txq; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*,int *,int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct slic_tx_desc*,int ) ;
 struct slic_tx_desc* FUNC_4 (int ,int ,int *) ;
 struct slic_tx_buffer* FUNC_5 (unsigned int,int,int ) ;
 int FUNC_6 (struct slic_tx_buffer*) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct slic_device *VAR_6)
{
 struct slic_tx_queue *VAR_7 = &VAR_6->txq;
 struct slic_tx_buffer *VAR_8;
 struct slic_tx_desc *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_7->len = VAR_4;
 VAR_7->put_idx = 0;
 VAR_7->done_idx = 0;

 VAR_7->txbuffs = FUNC_5(VAR_7->len, sizeof(*VAR_8), VAR_1);
 if (!VAR_7->txbuffs)
  return -VAR_0;

 VAR_7->dma_pool = FUNC_1("slic_pool", &VAR_6->pdev->dev,
     sizeof(*VAR_9), VAR_5,
     4096);
 if (!VAR_7->dma_pool) {
  VAR_11 = -VAR_0;
  FUNC_7(VAR_6->netdev, "failed to create dma pool\n");
  goto free_buffs;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->len; VAR_10++) {
  VAR_8 = &VAR_7->txbuffs[VAR_10];
  VAR_9 = FUNC_4(VAR_7->dma_pool, VAR_1,
           &VAR_8->desc_paddr);
  if (!VAR_9) {
   FUNC_7(VAR_6->netdev,
       "failed to alloc pool chunk (%i)\n", VAR_10);
   VAR_11 = -VAR_0;
   goto free_descs;
  }

  VAR_9->hnd = FUNC_0((u32)(VAR_10 + 1));
  VAR_9->cmd = VAR_3;
  VAR_9->flags = 0;
  VAR_9->type = FUNC_0(VAR_2);
  VAR_8->desc = VAR_9;
 }

 return 0;

free_descs:
 while (VAR_10--) {
  VAR_8 = &VAR_7->txbuffs[VAR_10];
  FUNC_3(VAR_7->dma_pool, VAR_8->desc, VAR_8->desc_paddr);
 }
 FUNC_2(VAR_7->dma_pool);

free_buffs:
 FUNC_6(VAR_7->txbuffs);

 return VAR_11;
}
