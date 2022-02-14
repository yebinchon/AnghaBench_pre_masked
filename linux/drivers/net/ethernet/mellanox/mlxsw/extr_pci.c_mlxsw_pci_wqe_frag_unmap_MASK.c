
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlxsw_pci {struct pci_dev* pdev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (char*,int) ;
 size_t FUNC_1 (char*,int) ;
 int FUNC_2 (struct pci_dev*,int ,size_t,int) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_pci *VAR_0, char *VAR_1,
         int VAR_2, int VAR_3)
{
 struct pci_dev *VAR_4 = VAR_0->pdev;
 size_t VAR_5 = FUNC_1(VAR_1, VAR_2);
 dma_addr_t VAR_6 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_5)
  return;
 FUNC_2(VAR_4, VAR_6, VAR_5, VAR_3);
}
