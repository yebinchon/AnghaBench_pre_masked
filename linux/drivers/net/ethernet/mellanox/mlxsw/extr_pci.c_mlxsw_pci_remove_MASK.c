
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlxsw_pci {int pdev; int hw_addr; int core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_pci*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 struct mlxsw_pci* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct mlxsw_pci *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(VAR_1->core, 0);
 FUNC_0(VAR_1->hw_addr);
 FUNC_5(VAR_1->pdev);
 FUNC_3(VAR_1->pdev);
 FUNC_1(VAR_1);
}
