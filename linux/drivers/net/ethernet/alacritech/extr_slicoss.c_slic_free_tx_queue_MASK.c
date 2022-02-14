
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slic_tx_queue {unsigned int len; struct slic_tx_buffer* txbuffs; int dma_pool; } ;
struct slic_tx_buffer {int skb; int desc_paddr; int desc; } ;
struct slic_device {TYPE_1__* pdev; struct slic_tx_queue txq; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct slic_tx_buffer*,int ) ;
 int FUNC_4 (struct slic_tx_buffer*,int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (struct slic_tx_buffer*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct slic_device *VAR_3)
{
 struct slic_tx_queue *VAR_4 = &VAR_3->txq;
 struct slic_tx_buffer *VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4->len; VAR_6++) {
  VAR_5 = &VAR_4->txbuffs[VAR_6];
  FUNC_2(VAR_4->dma_pool, VAR_5->desc, VAR_5->desc_paddr);
  if (!VAR_5->skb)
   continue;

  FUNC_5(&VAR_3->pdev->dev,
     FUNC_3(VAR_5, VAR_1),
     FUNC_4(VAR_5, VAR_2), VAR_0);
  FUNC_0(VAR_5->skb);
 }
 FUNC_1(VAR_4->dma_pool);

 FUNC_6(VAR_4->txbuffs);
}
