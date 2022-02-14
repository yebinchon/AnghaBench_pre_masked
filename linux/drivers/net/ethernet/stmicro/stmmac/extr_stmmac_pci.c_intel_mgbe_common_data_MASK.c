
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct plat_stmmacenet_data {int clk_csr; int has_gmac4; int tso_en; int rx_queues_to_use; int tx_queues_to_use; int tx_fifo_size; int rx_fifo_size; int unicast_filter_entries; int maxmtu; int multicast_filter_bins; int * stmmac_clk; int clk_ptp_rate; int ptp_max_adj; TYPE_5__* axi; TYPE_4__* dma_cfg; TYPE_3__* mdio_bus_data; TYPE_2__* tx_queues_cfg; int tx_sched_algorithm; TYPE_1__* rx_queues_cfg; int rx_sched_algorithm; scalar_t__ force_sf_dma_mode; scalar_t__ has_gmac; } ;
struct pci_dev {int dev; } ;
struct TYPE_10__ {int axi_wr_osr_lmt; int axi_rd_osr_lmt; int* axi_blen; scalar_t__ axi_xit_frm; scalar_t__ axi_lpi_en; } ;
struct TYPE_9__ {int pbl; int pblx8; scalar_t__ aal; scalar_t__ mixed_burst; scalar_t__ fixed_burst; } ;
struct TYPE_8__ {scalar_t__ phy_mask; } ;
struct TYPE_7__ {int use_prio; int weight; void* mode_to_use; } ;
struct TYPE_6__ {int chan; int use_prio; int pkt_route; void* mode_to_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*,int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;
 TYPE_5__* FUNC_4 (int *,int,int ) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_7,
      struct plat_stmmacenet_data *VAR_8)
{
 int VAR_9;

 VAR_8->clk_csr = 5;
 VAR_8->has_gmac = 0;
 VAR_8->has_gmac4 = 1;
 VAR_8->force_sf_dma_mode = 0;
 VAR_8->tso_en = 1;

 VAR_8->rx_sched_algorithm = VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_8->rx_queues_to_use; VAR_9++) {
  VAR_8->rx_queues_cfg[VAR_9].mode_to_use = VAR_4;
  VAR_8->rx_queues_cfg[VAR_9].chan = VAR_9;


  VAR_8->rx_queues_cfg[VAR_9].use_prio = 0;


  VAR_8->rx_queues_cfg[VAR_9].pkt_route = 0x0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_8->tx_queues_to_use; VAR_9++) {
  VAR_8->tx_queues_cfg[VAR_9].mode_to_use = VAR_4;


  VAR_8->tx_queues_cfg[VAR_9].use_prio = 0;
 }


 VAR_8->tx_fifo_size = VAR_8->tx_queues_to_use * 4096;
 VAR_8->rx_fifo_size = VAR_8->rx_queues_to_use * 4096;

 VAR_8->tx_sched_algorithm = VAR_6;
 VAR_8->tx_queues_cfg[0].weight = 0x09;
 VAR_8->tx_queues_cfg[1].weight = 0x0A;
 VAR_8->tx_queues_cfg[2].weight = 0x0B;
 VAR_8->tx_queues_cfg[3].weight = 0x0C;
 VAR_8->tx_queues_cfg[4].weight = 0x0D;
 VAR_8->tx_queues_cfg[5].weight = 0x0E;
 VAR_8->tx_queues_cfg[6].weight = 0x0F;
 VAR_8->tx_queues_cfg[7].weight = 0x10;

 VAR_8->mdio_bus_data->phy_mask = 0;

 VAR_8->dma_cfg->pbl = 32;
 VAR_8->dma_cfg->pblx8 = 1;
 VAR_8->dma_cfg->fixed_burst = 0;
 VAR_8->dma_cfg->mixed_burst = 0;
 VAR_8->dma_cfg->aal = 0;

 VAR_8->axi = FUNC_4(&VAR_7->dev, sizeof(*VAR_8->axi),
     VAR_1);
 if (!VAR_8->axi)
  return -VAR_0;

 VAR_8->axi->axi_lpi_en = 0;
 VAR_8->axi->axi_xit_frm = 0;
 VAR_8->axi->axi_wr_osr_lmt = 1;
 VAR_8->axi->axi_rd_osr_lmt = 1;
 VAR_8->axi->axi_blen[0] = 4;
 VAR_8->axi->axi_blen[1] = 8;
 VAR_8->axi->axi_blen[2] = 16;

 VAR_8->ptp_max_adj = VAR_8->clk_ptp_rate;


 VAR_8->stmmac_clk = FUNC_2(&VAR_7->dev,
         "stmmac-clk", ((void*)0), 0,
         VAR_8->clk_ptp_rate);

 if (FUNC_0(VAR_8->stmmac_clk)) {
  FUNC_3(&VAR_7->dev, "Fail to register stmmac-clk\n");
  VAR_8->stmmac_clk = ((void*)0);
 }
 FUNC_1(VAR_8->stmmac_clk);


 VAR_8->multicast_filter_bins = VAR_2;


 VAR_8->unicast_filter_entries = 1;


 VAR_8->maxmtu = VAR_3;

 return 0;
}
