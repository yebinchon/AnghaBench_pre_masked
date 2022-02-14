
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef long u32 ;
struct octeon_device {TYPE_1__* pci_dev; int pf_num; int pcie_port; scalar_t__ chip; } ;
struct octeon_cn23xx_pf {scalar_t__ intr_sum_reg64; scalar_t__ intr_enb_reg64; } ;
struct TYPE_2__ {int dev; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_3 (int) ;
 long FUNC_4 (int) ;
 long FUNC_5 (int) ;
 long FUNC_6 (int) ;
 long FUNC_7 (int) ;
 long FUNC_8 (int) ;
 long FUNC_9 (int) ;
 long FUNC_10 (int) ;
 long FUNC_11 (int) ;
 long FUNC_12 (int) ;
 long FUNC_13 (int) ;
 long FUNC_14 (int) ;
 long VAR_7 ;
 long VAR_8 ;
 long VAR_9 ;
 long FUNC_15 (int,int ) ;
 long VAR_10 ;
 long FUNC_16 (int ) ;
 long VAR_11 ;
 long VAR_12 ;
 int FUNC_17 (long) ;
 int FUNC_18 (int *,char*,char*,int,int ,...) ;
 int FUNC_19 (struct octeon_device*,int ) ;
 long FUNC_20 (struct octeon_device*,long) ;
 long FUNC_21 (struct octeon_device*,long) ;
 int FUNC_22 (TYPE_1__*,long,long*) ;
 long FUNC_23 (scalar_t__) ;

void FUNC_24(struct octeon_device *VAR_13)
{
 int VAR_14 = 0;
 u32 VAR_15 = 0;
 struct octeon_cn23xx_pf *VAR_16 = (struct octeon_cn23xx_pf *)VAR_13->chip;


 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%llx\n",
  "CN23XX_WIN_WR_MASK_REG", FUNC_17(VAR_12),
  FUNC_17(FUNC_21(VAR_13, VAR_12)));
 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n",
  "CN23XX_SLI_SCRATCH1", FUNC_17(VAR_11),
  FUNC_17(FUNC_21(VAR_13, VAR_11)));
 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n",
  "CN23XX_RST_SOFT_RST", VAR_6,
  FUNC_19(VAR_13, VAR_6));


 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n",
  "CN23XX_DPI_DMA_CONTROL", VAR_2,
  FUNC_19(VAR_13, VAR_2));

 for (VAR_14 = 0; VAR_14 < 6; VAR_14++) {
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_DPI_DMA_ENG_ENB", VAR_14,
   FUNC_1(VAR_14),
   FUNC_19(VAR_13, FUNC_1(VAR_14)));
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_DPI_DMA_ENG_BUF", VAR_14,
   FUNC_0(VAR_14),
   FUNC_19(VAR_13, FUNC_0(VAR_14)));
 }

 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n", "CN23XX_DPI_CTL",
  VAR_1, FUNC_19(VAR_13, VAR_1));


 FUNC_22(VAR_13->pci_dev, VAR_0, &VAR_15);
 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n",
  "CN23XX_CONFIG_PCIE_DEVCTL",
  FUNC_17(VAR_0), FUNC_17(VAR_15));

 FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
  "CN23XX_DPI_SLI_PRTX_CFG", VAR_13->pcie_port,
  FUNC_2(VAR_13->pcie_port),
  FUNC_19(VAR_13, FUNC_2(VAR_13->pcie_port)));


 FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
  "CN23XX_SLI_S2M_PORTX_CTL", VAR_13->pcie_port,
  FUNC_17(FUNC_16(VAR_13->pcie_port)),
  FUNC_17(FUNC_21(
   VAR_13, FUNC_16(VAR_13->pcie_port))));

 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n",
  "CN23XX_SLI_RING_RST", FUNC_17(VAR_9),
  (u64)FUNC_21(VAR_13, VAR_9));


 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_PKT_MAC_RINFO64", VAR_14,
   FUNC_17(FUNC_15(VAR_14, VAR_13->pf_num)),
   FUNC_17(FUNC_21
    (VAR_13, FUNC_15
     (VAR_14, VAR_13->pf_num))));
 }


 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_IQ_PKT_CONTROL64", VAR_14,
   FUNC_17(FUNC_6(VAR_14)),
   FUNC_17(FUNC_21
    (VAR_13, FUNC_6(VAR_14))));
 }


 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n",
  "CN23XX_SLI_OQ_WMARK", FUNC_17(VAR_7),
  FUNC_17(FUNC_21(VAR_13, VAR_7)));

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_OQ_PKT_CONTROL", VAR_14,
   FUNC_17(FUNC_12(VAR_14)),
   FUNC_17(FUNC_20(
    VAR_13, FUNC_12(VAR_14))));
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_OQ_PKT_INT_LEVELS", VAR_14,
   FUNC_17(FUNC_13(VAR_14)),
   FUNC_17(FUNC_21(
    VAR_13, FUNC_13(VAR_14))));
 }


 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n",
  "cn23xx->intr_enb_reg64",
  FUNC_17((long)(VAR_16->intr_enb_reg64)),
  FUNC_17(FUNC_23(VAR_16->intr_enb_reg64)));

 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n",
  "cn23xx->intr_sum_reg64",
  FUNC_17((long)(VAR_16->intr_sum_reg64)),
  FUNC_17(FUNC_23(VAR_16->intr_sum_reg64)));


 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_IQ_BASE_ADDR64", VAR_14,
   FUNC_17(FUNC_3(VAR_14)),
   FUNC_17(FUNC_21(
    VAR_13, FUNC_3(VAR_14))));
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_IQ_SIZE", VAR_14,
   FUNC_17(FUNC_7(VAR_14)),
   FUNC_17(FUNC_20
    (VAR_13, FUNC_7(VAR_14))));
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_IQ_DOORBELL", VAR_14,
   FUNC_17(FUNC_4(VAR_14)),
   FUNC_17(FUNC_21(
    VAR_13, FUNC_4(VAR_14))));
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_IQ_INSTR_COUNT64", VAR_14,
   FUNC_17(FUNC_5(VAR_14)),
   FUNC_17(FUNC_21(
    VAR_13, FUNC_5(VAR_14))));
 }


 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_OQ_BASE_ADDR64", VAR_14,
   FUNC_17(FUNC_8(VAR_14)),
   FUNC_17(FUNC_21(
    VAR_13, FUNC_8(VAR_14))));
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_OQ_SIZE", VAR_14,
   FUNC_17(FUNC_14(VAR_14)),
   FUNC_17(FUNC_20
    (VAR_13, FUNC_14(VAR_14))));
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_OQ_BUFF_INFO_SIZE", VAR_14,
   FUNC_17(FUNC_9(VAR_14)),
   FUNC_17(FUNC_20(
    VAR_13, FUNC_9(VAR_14))));
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_OQ_PKTS_SENT", VAR_14,
   FUNC_17(FUNC_11(VAR_14)),
   FUNC_17(FUNC_21(
    VAR_13, FUNC_11(VAR_14))));
  FUNC_18(&VAR_13->pci_dev->dev, "%s(%d)[%llx] : 0x%016llx\n",
   "CN23XX_SLI_OQ_PKTS_CREDIT", VAR_14,
   FUNC_17(FUNC_10(VAR_14)),
   FUNC_17(FUNC_21(
    VAR_13, FUNC_10(VAR_14))));
 }

 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n",
  "CN23XX_SLI_PKT_TIME_INT",
  FUNC_17(VAR_10),
  FUNC_17(FUNC_21(VAR_13, VAR_10)));
 FUNC_18(&VAR_13->pci_dev->dev, "%s[%llx] : 0x%016llx\n",
  "CN23XX_SLI_PKT_CNT_INT",
  FUNC_17(VAR_8),
  FUNC_17(FUNC_21(VAR_13, VAR_8)));
}
