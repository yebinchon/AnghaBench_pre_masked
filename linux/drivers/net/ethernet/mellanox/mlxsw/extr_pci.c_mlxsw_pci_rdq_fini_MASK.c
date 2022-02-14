
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue_elem_info {int dummy; } ;
struct mlxsw_pci_queue {int count; int num; } ;
struct mlxsw_pci {int core; } ;


 int FUNC_0 (int ,int ) ;
 struct mlxsw_pci_queue_elem_info* FUNC_1 (struct mlxsw_pci_queue*,int) ;
 int FUNC_2 (struct mlxsw_pci*,struct mlxsw_pci_queue_elem_info*) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_pci *VAR_0,
          struct mlxsw_pci_queue *VAR_1)
{
 struct mlxsw_pci_queue_elem_info *VAR_2;
 int VAR_3;

 FUNC_0(VAR_0->core, VAR_1->num);
 for (VAR_3 = 0; VAR_3 < VAR_1->count; VAR_3++) {
  VAR_2 = FUNC_1(VAR_1, VAR_3);
  FUNC_2(VAR_0, VAR_2);
 }
}
