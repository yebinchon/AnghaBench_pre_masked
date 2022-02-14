
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct rockchip_pcie {int dummy; } ;
struct rockchip_pcie_ep {int max_regions; int * ob_addr; int ob_region_map; struct rockchip_pcie rockchip; } ;
struct pci_epc {int dev; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct rockchip_pcie_ep* FUNC_1 (struct pci_epc*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct rockchip_pcie*,int ,int,int ,int ,int ,size_t) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(struct pci_epc *VAR_3, u8 VAR_4,
         phys_addr_t VAR_5, u64 VAR_6,
         size_t VAR_7)
{
 struct rockchip_pcie_ep *VAR_8 = FUNC_1(VAR_3);
 struct rockchip_pcie *VAR_9 = &VAR_8->rockchip;
 u32 VAR_10;

 VAR_10 = FUNC_2(&VAR_8->ob_region_map,
    sizeof(VAR_8->ob_region_map) * VAR_1);




 if (VAR_10 >= VAR_8->max_regions - 1) {
  FUNC_0(&VAR_3->dev, "no free outbound region\n");
  return -VAR_2;
 }

 FUNC_3(VAR_9, VAR_4, VAR_10, VAR_0, VAR_5,
         VAR_6, VAR_7);

 FUNC_4(VAR_10, &VAR_8->ob_region_map);
 VAR_8->ob_addr[VAR_10] = VAR_5;

 return 0;
}
