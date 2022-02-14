
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_queue {int rx_ring_size; scalar_t__ index; scalar_t__ rx_desc_area_size; scalar_t__* rx_skb; int rx_desc_dma; int rx_desc_area; scalar_t__ rx_desc_count; } ;
struct mv643xx_eth_private {scalar_t__ rx_desc_sram_size; TYPE_2__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_5 (struct rx_queue*) ;
 struct mv643xx_eth_private* FUNC_6 (struct rx_queue*) ;

__attribute__((used)) static void FUNC_7(struct rx_queue *VAR_0)
{
 struct mv643xx_eth_private *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 FUNC_5(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_0->rx_ring_size; VAR_2++) {
  if (VAR_0->rx_skb[VAR_2]) {
   FUNC_0(VAR_0->rx_skb[VAR_2]);
   VAR_0->rx_desc_count--;
  }
 }

 if (VAR_0->rx_desc_count) {
  FUNC_4(VAR_1->dev, "error freeing rx ring -- %d skbs stuck\n",
      VAR_0->rx_desc_count);
 }

 if (VAR_0->index == 0 &&
     VAR_0->rx_desc_area_size <= VAR_1->rx_desc_sram_size)
  FUNC_2(VAR_0->rx_desc_area);
 else
  FUNC_1(VAR_1->dev->dev.parent, VAR_0->rx_desc_area_size,
      VAR_0->rx_desc_area, VAR_0->rx_desc_dma);

 FUNC_3(VAR_0->rx_skb);
}
