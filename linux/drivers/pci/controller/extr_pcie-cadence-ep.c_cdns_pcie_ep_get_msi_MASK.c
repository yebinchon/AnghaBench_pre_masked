
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct pci_epc {int dummy; } ;
struct cdns_pcie {int dummy; } ;
struct cdns_pcie_ep {struct cdns_pcie pcie; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cdns_pcie*,int ,scalar_t__) ;
 struct cdns_pcie_ep* FUNC_1 (struct pci_epc*) ;

__attribute__((used)) static int FUNC_2(struct pci_epc *VAR_5, u8 VAR_6)
{
 struct cdns_pcie_ep *VAR_7 = FUNC_1(VAR_5);
 struct cdns_pcie *VAR_8 = &VAR_7->pcie;
 u32 VAR_9 = VAR_0;
 u16 VAR_10, VAR_11;


 VAR_10 = FUNC_0(VAR_8, VAR_6, VAR_9 + VAR_2);
 if (!(VAR_10 & VAR_3))
  return -VAR_1;





 VAR_11 = (VAR_10 & VAR_4) >> 4;

 return VAR_11;
}
