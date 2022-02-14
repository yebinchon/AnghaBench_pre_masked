
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pxa168_eth_private {scalar_t__ tx_used_desc_q; scalar_t__ tx_curr_desc_q; int tx_skb; int tx_desc_dma; scalar_t__ p_tx_desc_area; int tx_desc_area_size; TYPE_2__* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 struct pxa168_eth_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct pxa168_eth_private *VAR_1 = FUNC_3(VAR_0);


 FUNC_4(VAR_0, 1);
 FUNC_0(VAR_1->tx_used_desc_q != VAR_1->tx_curr_desc_q);

 if (VAR_1->p_tx_desc_area)
  FUNC_1(VAR_1->dev->dev.parent, VAR_1->tx_desc_area_size,
      VAR_1->p_tx_desc_area, VAR_1->tx_desc_dma);
 FUNC_2(VAR_1->tx_skb);
}
