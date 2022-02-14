
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_txdesc {int dummy; } ;
struct sh_eth_rxdesc {int addr; } ;
struct sh_eth_private {int num_rx_ring; int num_tx_ring; scalar_t__* tx_skbuff; struct sh_eth_rxdesc* tx_ring; int tx_desc_dma; TYPE_1__* pdev; scalar_t__* rx_skbuff; struct sh_eth_rxdesc* rx_ring; int rx_desc_dma; int rx_buf_sz; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int,struct sh_eth_rxdesc*,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ) ;
 struct sh_eth_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_1)
{
 struct sh_eth_private *VAR_2 = FUNC_6(VAR_1);
 int VAR_3, VAR_4;

 if (VAR_2->rx_ring) {
  for (VAR_4 = 0; VAR_4 < VAR_2->num_rx_ring; VAR_4++) {
   if (VAR_2->rx_skbuff[VAR_4]) {
    struct sh_eth_rxdesc *VAR_5 = &VAR_2->rx_ring[VAR_4];

    FUNC_3(&VAR_2->pdev->dev,
       FUNC_5(VAR_5->addr),
       FUNC_0(VAR_2->rx_buf_sz, 32),
       VAR_0);
   }
  }
  VAR_3 = sizeof(struct sh_eth_rxdesc) * VAR_2->num_rx_ring;
  FUNC_2(&VAR_2->pdev->dev, VAR_3, VAR_2->rx_ring,
      VAR_2->rx_desc_dma);
  VAR_2->rx_ring = ((void*)0);
 }


 if (VAR_2->rx_skbuff) {
  for (VAR_4 = 0; VAR_4 < VAR_2->num_rx_ring; VAR_4++)
   FUNC_1(VAR_2->rx_skbuff[VAR_4]);
 }
 FUNC_4(VAR_2->rx_skbuff);
 VAR_2->rx_skbuff = ((void*)0);

 if (VAR_2->tx_ring) {
  FUNC_7(VAR_1, 0);

  VAR_3 = sizeof(struct sh_eth_txdesc) * VAR_2->num_tx_ring;
  FUNC_2(&VAR_2->pdev->dev, VAR_3, VAR_2->tx_ring,
      VAR_2->tx_desc_dma);
  VAR_2->tx_ring = ((void*)0);
 }


 FUNC_4(VAR_2->tx_skbuff);
 VAR_2->tx_skbuff = ((void*)0);
}
