
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tx_port_stats_ext {int dummy; } ;
struct tx_port_stats {int dummy; } ;
struct rx_port_stats_ext {int dummy; } ;
struct rx_port_stats {int dummy; } ;
struct pcie_ctx_hw_stats {int dummy; } ;
struct pci_dev {int dev; } ;
struct bnxt_cp_ring_info {int hw_stats_ctx_id; void* hw_stats; int hw_stats_map; } ;
struct bnxt_napi {struct bnxt_cp_ring_info cp_ring; } ;
struct bnxt {size_t hw_ring_stats_size; size_t cp_nr_rings; scalar_t__ chip_num; int hw_port_stats_size; int hwrm_spec_code; int fw_cap; int flags; void* hw_pcie_stats; int hw_pcie_stats_map; int hw_tx_port_stats_ext_map; void* hw_tx_port_stats_ext; void* hw_rx_port_stats_ext; int hw_rx_port_stats_ext_map; int hw_rx_port_stats_map; scalar_t__ hw_tx_port_stats_map; void* hw_rx_port_stats; void* hw_tx_port_stats; struct bnxt_napi** bnapi; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bnxt*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_1 (int *,int,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct bnxt *VAR_9)
{
 u32 VAR_10, VAR_11;
 struct pci_dev *VAR_12 = VAR_9->pdev;

 VAR_10 = VAR_9->hw_ring_stats_size;

 for (VAR_11 = 0; VAR_11 < VAR_9->cp_nr_rings; VAR_11++) {
  struct bnxt_napi *VAR_13 = VAR_9->bnapi[VAR_11];
  struct bnxt_cp_ring_info *VAR_14 = &VAR_13->cp_ring;

  VAR_14->hw_stats = FUNC_1(&VAR_12->dev, VAR_10,
         &VAR_14->hw_stats_map,
         VAR_7);
  if (!VAR_14->hw_stats)
   return -VAR_6;

  VAR_14->hw_stats_ctx_id = VAR_8;
 }

 if (FUNC_0(VAR_9) || VAR_9->chip_num == VAR_5)
  return 0;

 if (VAR_9->hw_rx_port_stats)
  goto alloc_ext_stats;

 VAR_9->hw_port_stats_size = sizeof(struct rx_port_stats) +
     sizeof(struct tx_port_stats) + 1024;

 VAR_9->hw_rx_port_stats =
  FUNC_1(&VAR_12->dev, VAR_9->hw_port_stats_size,
       &VAR_9->hw_rx_port_stats_map,
       VAR_7);
 if (!VAR_9->hw_rx_port_stats)
  return -VAR_6;

 VAR_9->hw_tx_port_stats = (void *)(VAR_9->hw_rx_port_stats + 1) + 512;
 VAR_9->hw_tx_port_stats_map = VAR_9->hw_rx_port_stats_map +
       sizeof(struct rx_port_stats) + 512;
 VAR_9->flags |= VAR_1;

alloc_ext_stats:

 if (VAR_9->hwrm_spec_code < 0x10804 || VAR_9->hwrm_spec_code == 0x10900)
  if (!(VAR_9->fw_cap & VAR_3))
   return 0;

 if (VAR_9->hw_rx_port_stats_ext)
  goto alloc_tx_ext_stats;

 VAR_9->hw_rx_port_stats_ext =
  FUNC_1(&VAR_12->dev, sizeof(struct rx_port_stats_ext),
       &VAR_9->hw_rx_port_stats_ext_map, VAR_7);
 if (!VAR_9->hw_rx_port_stats_ext)
  return 0;

alloc_tx_ext_stats:
 if (VAR_9->hw_tx_port_stats_ext)
  goto alloc_pcie_stats;

 if (VAR_9->hwrm_spec_code >= 0x10902 ||
     (VAR_9->fw_cap & VAR_3)) {
  VAR_9->hw_tx_port_stats_ext =
   FUNC_1(&VAR_12->dev,
        sizeof(struct tx_port_stats_ext),
        &VAR_9->hw_tx_port_stats_ext_map,
        VAR_7);
 }
 VAR_9->flags |= VAR_2;

alloc_pcie_stats:
 if (VAR_9->hw_pcie_stats ||
     !(VAR_9->fw_cap & VAR_4))
  return 0;

 VAR_9->hw_pcie_stats =
  FUNC_1(&VAR_12->dev, sizeof(struct pcie_ctx_hw_stats),
       &VAR_9->hw_pcie_stats_map, VAR_7);
 if (!VAR_9->hw_pcie_stats)
  return 0;

 VAR_9->flags |= VAR_0;
 return 0;
}
