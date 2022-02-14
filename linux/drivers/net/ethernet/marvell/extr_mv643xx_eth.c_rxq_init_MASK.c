
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_queue {int index; int rx_ring_size; int rx_desc_area_size; scalar_t__ rx_desc_dma; struct rx_desc* rx_desc_area; int * rx_skb; scalar_t__ rx_used_desc; scalar_t__ rx_curr_desc; scalar_t__ rx_desc_count; } ;
struct rx_desc {scalar_t__ next_desc_ptr; } ;
struct mv643xx_eth_private {int rx_ring_size; int rx_desc_sram_size; TYPE_2__* dev; scalar_t__ rx_desc_sram_addr; struct rx_queue* rxq; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rx_desc* FUNC_0 (int ,int,scalar_t__*,int ) ;
 int FUNC_1 (int ,int,struct rx_desc*,scalar_t__) ;
 struct rx_desc* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct rx_desc*) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct rx_desc*,int ,int) ;
 int FUNC_6 (TYPE_2__*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct mv643xx_eth_private *VAR_2, int VAR_3)
{
 struct rx_queue *VAR_4 = VAR_2->rxq + VAR_3;
 struct rx_desc *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4->index = VAR_3;

 VAR_4->rx_ring_size = VAR_2->rx_ring_size;

 VAR_4->rx_desc_count = 0;
 VAR_4->rx_curr_desc = 0;
 VAR_4->rx_used_desc = 0;

 VAR_6 = VAR_4->rx_ring_size * sizeof(struct rx_desc);

 if (VAR_3 == 0 && VAR_6 <= VAR_2->rx_desc_sram_size) {
  VAR_4->rx_desc_area = FUNC_2(VAR_2->rx_desc_sram_addr,
      VAR_2->rx_desc_sram_size);
  VAR_4->rx_desc_dma = VAR_2->rx_desc_sram_addr;
 } else {
  VAR_4->rx_desc_area = FUNC_0(VAR_2->dev->dev.parent,
             VAR_6, &VAR_4->rx_desc_dma,
             VAR_1);
 }

 if (VAR_4->rx_desc_area == ((void*)0)) {
  FUNC_6(VAR_2->dev,
      "can't allocate rx ring (%d bytes)\n", VAR_6);
  goto out;
 }
 FUNC_5(VAR_4->rx_desc_area, 0, VAR_6);

 VAR_4->rx_desc_area_size = VAR_6;
 VAR_4->rx_skb = FUNC_4(VAR_4->rx_ring_size, sizeof(*VAR_4->rx_skb),
        VAR_1);
 if (VAR_4->rx_skb == ((void*)0))
  goto out_free;

 VAR_5 = VAR_4->rx_desc_area;
 for (VAR_7 = 0; VAR_7 < VAR_4->rx_ring_size; VAR_7++) {
  int VAR_8;

  VAR_8 = VAR_7 + 1;
  if (VAR_8 == VAR_4->rx_ring_size)
   VAR_8 = 0;

  VAR_5[VAR_7].next_desc_ptr = VAR_4->rx_desc_dma +
     VAR_8 * sizeof(struct rx_desc);
 }

 return 0;


out_free:
 if (VAR_3 == 0 && VAR_6 <= VAR_2->rx_desc_sram_size)
  FUNC_3(VAR_4->rx_desc_area);
 else
  FUNC_1(VAR_2->dev->dev.parent, VAR_6,
      VAR_4->rx_desc_area,
      VAR_4->rx_desc_dma);

out:
 return -VAR_0;
}
