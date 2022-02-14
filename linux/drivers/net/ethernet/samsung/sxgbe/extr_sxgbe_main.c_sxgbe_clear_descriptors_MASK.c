
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sxgbe_priv_data {unsigned int dma_tx_size; unsigned int dma_rx_size; TYPE_4__** txq; TYPE_3__* hw; int mode; int use_riwt; TYPE_1__** rxq; } ;
struct TYPE_8__ {int * dma_tx; } ;
struct TYPE_7__ {TYPE_2__* desc; } ;
struct TYPE_6__ {int (* init_tx_desc ) (int *) ;int (* init_rx_desc ) (int *,int ,int ,int) ;} ;
struct TYPE_5__ {int * dma_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct sxgbe_priv_data *VAR_2)
{
 int VAR_3, VAR_4;
 unsigned int VAR_5 = VAR_2->dma_tx_size;
 unsigned int VAR_6 = VAR_2->dma_rx_size;


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_6; VAR_3++)
   VAR_2->hw->desc->init_rx_desc(&VAR_2->rxq[VAR_4]->dma_rx[VAR_3],
           VAR_2->use_riwt, VAR_2->mode,
           (VAR_3 == VAR_6 - 1));
 }

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
   VAR_2->hw->desc->init_tx_desc(&VAR_2->txq[VAR_4]->dma_tx[VAR_3]);
 }
}
