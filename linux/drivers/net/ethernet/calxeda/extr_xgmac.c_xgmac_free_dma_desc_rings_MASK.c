
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgmac_priv {int * tx_skbuff; int * rx_skbuff; int * dma_rx; int dma_rx_phy; int device; int * dma_tx; int dma_tx_phy; } ;
struct xgmac_dma_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xgmac_priv*) ;
 int FUNC_3 (struct xgmac_priv*) ;

__attribute__((used)) static void FUNC_4(struct xgmac_priv *VAR_2)
{

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);


 if (VAR_2->dma_tx) {
  FUNC_0(VAR_2->device,
      VAR_1 * sizeof(struct xgmac_dma_desc),
      VAR_2->dma_tx, VAR_2->dma_tx_phy);
  VAR_2->dma_tx = ((void*)0);
 }
 if (VAR_2->dma_rx) {
  FUNC_0(VAR_2->device,
      VAR_0 * sizeof(struct xgmac_dma_desc),
      VAR_2->dma_rx, VAR_2->dma_rx_phy);
  VAR_2->dma_rx = ((void*)0);
 }
 FUNC_1(VAR_2->rx_skbuff);
 VAR_2->rx_skbuff = ((void*)0);
 FUNC_1(VAR_2->tx_skbuff);
 VAR_2->tx_skbuff = ((void*)0);
}
