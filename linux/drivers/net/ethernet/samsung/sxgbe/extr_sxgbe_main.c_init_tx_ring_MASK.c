
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sxgbe_tx_queue {int dma_tx_phy; int dma_tx; scalar_t__ cur_tx; scalar_t__ dirty_tx; int queue_no; void* tx_skbuff; void* tx_skbuff_dma; } ;
struct sxgbe_tx_norm_desc {int dummy; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (struct device*,int,int,int ) ;
 int FUNC_2 (struct device*,int,int *,int ) ;
 int FUNC_3 (struct device*,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, u8 VAR_3,
   struct sxgbe_tx_queue *VAR_4, int VAR_5)
{

 if (!VAR_4) {
  FUNC_0(VAR_2, "No memory for TX queue of SXGBE\n");
  return -VAR_0;
 }


 VAR_4->dma_tx = FUNC_2(VAR_2,
          VAR_5 * sizeof(struct sxgbe_tx_norm_desc),
          &VAR_4->dma_tx_phy, VAR_1);
 if (!VAR_4->dma_tx)
  return -VAR_0;


 VAR_4->tx_skbuff_dma = FUNC_1(VAR_2, VAR_5,
           sizeof(dma_addr_t), VAR_1);
 if (!VAR_4->tx_skbuff_dma)
  goto dmamem_err;

 VAR_4->tx_skbuff = FUNC_1(VAR_2, VAR_5,
       sizeof(struct sk_buff *), VAR_1);

 if (!VAR_4->tx_skbuff)
  goto dmamem_err;


 VAR_4->queue_no = VAR_3;


 VAR_4->dirty_tx = 0;
 VAR_4->cur_tx = 0;

 return 0;

dmamem_err:
 FUNC_3(VAR_2, VAR_5 * sizeof(struct sxgbe_tx_norm_desc),
     VAR_4->dma_tx, VAR_4->dma_tx_phy);
 return -VAR_0;
}
