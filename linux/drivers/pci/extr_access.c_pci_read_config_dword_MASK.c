
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int devfn; int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;
 scalar_t__ FUNC_1 (struct pci_dev const*) ;

int FUNC_2(const struct pci_dev *VAR_1, int VAR_2,
     u32 *VAR_3)
{
 if (FUNC_1(VAR_1)) {
  *VAR_3 = ~0;
  return VAR_0;
 }
 return FUNC_0(VAR_1->bus, VAR_1->devfn, VAR_2, VAR_3);
}
