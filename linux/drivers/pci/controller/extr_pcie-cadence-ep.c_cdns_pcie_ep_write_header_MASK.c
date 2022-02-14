
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_epf_header {int deviceid; int subclass_code; int baseclass_code; int subsys_id; int subsys_vendor_id; int vendorid; int interrupt_pin; int cache_line_size; int progif_code; int revid; } ;
struct pci_epc {int dummy; } ;
struct cdns_pcie {int dummy; } ;
struct cdns_pcie_ep {struct cdns_pcie pcie; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct cdns_pcie*,int ,int ,int ) ;
 int FUNC_3 (struct cdns_pcie*,int ,int ,int) ;
 int FUNC_4 (struct cdns_pcie*,int ,int) ;
 struct cdns_pcie_ep* FUNC_5 (struct pci_epc*) ;

__attribute__((used)) static int FUNC_6(struct pci_epc *VAR_8, u8 VAR_9,
         struct pci_epf_header *VAR_10)
{
 struct cdns_pcie_ep *VAR_11 = FUNC_5(VAR_8);
 struct cdns_pcie *VAR_12 = &VAR_11->pcie;

 FUNC_3(VAR_12, VAR_9, VAR_4, VAR_10->deviceid);
 FUNC_2(VAR_12, VAR_9, VAR_6, VAR_10->revid);
 FUNC_2(VAR_12, VAR_9, VAR_3, VAR_10->progif_code);
 FUNC_3(VAR_12, VAR_9, VAR_2,
          VAR_10->subclass_code | VAR_10->baseclass_code << 8);
 FUNC_2(VAR_12, VAR_9, VAR_1,
          VAR_10->cache_line_size);
 FUNC_3(VAR_12, VAR_9, VAR_7, VAR_10->subsys_id);
 FUNC_2(VAR_12, VAR_9, VAR_5, VAR_10->interrupt_pin);





 if (VAR_9 == 0) {

  u32 VAR_13 = FUNC_1(VAR_10->vendorid) |
    FUNC_0(VAR_10->subsys_vendor_id);

  FUNC_4(VAR_12, VAR_0, VAR_13);
 }

 return 0;
}
