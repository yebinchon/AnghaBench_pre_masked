
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlxsw_pci_queue {int dummy; } ;
struct mlxsw_pci {TYPE_1__* queues; } ;
typedef enum mlxsw_pci_queue_type { ____Placeholder_mlxsw_pci_queue_type } mlxsw_pci_queue_type ;
struct TYPE_2__ {struct mlxsw_pci_queue* q; } ;



__attribute__((used)) static struct mlxsw_pci_queue *
FUNC_0(struct mlxsw_pci *VAR_0,
        enum mlxsw_pci_queue_type VAR_1, u8 VAR_2)
{
 return &VAR_0->queues[VAR_1].q[VAR_2];
}
