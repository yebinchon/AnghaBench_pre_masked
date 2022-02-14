
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rockchip_pcie {int dummy; } ;
struct rockchip_pcie_ep {int max_regions; scalar_t__* ob_addr; int ob_region_map; struct rockchip_pcie rockchip; } ;
struct pci_epc {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (int,int *) ;
 struct rockchip_pcie_ep* FUNC_1 (struct pci_epc*) ;
 int FUNC_2 (struct rockchip_pcie*,int) ;

__attribute__((used)) static void FUNC_3(struct pci_epc *VAR_0, u8 VAR_1,
     phys_addr_t VAR_2)
{
 struct rockchip_pcie_ep *VAR_3 = FUNC_1(VAR_0);
 struct rockchip_pcie *VAR_4 = &VAR_3->rockchip;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->max_regions - 1; VAR_5++)
  if (VAR_3->ob_addr[VAR_5] == VAR_2)
   break;





 if (VAR_5 == VAR_3->max_regions - 1)
  return;

 FUNC_2(VAR_4, VAR_5);

 VAR_3->ob_addr[VAR_5] = 0;
 FUNC_0(VAR_5, &VAR_3->ob_region_map);
}
