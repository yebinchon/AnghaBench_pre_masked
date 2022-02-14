
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_desc {int dummy; } ;
struct rx_desc {int dummy; } ;
struct rhine_private {int * tx_bufs; int tx_bufs_dma; int * tx_ring; int rx_ring_dma; int * rx_ring; } ;
struct TYPE_2__ {struct device* parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int,int *,int ) ;
 struct rhine_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device* VAR_3)
{
 struct rhine_private *VAR_4 = FUNC_1(VAR_3);
 struct device *VAR_5 = VAR_3->dev.parent;

 FUNC_0(VAR_5,
     VAR_1 * sizeof(struct rx_desc) +
     VAR_2 * sizeof(struct tx_desc),
     VAR_4->rx_ring, VAR_4->rx_ring_dma);
 VAR_4->tx_ring = ((void*)0);

 if (VAR_4->tx_bufs)
  FUNC_0(VAR_5, VAR_0 * VAR_2,
      VAR_4->tx_bufs, VAR_4->tx_bufs_dma);

 VAR_4->tx_bufs = ((void*)0);

}
