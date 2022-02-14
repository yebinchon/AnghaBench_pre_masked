
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_queue {int index; int tx_ring_size; int tx_stop_threshold; int tx_wake_threshold; int tx_desc_area_size; scalar_t__ tx_desc_dma; struct tx_desc* tx_desc_area; int tx_desc_mapping; int tx_skb; int * tso_hdrs; scalar_t__ tso_hdrs_dma; scalar_t__ tx_used_desc; scalar_t__ tx_curr_desc; scalar_t__ tx_desc_count; } ;
struct tx_desc {scalar_t__ next_desc_ptr; scalar_t__ cmd_sts; } ;
struct mv643xx_eth_private {int tx_ring_size; int tx_desc_sram_size; TYPE_2__* dev; scalar_t__ tx_desc_sram_addr; struct tx_queue* txq; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int,scalar_t__*,int ) ;
 int FUNC_1 (int ,int,struct tx_desc*,scalar_t__) ;
 struct tx_desc* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct tx_desc*) ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct tx_desc*,int ,int) ;
 int FUNC_7 (TYPE_2__*,char*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct mv643xx_eth_private *VAR_4, int VAR_5)
{
 struct tx_queue *VAR_6 = VAR_4->txq + VAR_5;
 struct tx_desc *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_6->index = VAR_5;

 VAR_6->tx_ring_size = VAR_4->tx_ring_size;





 VAR_6->tx_stop_threshold = VAR_6->tx_ring_size - VAR_2;
 VAR_6->tx_wake_threshold = VAR_6->tx_stop_threshold / 2;

 VAR_6->tx_desc_count = 0;
 VAR_6->tx_curr_desc = 0;
 VAR_6->tx_used_desc = 0;

 VAR_8 = VAR_6->tx_ring_size * sizeof(struct tx_desc);

 if (VAR_5 == 0 && VAR_8 <= VAR_4->tx_desc_sram_size) {
  VAR_6->tx_desc_area = FUNC_2(VAR_4->tx_desc_sram_addr,
      VAR_4->tx_desc_sram_size);
  VAR_6->tx_desc_dma = VAR_4->tx_desc_sram_addr;
 } else {
  VAR_6->tx_desc_area = FUNC_0(VAR_4->dev->dev.parent,
             VAR_8, &VAR_6->tx_desc_dma,
             VAR_1);
 }

 if (VAR_6->tx_desc_area == ((void*)0)) {
  FUNC_7(VAR_4->dev,
      "can't allocate tx ring (%d bytes)\n", VAR_8);
  return -VAR_0;
 }
 FUNC_6(VAR_6->tx_desc_area, 0, VAR_8);

 VAR_6->tx_desc_area_size = VAR_8;

 VAR_7 = VAR_6->tx_desc_area;
 for (VAR_10 = 0; VAR_10 < VAR_6->tx_ring_size; VAR_10++) {
  struct tx_desc *VAR_11 = VAR_7 + VAR_10;
  int VAR_12;

  VAR_12 = VAR_10 + 1;
  if (VAR_12 == VAR_6->tx_ring_size)
   VAR_12 = 0;

  VAR_11->cmd_sts = 0;
  VAR_11->next_desc_ptr = VAR_6->tx_desc_dma +
     VAR_12 * sizeof(struct tx_desc);
 }

 VAR_6->tx_desc_mapping = FUNC_4(VAR_6->tx_ring_size, sizeof(char),
           VAR_1);
 if (!VAR_6->tx_desc_mapping) {
  VAR_9 = -VAR_0;
  goto err_free_desc_area;
 }


 VAR_6->tso_hdrs = FUNC_0(VAR_4->dev->dev.parent,
        VAR_6->tx_ring_size * VAR_3,
        &VAR_6->tso_hdrs_dma, VAR_1);
 if (VAR_6->tso_hdrs == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto err_free_desc_mapping;
 }
 FUNC_8(&VAR_6->tx_skb);

 return 0;

err_free_desc_mapping:
 FUNC_5(VAR_6->tx_desc_mapping);
err_free_desc_area:
 if (VAR_5 == 0 && VAR_8 <= VAR_4->tx_desc_sram_size)
  FUNC_3(VAR_6->tx_desc_area);
 else
  FUNC_1(VAR_4->dev->dev.parent, VAR_6->tx_desc_area_size,
      VAR_6->tx_desc_area, VAR_6->tx_desc_dma);
 return VAR_9;
}
