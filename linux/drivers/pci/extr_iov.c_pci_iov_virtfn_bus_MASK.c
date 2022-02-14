
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_2__* sriov; TYPE_1__* bus; int is_physfn; } ;
struct TYPE_4__ {int offset; int stride; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;

int FUNC_0(struct pci_dev *VAR_1, int VAR_2)
{
 if (!VAR_1->is_physfn)
  return -VAR_0;
 return VAR_1->bus->number + ((VAR_1->devfn + VAR_1->sriov->offset +
        VAR_1->sriov->stride * VAR_2) >> 8);
}
