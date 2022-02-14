
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct TYPE_8__ {int rx_fifo_size; int tx_fifo_size; } ;
struct stmmac_priv {int ioaddr; TYPE_4__ dma_cap; TYPE_3__* plat; } ;
struct TYPE_7__ {size_t rx_queues_to_use; size_t tx_queues_to_use; int rx_fifo_size; int tx_fifo_size; TYPE_2__* tx_queues_cfg; TYPE_1__* rx_queues_cfg; } ;
struct TYPE_6__ {int mode_to_use; } ;
struct TYPE_5__ {int mode_to_use; } ;


 int FUNC_0 (struct stmmac_priv*,int ,size_t,size_t,int,int ) ;
 int FUNC_1 (struct stmmac_priv*,int ,size_t,size_t,int,int ) ;

__attribute__((used)) static void FUNC_2(struct stmmac_priv *VAR_0, u32 VAR_1,
       u32 VAR_2, u32 VAR_3)
{
 u8 VAR_4 = VAR_0->plat->rx_queues_cfg[VAR_3].mode_to_use;
 u8 VAR_5 = VAR_0->plat->tx_queues_cfg[VAR_3].mode_to_use;
 u32 VAR_6 = VAR_0->plat->rx_queues_to_use;
 u32 VAR_7 = VAR_0->plat->tx_queues_to_use;
 int VAR_8 = VAR_0->plat->rx_fifo_size;
 int VAR_9 = VAR_0->plat->tx_fifo_size;

 if (VAR_8 == 0)
  VAR_8 = VAR_0->dma_cap.rx_fifo_size;
 if (VAR_9 == 0)
  VAR_9 = VAR_0->dma_cap.tx_fifo_size;


 VAR_8 /= VAR_6;
 VAR_9 /= VAR_7;

 FUNC_0(VAR_0, VAR_0->ioaddr, VAR_2, VAR_3, VAR_8, VAR_4);
 FUNC_1(VAR_0, VAR_0->ioaddr, VAR_1, VAR_3, VAR_9, VAR_5);
}
