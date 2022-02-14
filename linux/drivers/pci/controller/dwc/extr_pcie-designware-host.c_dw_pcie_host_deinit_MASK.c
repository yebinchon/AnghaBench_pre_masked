
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcie_port {TYPE_1__* ops; int root_bus; } ;
struct TYPE_2__ {int msi_host_init; } ;


 int FUNC_0 (struct pcie_port*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct pcie_port *VAR_0)
{
 FUNC_3(VAR_0->root_bus);
 FUNC_2(VAR_0->root_bus);
 if (FUNC_1() && !VAR_0->ops->msi_host_init)
  FUNC_0(VAR_0);
}
