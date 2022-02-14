
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_queue {int tx_ring_size; scalar_t__ tx_used_desc; scalar_t__ tx_curr_desc; scalar_t__ index; scalar_t__ tx_desc_area_size; int tso_hdrs_dma; scalar_t__ tso_hdrs; int tx_desc_mapping; int tx_desc_dma; scalar_t__ tx_desc_area; } ;
struct mv643xx_eth_private {scalar_t__ tx_desc_sram_size; TYPE_2__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tx_queue*) ;
 int FUNC_5 (struct tx_queue*,int,int) ;
 struct mv643xx_eth_private* FUNC_6 (struct tx_queue*) ;

__attribute__((used)) static void FUNC_7(struct tx_queue *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_6(VAR_1);

 FUNC_4(VAR_1);
 FUNC_5(VAR_1, VAR_1->tx_ring_size, 1);

 FUNC_0(VAR_1->tx_used_desc != VAR_1->tx_curr_desc);

 if (VAR_1->index == 0 &&
     VAR_1->tx_desc_area_size <= VAR_2->tx_desc_sram_size)
  FUNC_2(VAR_1->tx_desc_area);
 else
  FUNC_1(VAR_2->dev->dev.parent, VAR_1->tx_desc_area_size,
      VAR_1->tx_desc_area, VAR_1->tx_desc_dma);
 FUNC_3(VAR_1->tx_desc_mapping);

 if (VAR_1->tso_hdrs)
  FUNC_1(VAR_2->dev->dev.parent,
      VAR_1->tx_ring_size * VAR_0,
      VAR_1->tso_hdrs, VAR_1->tso_hdrs_dma);
}
