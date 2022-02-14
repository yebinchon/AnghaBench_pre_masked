
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* p2pdma; } ;
typedef int pci_bus_addr_t ;
struct TYPE_2__ {int pool; } ;


 int FUNC_0 (int ,unsigned long) ;

pci_bus_addr_t FUNC_1(struct pci_dev *VAR_0, void *VAR_1)
{
 if (!VAR_1)
  return 0;
 if (!VAR_0->p2pdma)
  return 0;






 return FUNC_0(VAR_0->p2pdma->pool, (unsigned long)VAR_1);
}
