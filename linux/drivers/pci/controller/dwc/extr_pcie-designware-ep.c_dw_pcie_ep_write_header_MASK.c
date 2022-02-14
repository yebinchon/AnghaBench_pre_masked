
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_epf_header {int vendorid; int deviceid; int subclass_code; int baseclass_code; int subsys_vendor_id; int subsys_id; int interrupt_pin; int cache_line_size; int progif_code; int revid; } ;
struct pci_epc {int dummy; } ;
struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct dw_pcie*) ;
 int FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (struct dw_pcie*,int ,int ) ;
 int FUNC_3 (struct dw_pcie*,int ,int) ;
 struct dw_pcie_ep* FUNC_4 (struct pci_epc*) ;
 struct dw_pcie* FUNC_5 (struct dw_pcie_ep*) ;

__attribute__((used)) static int FUNC_6(struct pci_epc *VAR_9, u8 VAR_10,
       struct pci_epf_header *VAR_11)
{
 struct dw_pcie_ep *VAR_12 = FUNC_4(VAR_9);
 struct dw_pcie *VAR_13 = FUNC_5(VAR_12);

 FUNC_1(VAR_13);
 FUNC_3(VAR_13, VAR_8, VAR_11->vendorid);
 FUNC_3(VAR_13, VAR_3, VAR_11->deviceid);
 FUNC_2(VAR_13, VAR_5, VAR_11->revid);
 FUNC_2(VAR_13, VAR_2, VAR_11->progif_code);
 FUNC_3(VAR_13, VAR_1,
      VAR_11->subclass_code | VAR_11->baseclass_code << 8);
 FUNC_2(VAR_13, VAR_0,
      VAR_11->cache_line_size);
 FUNC_3(VAR_13, VAR_7,
      VAR_11->subsys_vendor_id);
 FUNC_3(VAR_13, VAR_6, VAR_11->subsys_id);
 FUNC_2(VAR_13, VAR_4,
      VAR_11->interrupt_pin);
 FUNC_0(VAR_13);

 return 0;
}
