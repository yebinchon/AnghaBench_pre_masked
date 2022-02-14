
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; struct mvebu_pcie* sysdata; } ;
struct mvebu_pcie_port {int bridge; } ;
struct mvebu_pcie {int dummy; } ;


 int VAR_0 ;
 struct mvebu_pcie_port* FUNC_0 (struct mvebu_pcie*,struct pci_bus*,int) ;
 int FUNC_1 (struct mvebu_pcie_port*,struct pci_bus*,int,int,int,int*) ;
 int FUNC_2 (struct mvebu_pcie_port*) ;
 int FUNC_3 (int *,int,int,int*) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_1, u32 VAR_2, int VAR_3,
         int VAR_4, u32 *VAR_5)
{
 struct mvebu_pcie *VAR_6 = VAR_1->sysdata;
 struct mvebu_pcie_port *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_6, VAR_1, VAR_2);
 if (!VAR_7) {
  *VAR_5 = 0xffffffff;
  return VAR_0;
 }


 if (VAR_1->number == 0)
  return FUNC_3(&VAR_7->bridge, VAR_3,
       VAR_4, VAR_5);

 if (!FUNC_2(VAR_7)) {
  *VAR_5 = 0xffffffff;
  return VAR_0;
 }


 VAR_8 = FUNC_1(VAR_7, VAR_1, VAR_2,
        VAR_3, VAR_4, VAR_5);

 return VAR_8;
}
