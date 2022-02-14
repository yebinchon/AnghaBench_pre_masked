
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct plat_stmmacenet_data {int clk_csr; int has_gmac4; int force_sf_dma_mode; int tso_en; int pmt; int unicast_filter_entries; int tx_queues_to_use; int rx_queues_to_use; int bus_id; int phy_addr; TYPE_5__* axi; TYPE_4__* dma_cfg; int interface; TYPE_3__* rx_queues_cfg; int rx_sched_algorithm; TYPE_2__* tx_queues_cfg; int tx_sched_algorithm; int maxmtu; int multicast_filter_bins; TYPE_1__* mdio_bus_data; } ;
struct pci_dev {int dev; } ;
struct TYPE_10__ {int axi_wr_osr_lmt; int axi_rd_osr_lmt; int axi_fb; int* axi_blen; } ;
struct TYPE_9__ {int pbl; int pblx8; } ;
struct TYPE_8__ {int use_prio; int pkt_route; int chan; void* mode_to_use; } ;
struct TYPE_7__ {int use_prio; int weight; void* mode_to_use; } ;
struct TYPE_6__ {scalar_t__ phy_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* FUNC_0 (int *,int,int ) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_8,
       struct plat_stmmacenet_data *VAR_9)
{
 int VAR_10;

 VAR_9->clk_csr = 5;
 VAR_9->has_gmac4 = 1;
 VAR_9->force_sf_dma_mode = 1;
 VAR_9->tso_en = 1;
 VAR_9->pmt = 1;

 VAR_9->mdio_bus_data->phy_mask = 0;


 VAR_9->multicast_filter_bins = VAR_2;


 VAR_9->unicast_filter_entries = 1;


 VAR_9->maxmtu = VAR_3;


 VAR_9->tx_queues_to_use = 4;
 VAR_9->rx_queues_to_use = 4;

 VAR_9->tx_sched_algorithm = VAR_6;
 for (VAR_10 = 0; VAR_10 < VAR_9->tx_queues_to_use; VAR_10++) {
  VAR_9->tx_queues_cfg[VAR_10].use_prio = 0;
  VAR_9->tx_queues_cfg[VAR_10].mode_to_use = VAR_4;
  VAR_9->tx_queues_cfg[VAR_10].weight = 25;
 }

 VAR_9->rx_sched_algorithm = VAR_5;
 for (VAR_10 = 0; VAR_10 < VAR_9->rx_queues_to_use; VAR_10++) {
  VAR_9->rx_queues_cfg[VAR_10].use_prio = 0;
  VAR_9->rx_queues_cfg[VAR_10].mode_to_use = VAR_4;
  VAR_9->rx_queues_cfg[VAR_10].pkt_route = 0x0;
  VAR_9->rx_queues_cfg[VAR_10].chan = VAR_10;
 }

 VAR_9->bus_id = 1;
 VAR_9->phy_addr = -1;
 VAR_9->interface = VAR_7;

 VAR_9->dma_cfg->pbl = 32;
 VAR_9->dma_cfg->pblx8 = 1;


 VAR_9->axi = FUNC_0(&VAR_8->dev, sizeof(*VAR_9->axi), VAR_1);
 if (!VAR_9->axi)
  return -VAR_0;

 VAR_9->axi->axi_wr_osr_lmt = 31;
 VAR_9->axi->axi_rd_osr_lmt = 31;

 VAR_9->axi->axi_fb = 0;
 VAR_9->axi->axi_blen[0] = 4;
 VAR_9->axi->axi_blen[1] = 8;
 VAR_9->axi->axi_blen[2] = 16;
 VAR_9->axi->axi_blen[3] = 32;

 return 0;
}
