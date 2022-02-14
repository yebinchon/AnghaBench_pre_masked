
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue_type_group {int count; int * q; } ;
struct mlxsw_pci_queue_ops {int type; } ;
struct mlxsw_pci {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_pci*,struct mlxsw_pci_queue_ops const*,int *) ;
 struct mlxsw_pci_queue_type_group* FUNC_2 (struct mlxsw_pci*,int ) ;

__attribute__((used)) static void FUNC_3(struct mlxsw_pci *VAR_0,
           const struct mlxsw_pci_queue_ops *VAR_1)
{
 struct mlxsw_pci_queue_type_group *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_0, VAR_1->type);
 for (VAR_3 = 0; VAR_3 < VAR_2->count; VAR_3++)
  FUNC_1(VAR_0, VAR_1, &VAR_2->q[VAR_3]);
 FUNC_0(VAR_2->q);
}
