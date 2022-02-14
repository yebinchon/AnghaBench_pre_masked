
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_pci_queue_type_group {int count; } ;
struct mlxsw_pci {int dummy; } ;
typedef enum mlxsw_pci_queue_type { ____Placeholder_mlxsw_pci_queue_type } mlxsw_pci_queue_type ;


 struct mlxsw_pci_queue_type_group* FUNC_0 (struct mlxsw_pci*,int) ;

__attribute__((used)) static u8 FUNC_1(struct mlxsw_pci *VAR_0,
      enum mlxsw_pci_queue_type VAR_1)
{
 struct mlxsw_pci_queue_type_group *VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2->count;
}
