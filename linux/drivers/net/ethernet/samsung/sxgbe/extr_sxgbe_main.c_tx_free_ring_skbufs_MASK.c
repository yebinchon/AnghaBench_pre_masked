
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sxgbe_tx_queue {scalar_t__* tx_skbuff_dma; int ** tx_skbuff; struct sxgbe_tx_norm_desc* dma_tx; struct sxgbe_priv_data* priv_ptr; } ;
struct sxgbe_tx_norm_desc {int dummy; } ;
struct sxgbe_priv_data {int dma_tx_size; TYPE_2__* hw; int device; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct TYPE_3__ {int (* get_tx_len ) (struct sxgbe_tx_norm_desc*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (struct sxgbe_tx_norm_desc*) ;

__attribute__((used)) static void FUNC_3(struct sxgbe_tx_queue *VAR_1)
{
 int VAR_2;
 struct sxgbe_priv_data *VAR_3 = VAR_1->priv_ptr;
 int VAR_4 = VAR_3->dma_tx_size;

 for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) {
  struct sxgbe_tx_norm_desc *VAR_5 = VAR_1->dma_tx + VAR_2;

  if (VAR_1->tx_skbuff_dma[VAR_2])
   FUNC_1(VAR_3->device,
      VAR_1->tx_skbuff_dma[VAR_2],
      VAR_3->hw->desc->get_tx_len(VAR_5),
      VAR_0);

  FUNC_0(VAR_1->tx_skbuff[VAR_2]);
  VAR_1->tx_skbuff[VAR_2] = ((void*)0);
  VAR_1->tx_skbuff_dma[VAR_2] = 0;
 }
}
