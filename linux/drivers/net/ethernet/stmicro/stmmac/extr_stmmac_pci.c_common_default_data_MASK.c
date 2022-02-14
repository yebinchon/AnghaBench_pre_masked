
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct plat_stmmacenet_data {int clk_csr; int has_gmac; int force_sf_dma_mode; int unicast_filter_entries; int tx_queues_to_use; int rx_queues_to_use; TYPE_3__* rx_queues_cfg; TYPE_2__* tx_queues_cfg; int maxmtu; int multicast_filter_bins; TYPE_1__* mdio_bus_data; } ;
struct TYPE_6__ {int use_prio; int pkt_route; } ;
struct TYPE_5__ {int use_prio; } ;
struct TYPE_4__ {int needs_reset; scalar_t__ phy_mask; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct plat_stmmacenet_data *VAR_2)
{
 VAR_2->clk_csr = 2;
 VAR_2->has_gmac = 1;
 VAR_2->force_sf_dma_mode = 1;

 VAR_2->mdio_bus_data->needs_reset = 1;
 VAR_2->mdio_bus_data->phy_mask = 0;


 VAR_2->multicast_filter_bins = VAR_0;


 VAR_2->unicast_filter_entries = 1;


 VAR_2->maxmtu = VAR_1;


 VAR_2->tx_queues_to_use = 1;
 VAR_2->rx_queues_to_use = 1;


 VAR_2->tx_queues_cfg[0].use_prio = 0;
 VAR_2->rx_queues_cfg[0].use_prio = 0;


 VAR_2->rx_queues_cfg[0].pkt_route = 0x0;
}
