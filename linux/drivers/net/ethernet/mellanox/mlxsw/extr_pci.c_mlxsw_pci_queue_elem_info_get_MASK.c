
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue_elem_info {int dummy; } ;
struct mlxsw_pci_queue {struct mlxsw_pci_queue_elem_info* elem_info; } ;



__attribute__((used)) static struct mlxsw_pci_queue_elem_info *
FUNC_0(struct mlxsw_pci_queue *VAR_0, int VAR_1)
{
 return &VAR_0->elem_info[VAR_1];
}
