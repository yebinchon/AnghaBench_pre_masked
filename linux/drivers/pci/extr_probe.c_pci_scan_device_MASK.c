
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int devfn; int vendor; int device; int bus; } ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pci_bus*,int,int*,int) ;
 int FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;

__attribute__((used)) static struct pci_dev *FUNC_6(struct pci_bus *VAR_0, int VAR_1)
{
 struct pci_dev *VAR_2;
 u32 VAR_3;

 if (!FUNC_3(VAR_0, VAR_1, &VAR_3, 60*1000))
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->devfn = VAR_1;
 VAR_2->vendor = VAR_3 & 0xffff;
 VAR_2->device = (VAR_3 >> 16) & 0xffff;

 FUNC_4(VAR_2);

 if (FUNC_5(VAR_2)) {
  FUNC_2(VAR_2->bus);
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
