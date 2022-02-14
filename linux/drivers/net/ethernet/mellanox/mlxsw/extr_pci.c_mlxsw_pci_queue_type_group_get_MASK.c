
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue_type_group {int dummy; } ;
struct mlxsw_pci {struct mlxsw_pci_queue_type_group* queues; } ;
typedef enum mlxsw_pci_queue_type { ____Placeholder_mlxsw_pci_queue_type } mlxsw_pci_queue_type ;



__attribute__((used)) static struct mlxsw_pci_queue_type_group *
FUNC_0(struct mlxsw_pci *VAR_0,
          enum mlxsw_pci_queue_type VAR_1)
{
 return &VAR_0->queues[VAR_1];
}
