
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mlxsw_pci_mem_item {int mapaddr; int buf; } ;
struct mlxsw_pci {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_pci *VAR_1,
    struct mlxsw_pci_mem_item *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pdev;

 FUNC_0(VAR_3, VAR_0, VAR_2->buf,
       VAR_2->mapaddr);
}
