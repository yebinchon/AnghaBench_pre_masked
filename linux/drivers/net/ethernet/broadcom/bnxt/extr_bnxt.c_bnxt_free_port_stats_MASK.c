
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_port_stats_ext {int dummy; } ;
struct rx_port_stats_ext {int dummy; } ;
struct pcie_ctx_hw_stats {int dummy; } ;
struct pci_dev {int dev; } ;
struct bnxt {int hw_port_stats_size; int * hw_pcie_stats; int hw_pcie_stats_map; int * hw_rx_port_stats_ext; int hw_rx_port_stats_ext_map; int * hw_tx_port_stats_ext; int hw_tx_port_stats_ext_map; int * hw_rx_port_stats; int hw_rx_port_stats_map; int flags; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct bnxt *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;

 VAR_2->flags &= ~VAR_0;
 VAR_2->flags &= ~VAR_1;

 if (VAR_2->hw_rx_port_stats) {
  FUNC_0(&VAR_3->dev, VAR_2->hw_port_stats_size,
      VAR_2->hw_rx_port_stats,
      VAR_2->hw_rx_port_stats_map);
  VAR_2->hw_rx_port_stats = ((void*)0);
 }

 if (VAR_2->hw_tx_port_stats_ext) {
  FUNC_0(&VAR_3->dev, sizeof(struct tx_port_stats_ext),
      VAR_2->hw_tx_port_stats_ext,
      VAR_2->hw_tx_port_stats_ext_map);
  VAR_2->hw_tx_port_stats_ext = ((void*)0);
 }

 if (VAR_2->hw_rx_port_stats_ext) {
  FUNC_0(&VAR_3->dev, sizeof(struct rx_port_stats_ext),
      VAR_2->hw_rx_port_stats_ext,
      VAR_2->hw_rx_port_stats_ext_map);
  VAR_2->hw_rx_port_stats_ext = ((void*)0);
 }

 if (VAR_2->hw_pcie_stats) {
  FUNC_0(&VAR_3->dev, sizeof(struct pcie_ctx_hw_stats),
      VAR_2->hw_pcie_stats, VAR_2->hw_pcie_stats_map);
  VAR_2->hw_pcie_stats = ((void*)0);
 }
}
