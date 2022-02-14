
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {scalar_t__ dma; } ;
struct alx_hw {int dummy; } ;
struct alx_priv {int num_napi; int tx_ringsz; int rx_ringsz; int rxbuf_size; struct alx_napi** qnapi; TYPE_1__ descmem; struct alx_hw hw; } ;
struct alx_napi {TYPE_3__* rxq; TYPE_2__* txq; } ;
struct TYPE_6__ {int rrd_dma; int rfd_dma; scalar_t__ rrd_read_idx; scalar_t__ write_idx; scalar_t__ read_idx; } ;
struct TYPE_5__ {size_t queue_idx; int tpd_dma; scalar_t__ write_idx; scalar_t__ read_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct alx_hw*,int ,int) ;
 int * VAR_10 ;

__attribute__((used)) static void FUNC_1(struct alx_priv *VAR_11)
{
 struct alx_hw *VAR_12 = &VAR_11->hw;
 u32 VAR_13 = ((u64)VAR_11->descmem.dma) >> 32;
 struct alx_napi *VAR_14;
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_11->num_napi; VAR_15++) {
  VAR_14 = VAR_11->qnapi[VAR_15];
  if (VAR_14->txq) {
   VAR_14->txq->read_idx = 0;
   VAR_14->txq->write_idx = 0;
   FUNC_0(VAR_12,
     VAR_10[VAR_14->txq->queue_idx],
     VAR_14->txq->tpd_dma);
  }

  if (VAR_14->rxq) {
   VAR_14->rxq->read_idx = 0;
   VAR_14->rxq->write_idx = 0;
   VAR_14->rxq->rrd_read_idx = 0;
   FUNC_0(VAR_12, VAR_3, VAR_14->rxq->rrd_dma);
   FUNC_0(VAR_12, VAR_0, VAR_14->rxq->rfd_dma);
  }
 }

 FUNC_0(VAR_12, VAR_9, VAR_13);
 FUNC_0(VAR_12, VAR_8, VAR_11->tx_ringsz);

 FUNC_0(VAR_12, VAR_5, VAR_13);
 FUNC_0(VAR_12, VAR_4, VAR_11->rx_ringsz);
 FUNC_0(VAR_12, VAR_2, VAR_11->rx_ringsz);
 FUNC_0(VAR_12, VAR_1, VAR_11->rxbuf_size);


 FUNC_0(VAR_12, VAR_6, VAR_7);
}
