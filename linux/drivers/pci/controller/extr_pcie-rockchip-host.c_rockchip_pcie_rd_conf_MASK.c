
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_pcie {scalar_t__ root_bus_nr; } ;
struct pci_bus {scalar_t__ number; struct rockchip_pcie* sysdata; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rockchip_pcie*,struct pci_bus*,int,int,int,int*) ;
 int FUNC_2 (struct rockchip_pcie*,int,int,int*) ;
 int FUNC_3 (struct rockchip_pcie*,struct pci_bus*,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_1, u32 VAR_2, int VAR_3,
     int VAR_4, u32 *VAR_5)
{
 struct rockchip_pcie *VAR_6 = VAR_1->sysdata;

 if (!FUNC_3(VAR_6, VAR_1, FUNC_0(VAR_2))) {
  *VAR_5 = 0xffffffff;
  return VAR_0;
 }

 if (VAR_1->number == VAR_6->root_bus_nr)
  return FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);

 return FUNC_1(VAR_6, VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_5);
}
