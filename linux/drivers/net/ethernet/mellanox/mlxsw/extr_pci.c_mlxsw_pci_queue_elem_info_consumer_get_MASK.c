
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_pci_queue_elem_info {int dummy; } ;
struct mlxsw_pci_queue {int consumer_counter; int count; } ;


 struct mlxsw_pci_queue_elem_info* FUNC_0 (struct mlxsw_pci_queue*,int) ;

__attribute__((used)) static struct mlxsw_pci_queue_elem_info *
FUNC_1(struct mlxsw_pci_queue *VAR_0)
{
 int VAR_1 = VAR_0->consumer_counter & (VAR_0->count - 1);

 return FUNC_0(VAR_0, VAR_1);
}
