
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {void* threshold; } ;
struct TYPE_6__ {int rx_fifo_size; int tx_fifo_size; } ;
struct stmmac_priv {int ioaddr; TYPE_5__* plat; int dma_buf_sz; TYPE_2__ xstats; TYPE_1__ dma_cap; } ;
struct TYPE_10__ {int rx_queues_to_use; int tx_queues_to_use; int rx_fifo_size; int tx_fifo_size; TYPE_4__* tx_queues_cfg; TYPE_3__* rx_queues_cfg; scalar_t__ tx_coe; scalar_t__ force_sf_dma_mode; scalar_t__ force_thresh_dma_mode; } ;
struct TYPE_9__ {int mode_to_use; } ;
struct TYPE_8__ {int mode_to_use; } ;


 void* VAR_0 ;
 int FUNC_0 (struct stmmac_priv*,int ,int,int,int,int ) ;
 int FUNC_1 (struct stmmac_priv*,int ,int,int,int,int ) ;
 int FUNC_2 (struct stmmac_priv*,int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct stmmac_priv *VAR_2)
{
 u32 VAR_3 = VAR_2->plat->rx_queues_to_use;
 u32 VAR_4 = VAR_2->plat->tx_queues_to_use;
 int VAR_5 = VAR_2->plat->rx_fifo_size;
 int VAR_6 = VAR_2->plat->tx_fifo_size;
 u32 VAR_7 = 0;
 u32 VAR_8 = 0;
 u32 VAR_9 = 0;
 u8 VAR_10 = 0;

 if (VAR_5 == 0)
  VAR_5 = VAR_2->dma_cap.rx_fifo_size;
 if (VAR_6 == 0)
  VAR_6 = VAR_2->dma_cap.tx_fifo_size;


 VAR_5 /= VAR_3;
 VAR_6 /= VAR_4;

 if (VAR_2->plat->force_thresh_dma_mode) {
  VAR_7 = VAR_1;
  VAR_8 = VAR_1;
 } else if (VAR_2->plat->force_sf_dma_mode || VAR_2->plat->tx_coe) {







  VAR_7 = VAR_0;
  VAR_8 = VAR_0;
  VAR_2->xstats.threshold = VAR_0;
 } else {
  VAR_7 = VAR_1;
  VAR_8 = VAR_0;
 }


 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_10 = VAR_2->plat->rx_queues_cfg[VAR_9].mode_to_use;

  FUNC_0(VAR_2, VAR_2->ioaddr, VAR_8, VAR_9,
    VAR_5, VAR_10);
  FUNC_2(VAR_2, VAR_2->ioaddr, VAR_2->dma_buf_sz,
    VAR_9);
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_10 = VAR_2->plat->tx_queues_cfg[VAR_9].mode_to_use;

  FUNC_1(VAR_2, VAR_2->ioaddr, VAR_7, VAR_9,
    VAR_6, VAR_10);
 }
}
