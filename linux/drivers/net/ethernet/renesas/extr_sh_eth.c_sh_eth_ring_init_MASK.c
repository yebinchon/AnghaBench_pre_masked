
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_eth_txdesc {int dummy; } ;
struct sh_eth_rxdesc {int dummy; } ;
struct sh_eth_private {int rx_buf_sz; int num_rx_ring; int num_tx_ring; void* tx_ring; int tx_desc_dma; TYPE_2__* pdev; scalar_t__ dirty_rx; void* rx_ring; int rx_desc_dma; void* tx_skbuff; void* rx_skbuff; TYPE_1__* cd; } ;
struct net_device {int mtu; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ rpadir; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *,int,int *,int ) ;
 void* FUNC_1 (int,int,int ) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4)
{
 struct sh_eth_private *VAR_5 = FUNC_2(VAR_4);
 int VAR_6, VAR_7;






 VAR_5->rx_buf_sz = (VAR_4->mtu <= 1492 ? VAR_3 :
     (((VAR_4->mtu + 26 + 7) & ~7) + 2 + 16));
 if (VAR_5->cd->rpadir)
  VAR_5->rx_buf_sz += VAR_2;


 VAR_5->rx_skbuff = FUNC_1(VAR_5->num_rx_ring, sizeof(*VAR_5->rx_skbuff),
     VAR_1);
 if (!VAR_5->rx_skbuff)
  return -VAR_0;

 VAR_5->tx_skbuff = FUNC_1(VAR_5->num_tx_ring, sizeof(*VAR_5->tx_skbuff),
     VAR_1);
 if (!VAR_5->tx_skbuff)
  goto ring_free;


 VAR_6 = sizeof(struct sh_eth_rxdesc) * VAR_5->num_rx_ring;
 VAR_5->rx_ring = FUNC_0(&VAR_5->pdev->dev, VAR_6,
       &VAR_5->rx_desc_dma, VAR_1);
 if (!VAR_5->rx_ring)
  goto ring_free;

 VAR_5->dirty_rx = 0;


 VAR_7 = sizeof(struct sh_eth_txdesc) * VAR_5->num_tx_ring;
 VAR_5->tx_ring = FUNC_0(&VAR_5->pdev->dev, VAR_7,
       &VAR_5->tx_desc_dma, VAR_1);
 if (!VAR_5->tx_ring)
  goto ring_free;
 return 0;

ring_free:

 FUNC_3(VAR_4);

 return -VAR_0;
}
