
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* sriov; int is_physfn; } ;
typedef int resource_size_t ;
struct TYPE_2__ {int * barsz; } ;


 int VAR_0 ;

resource_size_t FUNC_0(struct pci_dev *VAR_1, int VAR_2)
{
 if (!VAR_1->is_physfn)
  return 0;

 return VAR_1->sriov->barsz[VAR_2 - VAR_0];
}
