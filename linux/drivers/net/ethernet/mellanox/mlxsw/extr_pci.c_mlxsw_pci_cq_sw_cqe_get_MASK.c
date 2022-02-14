
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlxsw_pci_queue_elem_info {char* elem; } ;
struct TYPE_3__ {int v; } ;
struct TYPE_4__ {TYPE_1__ cq; } ;
struct mlxsw_pci_queue {int consumer_counter; TYPE_2__ u; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct mlxsw_pci_queue*,int) ;
 struct mlxsw_pci_queue_elem_info* FUNC_2 (struct mlxsw_pci_queue*) ;
 int FUNC_3 () ;

__attribute__((used)) static char *FUNC_4(struct mlxsw_pci_queue *VAR_0)
{
 struct mlxsw_pci_queue_elem_info *VAR_1;
 char *VAR_2;
 bool VAR_3;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = VAR_1->elem;
 VAR_3 = FUNC_0(VAR_0->u.cq.v, VAR_2);
 if (FUNC_1(VAR_0, VAR_3))
  return ((void*)0);
 VAR_0->consumer_counter++;
 FUNC_3();
 return VAR_2;
}
