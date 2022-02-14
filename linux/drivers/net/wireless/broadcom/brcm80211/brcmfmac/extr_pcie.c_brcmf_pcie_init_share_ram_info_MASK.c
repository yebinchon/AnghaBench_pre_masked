
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct brcmf_pcie_shared_info {int flags; scalar_t__ version; scalar_t__ max_rxbufpost; void* rx_dataoffset; void* ring_info_addr; void* dtoh_mb_data_addr; void* htod_mb_data_addr; scalar_t__ tcm_base_address; } ;
struct brcmf_pciedev_info {int dma_idx_sz; struct brcmf_pcie_shared_info shared; TYPE_1__* pdev; } ;
struct brcmf_bus {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int FUNC_1 (struct brcmf_bus*,char*,scalar_t__) ;
 int FUNC_2 (struct brcmf_pciedev_info*) ;
 scalar_t__ FUNC_3 (struct brcmf_pciedev_info*,scalar_t__) ;
 void* FUNC_4 (struct brcmf_pciedev_info*,scalar_t__) ;
 struct brcmf_bus* FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct brcmf_pciedev_info *VAR_13,
          u32 VAR_14)
{
 struct brcmf_bus *VAR_15 = FUNC_5(&VAR_13->pdev->dev);
 struct brcmf_pcie_shared_info *VAR_16;
 u32 VAR_17;

 VAR_16 = &VAR_13->shared;
 VAR_16->tcm_base_address = VAR_14;

 VAR_16->flags = FUNC_4(VAR_13, VAR_14);
 VAR_16->version = (u8)(VAR_16->flags & VAR_5);
 FUNC_0(VAR_12, "PCIe protocol version %d\n", VAR_16->version);
 if ((VAR_16->version > VAR_1) ||
     (VAR_16->version < VAR_2)) {
  FUNC_1(VAR_15, "Unsupported PCIE version %d\n",
     VAR_16->version);
  return -VAR_11;
 }


 if (VAR_16->flags & VAR_4) {
  if (VAR_16->flags & VAR_3)
   VAR_13->dma_idx_sz = sizeof(u16);
  else
   VAR_13->dma_idx_sz = sizeof(u32);
 }

 VAR_17 = VAR_14 + VAR_8;
 VAR_16->max_rxbufpost = FUNC_3(VAR_13, VAR_17);
 if (VAR_16->max_rxbufpost == 0)
  VAR_16->max_rxbufpost = VAR_0;

 VAR_17 = VAR_14 + VAR_10;
 VAR_16->rx_dataoffset = FUNC_4(VAR_13, VAR_17);

 VAR_17 = VAR_14 + VAR_7;
 VAR_16->htod_mb_data_addr = FUNC_4(VAR_13, VAR_17);

 VAR_17 = VAR_14 + VAR_6;
 VAR_16->dtoh_mb_data_addr = FUNC_4(VAR_13, VAR_17);

 VAR_17 = VAR_14 + VAR_9;
 VAR_16->ring_info_addr = FUNC_4(VAR_13, VAR_17);

 FUNC_0(VAR_12, "max rx buf post %d, rx dataoffset %d\n",
    VAR_16->max_rxbufpost, VAR_16->rx_dataoffset);

 FUNC_2(VAR_13);

 return 0;
}
