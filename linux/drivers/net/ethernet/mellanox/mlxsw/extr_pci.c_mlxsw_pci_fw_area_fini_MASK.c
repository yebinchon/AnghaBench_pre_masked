
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_pci_mem_item {int mapaddr; int buf; int size; } ;
struct TYPE_2__ {int count; struct mlxsw_pci_mem_item* items; } ;
struct mlxsw_pci {TYPE_1__ fw_area; int pdev; int core; } ;


 int FUNC_0 (struct mlxsw_pci_mem_item*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_pci *VAR_0)
{
 struct mlxsw_pci_mem_item *VAR_1;
 int VAR_2;

 FUNC_1(VAR_0->core);

 for (VAR_2 = 0; VAR_2 < VAR_0->fw_area.count; VAR_2++) {
  VAR_1 = &VAR_0->fw_area.items[VAR_2];

  FUNC_2(VAR_0->pdev, VAR_1->size,
        VAR_1->buf, VAR_1->mapaddr);
 }
 FUNC_0(VAR_0->fw_area.items);
}
