
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct enetc_hw {scalar_t__ reg; scalar_t__ global; scalar_t__ port; } ;
struct enetc_si {int pad; struct enetc_hw hw; struct pci_dev* pdev; } ;


 size_t FUNC_0 (size_t,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct enetc_si* FUNC_2 (struct enetc_si*,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct enetc_si*) ;
 int FUNC_6 (struct enetc_si*) ;
 scalar_t__ FUNC_7 (int ,int) ;
 struct enetc_si* FUNC_8 (size_t,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,char const*) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,struct enetc_si*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*) ;

int FUNC_18(struct pci_dev *VAR_7, const char *VAR_8, int VAR_9)
{
 struct enetc_si *VAR_10, *VAR_11;
 struct enetc_hw *VAR_12;
 size_t VAR_13;
 int VAR_14, VAR_15;

 FUNC_17(VAR_7);
 VAR_14 = FUNC_10(VAR_7);
 if (VAR_14) {
  FUNC_3(&VAR_7->dev, "device enable failed\n");
  return VAR_14;
 }


 VAR_14 = FUNC_4(&VAR_7->dev, FUNC_1(64));
 if (VAR_14) {
  VAR_14 = FUNC_4(&VAR_7->dev, FUNC_1(32));
  if (VAR_14) {
   FUNC_3(&VAR_7->dev,
    "DMA configuration failed: 0x%x\n", VAR_14);
   goto err_dma;
  }
 }

 VAR_14 = FUNC_12(VAR_7, VAR_8);
 if (VAR_14) {
  FUNC_3(&VAR_7->dev, "pci_request_regions failed err=%d\n", VAR_14);
  goto err_pci_mem_reg;
 }

 FUNC_16(VAR_7);

 VAR_13 = sizeof(struct enetc_si);
 if (VAR_9) {

  VAR_13 = FUNC_0(VAR_13, VAR_3);
  VAR_13 += VAR_9;
 }

 VAR_13 += VAR_3 - 1;

 VAR_11 = FUNC_8(VAR_13, VAR_6);
 if (!VAR_11) {
  VAR_14 = -VAR_4;
  goto err_alloc_si;
 }

 VAR_10 = FUNC_2(VAR_11, VAR_3);
 VAR_10->pad = (char *)VAR_10 - (char *)VAR_11;

 FUNC_15(VAR_7, VAR_10);
 VAR_10->pdev = VAR_7;
 VAR_12 = &VAR_10->hw;

 VAR_15 = FUNC_13(VAR_7, VAR_0);
 VAR_12->reg = FUNC_7(FUNC_14(VAR_7, VAR_0), VAR_15);
 if (!VAR_12->reg) {
  VAR_14 = -VAR_5;
  FUNC_3(&VAR_7->dev, "ioremap() failed\n");
  goto err_ioremap;
 }
 if (VAR_15 > VAR_2)
  VAR_12->port = VAR_12->reg + VAR_2;
 if (VAR_15 > VAR_1)
  VAR_12->global = VAR_12->reg + VAR_1;

 FUNC_5(VAR_10);

 return 0;

err_ioremap:
 FUNC_6(VAR_10);
err_alloc_si:
 FUNC_11(VAR_7);
err_pci_mem_reg:
err_dma:
 FUNC_9(VAR_7);

 return VAR_14;
}
