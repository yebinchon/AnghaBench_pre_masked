
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue_ops {int (* fini ) (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;} ;
struct mlxsw_pci_mem_item {int mapaddr; int buf; int size; } ;
struct mlxsw_pci_queue {int elem_info; struct mlxsw_pci_mem_item mem_item; } ;
struct mlxsw_pci {int pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct mlxsw_pci*,struct mlxsw_pci_queue*) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_pci *VAR_0,
     const struct mlxsw_pci_queue_ops *VAR_1,
     struct mlxsw_pci_queue *VAR_2)
{
 struct mlxsw_pci_mem_item *VAR_3 = &VAR_2->mem_item;

 VAR_1->fini(VAR_0, VAR_2);
 FUNC_0(VAR_2->elem_info);
 FUNC_1(VAR_0->pdev, VAR_3->size,
       VAR_3->buf, VAR_3->mapaddr);
}
