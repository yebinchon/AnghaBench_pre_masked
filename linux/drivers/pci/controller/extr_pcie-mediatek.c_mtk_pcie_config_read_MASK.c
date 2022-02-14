
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int number; } ;
struct mtk_pcie_port {int dummy; } ;


 int VAR_0 ;
 struct mtk_pcie_port* FUNC_0 (struct pci_bus*,unsigned int) ;
 int FUNC_1 (struct mtk_pcie_port*,int ,unsigned int,int,int,int *) ;

__attribute__((used)) static int FUNC_2(struct pci_bus *VAR_1, unsigned int VAR_2,
    int VAR_3, int VAR_4, u32 *VAR_5)
{
 struct mtk_pcie_port *VAR_6;
 u32 VAR_7 = VAR_1->number;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_6) {
  *VAR_5 = ~0;
  return VAR_0;
 }

 VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_8)
  *VAR_5 = ~0;

 return VAR_8;
}
