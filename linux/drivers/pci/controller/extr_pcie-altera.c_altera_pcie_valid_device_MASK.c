
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_bus {scalar_t__ number; } ;
struct altera_pcie {scalar_t__ root_bus_nr; TYPE_2__* pcie_data; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* get_link_status ) (struct altera_pcie*) ;} ;


 int FUNC_0 (struct altera_pcie*) ;

__attribute__((used)) static bool FUNC_1(struct altera_pcie *VAR_0,
         struct pci_bus *VAR_1, int VAR_2)
{

 if (VAR_1->number != VAR_0->root_bus_nr) {
  if (!VAR_0->pcie_data->ops->get_link_status(VAR_0))
   return 0;
 }


 if (VAR_1->number == VAR_0->root_bus_nr && VAR_2 > 0)
  return 0;

  return 1;
}
