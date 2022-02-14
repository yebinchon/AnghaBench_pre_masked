
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct pci_epc {int dev; } ;
struct cdns_pcie {int dummy; } ;
struct cdns_pcie_ep {int max_regions; int * ob_addr; int ob_region_map; struct cdns_pcie pcie; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cdns_pcie*,int ,int,int,int ,int ,size_t) ;
 int FUNC_1 (int *,char*) ;
 struct cdns_pcie_ep* FUNC_2 (struct pci_epc*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct pci_epc *VAR_2, u8 VAR_3, phys_addr_t VAR_4,
     u64 VAR_5, size_t VAR_6)
{
 struct cdns_pcie_ep *VAR_7 = FUNC_2(VAR_2);
 struct cdns_pcie *VAR_8 = &VAR_7->pcie;
 u32 VAR_9;

 VAR_9 = FUNC_3(&VAR_7->ob_region_map,
    sizeof(VAR_7->ob_region_map) * VAR_0);
 if (VAR_9 >= VAR_7->max_regions - 1) {
  FUNC_1(&VAR_2->dev, "no free outbound region\n");
  return -VAR_1;
 }

 FUNC_0(VAR_8, VAR_3, VAR_9, 0, VAR_4, VAR_5, VAR_6);

 FUNC_4(VAR_9, &VAR_7->ob_region_map);
 VAR_7->ob_addr[VAR_9] = VAR_4;

 return 0;
}
