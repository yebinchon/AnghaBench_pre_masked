
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ devfn; int device; int vendor; } ;


 struct pci_dev* FUNC_0 (int ,int ,struct pci_dev*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct pci_dev *FUNC_2(struct pci_dev *VAR_0)
{
 struct pci_dev *VAR_1;







 VAR_1 = FUNC_0(VAR_0->vendor, VAR_0->device, ((void*)0));
 if (FUNC_1(!VAR_1))
  return ((void*)0);

 if (VAR_1->devfn == VAR_0->devfn) {
  VAR_1 = FUNC_0(VAR_0->vendor, VAR_0->device, VAR_1);
  if (FUNC_1(!VAR_1))
   return ((void*)0);
 }

 return VAR_1;
}
