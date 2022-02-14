
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {unsigned int dma_buf_sz; void* rx_skbuff; scalar_t__ dma_rx_phy; void* dma_rx; int device; void* tx_skbuff; scalar_t__ base; scalar_t__ dma_tx_phy; void* dma_tx; scalar_t__ tx_head; scalar_t__ tx_tail; scalar_t__ rx_head; scalar_t__ rx_tail; int dev; } ;
struct xgmac_dma_desc {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {scalar_t__ mtu; } ;


 unsigned int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (void*,int,unsigned int) ;
 int FUNC_2 (void*,int) ;
 void* FUNC_3 (int ,int,scalar_t__*,int ) ;
 int FUNC_4 (int ,int,void*,scalar_t__) ;
 void* FUNC_5 (int,int,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,char*,void*,unsigned int,...) ;
 struct xgmac_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (struct xgmac_priv*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_9)
{
 struct xgmac_priv *VAR_10 = FUNC_8(VAR_9);
 unsigned int VAR_11;





 VAR_11 = FUNC_0(VAR_9->mtu + VAR_4 + VAR_3 + VAR_6, 8);

 FUNC_7(VAR_10->dev, "mtu [%d] bfsize [%d]\n", VAR_9->mtu, VAR_11);

 VAR_10->rx_skbuff = FUNC_5(VAR_0, sizeof(struct sk_buff *),
      VAR_5);
 if (!VAR_10->rx_skbuff)
  return -VAR_2;

 VAR_10->dma_rx = FUNC_3(VAR_10->device,
       VAR_0 *
       sizeof(struct xgmac_dma_desc),
       &VAR_10->dma_rx_phy,
       VAR_5);
 if (!VAR_10->dma_rx)
  goto err_dma_rx;

 VAR_10->tx_skbuff = FUNC_5(VAR_1, sizeof(struct sk_buff *),
      VAR_5);
 if (!VAR_10->tx_skbuff)
  goto err_tx_skb;

 VAR_10->dma_tx = FUNC_3(VAR_10->device,
       VAR_1 *
       sizeof(struct xgmac_dma_desc),
       &VAR_10->dma_tx_phy,
       VAR_5);
 if (!VAR_10->dma_tx)
  goto err_dma_tx;

 FUNC_7(VAR_10->dev, "DMA desc rings: virt addr (Rx %p, "
     "Tx %p)\n\tDMA phy addr (Rx 0x%08x, Tx 0x%08x)\n",
     VAR_10->dma_rx, VAR_10->dma_tx,
     (unsigned int)VAR_10->dma_rx_phy, (unsigned int)VAR_10->dma_tx_phy);

 VAR_10->rx_tail = 0;
 VAR_10->rx_head = 0;
 VAR_10->dma_buf_sz = VAR_11;
 FUNC_1(VAR_10->dma_rx, VAR_0, VAR_10->dma_buf_sz);
 FUNC_10(VAR_10);

 VAR_10->tx_tail = 0;
 VAR_10->tx_head = 0;
 FUNC_2(VAR_10->dma_tx, VAR_1);

 FUNC_9(VAR_10->dma_tx_phy, VAR_10->base + VAR_8);
 FUNC_9(VAR_10->dma_rx_phy, VAR_10->base + VAR_7);

 return 0;

err_dma_tx:
 FUNC_6(VAR_10->tx_skbuff);
err_tx_skb:
 FUNC_4(VAR_10->device,
     VAR_0 * sizeof(struct xgmac_dma_desc),
     VAR_10->dma_rx, VAR_10->dma_rx_phy);
err_dma_rx:
 FUNC_6(VAR_10->rx_skbuff);
 return -VAR_2;
}
