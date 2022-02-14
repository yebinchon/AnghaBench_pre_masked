
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct stmmac_tx_queue {int tx_tail_addr; int dma_tx_phy; } ;
struct stmmac_rx_queue {scalar_t__ rx_tail_addr; scalar_t__ dma_rx_phy; } ;
struct stmmac_priv {scalar_t__ mode; int ioaddr; TYPE_1__* plat; struct stmmac_tx_queue* tx_queue; struct stmmac_rx_queue* rx_queue; int device; scalar_t__ extend_desc; } ;
struct dma_desc {int dummy; } ;
struct TYPE_7__ {int pbl; } ;
struct TYPE_6__ {size_t rx_queues_to_use; size_t tx_queues_to_use; TYPE_2__* dma_cfg; scalar_t__ axi; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (struct stmmac_priv*,int ,scalar_t__) ;
 int FUNC_3 (struct stmmac_priv*,int ,TYPE_2__*,int) ;
 int FUNC_4 (struct stmmac_priv*,int ,TYPE_2__*,size_t) ;
 int FUNC_5 (struct stmmac_priv*,int ,TYPE_2__*,scalar_t__,size_t) ;
 int FUNC_6 (struct stmmac_priv*,int ,TYPE_2__*,int ,size_t) ;
 int FUNC_7 (struct stmmac_priv*,int ) ;
 int FUNC_8 (struct stmmac_priv*,int ,scalar_t__,size_t) ;
 int FUNC_9 (struct stmmac_priv*,int ,int ,size_t) ;

__attribute__((used)) static int FUNC_10(struct stmmac_priv *VAR_3)
{
 u32 VAR_4 = VAR_3->plat->rx_queues_to_use;
 u32 VAR_5 = VAR_3->plat->tx_queues_to_use;
 u32 VAR_6 = FUNC_1(VAR_4, VAR_5);
 struct stmmac_rx_queue *VAR_7;
 struct stmmac_tx_queue *VAR_8;
 u32 VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;

 if (!VAR_3->plat->dma_cfg || !VAR_3->plat->dma_cfg->pbl) {
  FUNC_0(VAR_3->device, "Invalid DMA configuration\n");
  return -VAR_1;
 }

 if (VAR_3->extend_desc && (VAR_3->mode == VAR_2))
  VAR_10 = 1;

 VAR_11 = FUNC_7(VAR_3, VAR_3->ioaddr);
 if (VAR_11) {
  FUNC_0(VAR_3->device, "Failed to reset the dma\n");
  return VAR_11;
 }


 FUNC_3(VAR_3, VAR_3->ioaddr, VAR_3->plat->dma_cfg, VAR_10);

 if (VAR_3->plat->axi)
  FUNC_2(VAR_3, VAR_3->ioaddr, VAR_3->plat->axi);


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  FUNC_4(VAR_3, VAR_3->ioaddr, VAR_3->plat->dma_cfg, VAR_9);


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7 = &VAR_3->rx_queue[VAR_9];

  FUNC_5(VAR_3, VAR_3->ioaddr, VAR_3->plat->dma_cfg,
        VAR_7->dma_rx_phy, VAR_9);

  VAR_7->rx_tail_addr = VAR_7->dma_rx_phy +
       (VAR_0 * sizeof(struct dma_desc));
  FUNC_8(VAR_3, VAR_3->ioaddr,
           VAR_7->rx_tail_addr, VAR_9);
 }


 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8 = &VAR_3->tx_queue[VAR_9];

  FUNC_6(VAR_3, VAR_3->ioaddr, VAR_3->plat->dma_cfg,
        VAR_8->dma_tx_phy, VAR_9);

  VAR_8->tx_tail_addr = VAR_8->dma_tx_phy;
  FUNC_9(VAR_3, VAR_3->ioaddr,
           VAR_8->tx_tail_addr, VAR_9);
 }

 return VAR_11;
}
