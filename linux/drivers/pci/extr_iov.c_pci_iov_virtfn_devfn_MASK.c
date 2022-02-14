
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_1__* sriov; int is_physfn; } ;
struct TYPE_2__ {int offset; int stride; } ;


 int VAR_0 ;

int FUNC_0(struct pci_dev *VAR_1, int VAR_2)
{
 if (!VAR_1->is_physfn)
  return -VAR_0;
 return (VAR_1->devfn + VAR_1->sriov->offset +
  VAR_1->sriov->stride * VAR_2) & 0xff;
}
