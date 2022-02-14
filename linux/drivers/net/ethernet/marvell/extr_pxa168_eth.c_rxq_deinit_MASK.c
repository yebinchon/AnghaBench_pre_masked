
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pxa168_eth_private {int rx_ring_size; scalar_t__* rx_skb; int rx_desc_dma; scalar_t__ p_rx_desc_area; int rx_desc_area_size; TYPE_2__* dev; scalar_t__ rx_desc_count; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (struct net_device*,char*,scalar_t__) ;
 struct pxa168_eth_private* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct pxa168_eth_private *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;


 for (VAR_2 = 0; VAR_1->rx_desc_count && VAR_2 < VAR_1->rx_ring_size; VAR_2++) {
  if (VAR_1->rx_skb[VAR_2]) {
   FUNC_0(VAR_1->rx_skb[VAR_2]);
   VAR_1->rx_desc_count--;
  }
 }
 if (VAR_1->rx_desc_count)
  FUNC_3(VAR_0, "Error in freeing Rx Ring. %d skb's still\n",
      VAR_1->rx_desc_count);

 if (VAR_1->p_rx_desc_area)
  FUNC_1(VAR_1->dev->dev.parent, VAR_1->rx_desc_area_size,
      VAR_1->p_rx_desc_area, VAR_1->rx_desc_dma);
 FUNC_2(VAR_1->rx_skb);
}
