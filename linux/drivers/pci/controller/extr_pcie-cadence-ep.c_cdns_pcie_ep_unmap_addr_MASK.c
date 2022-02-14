
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_epc {int dummy; } ;
struct cdns_pcie {int dummy; } ;
struct cdns_pcie_ep {int max_regions; scalar_t__* ob_addr; int ob_region_map; struct cdns_pcie pcie; } ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (struct cdns_pcie*,int) ;
 int FUNC_1 (int,int *) ;
 struct cdns_pcie_ep* FUNC_2 (struct pci_epc*) ;

__attribute__((used)) static void FUNC_3(struct pci_epc *VAR_0, u8 VAR_1,
        phys_addr_t VAR_2)
{
 struct cdns_pcie_ep *VAR_3 = FUNC_2(VAR_0);
 struct cdns_pcie *VAR_4 = &VAR_3->pcie;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->max_regions - 1; VAR_5++)
  if (VAR_3->ob_addr[VAR_5] == VAR_2)
   break;

 if (VAR_5 == VAR_3->max_regions - 1)
  return;

 FUNC_0(VAR_4, VAR_5);

 VAR_3->ob_addr[VAR_5] = 0;
 FUNC_1(VAR_5, &VAR_3->ob_region_map);
}
