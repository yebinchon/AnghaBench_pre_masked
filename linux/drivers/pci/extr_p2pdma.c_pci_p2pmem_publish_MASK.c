
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* p2pdma; } ;
struct TYPE_2__ {int p2pmem_published; } ;



void FUNC_0(struct pci_dev *VAR_0, bool VAR_1)
{
 if (VAR_0->p2pdma)
  VAR_0->p2pdma->p2pmem_published = VAR_1;
}
