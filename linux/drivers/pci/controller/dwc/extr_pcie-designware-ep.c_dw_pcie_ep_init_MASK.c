
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef unsigned int u32 ;
struct pci_epc {int max_functions; TYPE_2__* mem; } ;
struct dw_pcie_ep {void* msix_cap; void* msi_cap; int msi_mem; int msi_mem_phys; int page_size; int addr_size; int phys_base; TYPE_1__* ops; struct pci_epc* epc; void* outbound_addr; int num_ob_windows; void* ob_window_map; void* ib_window_map; int num_ib_windows; } ;
struct dw_pcie {struct device* dev; int dbi_base2; int dbi_base; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef int phys_addr_t ;
struct TYPE_4__ {int page_size; } ;
struct TYPE_3__ {int (* ep_init ) (struct dw_pcie_ep*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct pci_epc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 int FUNC_2 (struct pci_epc*) ;
 int FUNC_3 (struct pci_epc*,int ,int ,int ) ;
 int FUNC_4 (struct device*,char*,...) ;
 void* FUNC_5 (struct device*,int ,int,int ) ;
 struct pci_epc* FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct dw_pcie*) ;
 int FUNC_8 (struct dw_pcie*) ;
 unsigned int FUNC_9 (struct dw_pcie*,int ) ;
 void* FUNC_10 (struct dw_pcie*,int ) ;
 scalar_t__ FUNC_11 (struct dw_pcie*,int ) ;
 unsigned int FUNC_12 (struct dw_pcie*,scalar_t__) ;
 int FUNC_13 (struct dw_pcie*) ;
 int FUNC_14 (struct dw_pcie*,scalar_t__,int) ;
 int VAR_15 ;
 int FUNC_15 (struct pci_epc*,struct dw_pcie_ep*) ;
 int FUNC_16 (struct device_node*,char*,int *) ;
 int FUNC_17 (struct device_node*,char*,int*) ;
 int FUNC_18 (struct pci_epc*,int *,int ) ;
 int FUNC_19 (struct dw_pcie_ep*) ;
 struct dw_pcie* FUNC_20 (struct dw_pcie_ep*) ;

int FUNC_21(struct dw_pcie_ep *VAR_16)
{
 int VAR_17;
 int VAR_18;
 u32 VAR_19;
 void *VAR_20;
 u8 VAR_21;
 unsigned int VAR_22;
 unsigned int VAR_23;
 struct pci_epc *VAR_24;
 struct dw_pcie *VAR_25 = FUNC_20(VAR_16);
 struct device *VAR_26 = VAR_25->dev;
 struct device_node *VAR_27 = VAR_26->of_node;

 if (!VAR_25->dbi_base || !VAR_25->dbi_base2) {
  FUNC_4(VAR_26, "dbi_base/dbi_base2 is not populated\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_16(VAR_27, "num-ib-windows", &VAR_16->num_ib_windows);
 if (VAR_18 < 0) {
  FUNC_4(VAR_26, "Unable to read *num-ib-windows* property\n");
  return VAR_18;
 }
 if (VAR_16->num_ib_windows > VAR_4) {
  FUNC_4(VAR_26, "Invalid *num-ib-windows*\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_16(VAR_27, "num-ob-windows", &VAR_16->num_ob_windows);
 if (VAR_18 < 0) {
  FUNC_4(VAR_26, "Unable to read *num-ob-windows* property\n");
  return VAR_18;
 }
 if (VAR_16->num_ob_windows > VAR_5) {
  FUNC_4(VAR_26, "Invalid *num-ob-windows*\n");
  return -VAR_0;
 }

 VAR_16->ib_window_map = FUNC_5(VAR_26,
      FUNC_0(VAR_16->num_ib_windows),
      sizeof(long),
      VAR_3);
 if (!VAR_16->ib_window_map)
  return -VAR_2;

 VAR_16->ob_window_map = FUNC_5(VAR_26,
      FUNC_0(VAR_16->num_ob_windows),
      sizeof(long),
      VAR_3);
 if (!VAR_16->ob_window_map)
  return -VAR_2;

 VAR_20 = FUNC_5(VAR_26, VAR_16->num_ob_windows, sizeof(phys_addr_t),
       VAR_3);
 if (!VAR_20)
  return -VAR_2;
 VAR_16->outbound_addr = VAR_20;

 VAR_24 = FUNC_6(VAR_26, &VAR_15);
 if (FUNC_1(VAR_24)) {
  FUNC_4(VAR_26, "Failed to create epc device\n");
  return FUNC_2(VAR_24);
 }

 VAR_16->epc = VAR_24;
 FUNC_15(VAR_24, VAR_16);

 if (VAR_16->ops->ep_init)
  VAR_16->ops->ep_init(VAR_16);

 VAR_21 = FUNC_11(VAR_25, VAR_9);
 if (VAR_21 != VAR_10) {
  FUNC_4(VAR_25->dev, "PCIe controller is not set to EP mode (hdr_type:0x%x)!\n",
   VAR_21);
  return -VAR_1;
 }

 VAR_18 = FUNC_17(VAR_27, "max-functions", &VAR_24->max_functions);
 if (VAR_18 < 0)
  VAR_24->max_functions = 1;

 VAR_18 = FUNC_3(VAR_24, VAR_16->phys_base, VAR_16->addr_size,
     VAR_16->page_size);
 if (VAR_18 < 0) {
  FUNC_4(VAR_26, "Failed to initialize address space\n");
  return VAR_18;
 }

 VAR_16->msi_mem = FUNC_18(VAR_24, &VAR_16->msi_mem_phys,
          VAR_24->mem->page_size);
 if (!VAR_16->msi_mem) {
  FUNC_4(VAR_26, "Failed to reserve memory for MSI/MSI-X\n");
  return -VAR_2;
 }
 VAR_16->msi_cap = FUNC_10(VAR_25, VAR_6);

 VAR_16->msix_cap = FUNC_10(VAR_25, VAR_7);

 VAR_23 = FUNC_9(VAR_25, VAR_8);
 if (VAR_23) {
  VAR_19 = FUNC_12(VAR_25, VAR_23 + VAR_12);
  VAR_22 = (VAR_19 & VAR_13) >>
   VAR_14;

  FUNC_8(VAR_25);
  for (VAR_17 = 0; VAR_17 < VAR_22; VAR_17++, VAR_23 += VAR_12)
   FUNC_14(VAR_25, VAR_23 + VAR_11, 0x0);
  FUNC_7(VAR_25);
 }

 FUNC_13(VAR_25);

 return 0;
}
