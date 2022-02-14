
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ravb_tx_desc {int dummy; } ;
struct ravb_private {int num_tx_desc; int* num_rx_ring; int* num_tx_ring; int ** tx_skb; int ** tx_align; int ** rx_skb; struct ravb_ex_rx_desc** tx_ring; int * tx_desc_dma; struct ravb_ex_rx_desc** rx_ring; int * rx_desc_dma; int rx_buf_sz; } ;
struct ravb_ex_rx_desc {int dptr; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,struct ravb_ex_rx_desc*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct ravb_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int,int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_1, int VAR_2)
{
 struct ravb_private *VAR_3 = FUNC_6(VAR_1);
 int VAR_4 = VAR_3->num_tx_desc;
 int VAR_5;
 int VAR_6;

 if (VAR_3->rx_ring[VAR_2]) {
  for (VAR_6 = 0; VAR_6 < VAR_3->num_rx_ring[VAR_2]; VAR_6++) {
   struct ravb_ex_rx_desc *VAR_7 = &VAR_3->rx_ring[VAR_2][VAR_6];

   if (!FUNC_2(VAR_1->dev.parent,
            FUNC_5(VAR_7->dptr)))
    FUNC_3(VAR_1->dev.parent,
       FUNC_5(VAR_7->dptr),
       VAR_3->rx_buf_sz,
       VAR_0);
  }
  VAR_5 = sizeof(struct ravb_ex_rx_desc) *
       (VAR_3->num_rx_ring[VAR_2] + 1);
  FUNC_1(VAR_1->dev.parent, VAR_5, VAR_3->rx_ring[VAR_2],
      VAR_3->rx_desc_dma[VAR_2]);
  VAR_3->rx_ring[VAR_2] = ((void*)0);
 }

 if (VAR_3->tx_ring[VAR_2]) {
  FUNC_7(VAR_1, VAR_2, 0);

  VAR_5 = sizeof(struct ravb_tx_desc) *
       (VAR_3->num_tx_ring[VAR_2] * VAR_4 + 1);
  FUNC_1(VAR_1->dev.parent, VAR_5, VAR_3->tx_ring[VAR_2],
      VAR_3->tx_desc_dma[VAR_2]);
  VAR_3->tx_ring[VAR_2] = ((void*)0);
 }


 if (VAR_3->rx_skb[VAR_2]) {
  for (VAR_6 = 0; VAR_6 < VAR_3->num_rx_ring[VAR_2]; VAR_6++)
   FUNC_0(VAR_3->rx_skb[VAR_2][VAR_6]);
 }
 FUNC_4(VAR_3->rx_skb[VAR_2]);
 VAR_3->rx_skb[VAR_2] = ((void*)0);


 FUNC_4(VAR_3->tx_align[VAR_2]);
 VAR_3->tx_align[VAR_2] = ((void*)0);




 FUNC_4(VAR_3->tx_skb[VAR_2]);
 VAR_3->tx_skb[VAR_2] = ((void*)0);
}
