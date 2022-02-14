
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_3__ {struct pci_dev* pci; } ;
struct TYPE_4__ {TYPE_1__ c; } ;


 unsigned int VAR_0 ;
 TYPE_2__** VAR_1 ;

struct pci_dev* FUNC_0(unsigned int VAR_2)
{
 if (VAR_2 >= VAR_0)
  return ((void*)0);
 if (!VAR_1[VAR_2])
  return ((void*)0);

 return VAR_1[VAR_2]->c.pci;
}
