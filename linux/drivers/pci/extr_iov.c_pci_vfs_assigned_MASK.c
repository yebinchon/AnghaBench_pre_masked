
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int vendor; struct pci_dev* physfn; scalar_t__ is_virtfn; TYPE_1__* sriov; int is_physfn; } ;
struct TYPE_2__ {unsigned short vf_device; } ;


 struct pci_dev* FUNC_0 (int ,unsigned short,struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;

int FUNC_2(struct pci_dev *VAR_0)
{
 struct pci_dev *VAR_1;
 unsigned int VAR_2 = 0;
 unsigned short VAR_3;


 if (!VAR_0->is_physfn)
  return 0;





 VAR_3 = VAR_0->sriov->vf_device;


 VAR_1 = FUNC_0(VAR_0->vendor, VAR_3, ((void*)0));
 while (VAR_1) {




  if (VAR_1->is_virtfn && (VAR_1->physfn == VAR_0) &&
   FUNC_1(VAR_1))
   VAR_2++;

  VAR_1 = FUNC_0(VAR_0->vendor, VAR_3, VAR_1);
 }

 return VAR_2;
}
