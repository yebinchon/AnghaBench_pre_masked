
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev_reset_methods {int (* reset ) (struct pci_dev*,int) ;scalar_t__ vendor; scalar_t__ device; } ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_dev_reset_methods* VAR_2 ;
 int FUNC_0 (struct pci_dev*,int) ;

int FUNC_1(struct pci_dev *VAR_3, int VAR_4)
{
 const struct pci_dev_reset_methods *VAR_5;

 for (VAR_5 = VAR_2; VAR_5->reset; VAR_5++) {
  if ((VAR_5->vendor == VAR_3->vendor ||
       VAR_5->vendor == (u16)VAR_1) &&
      (VAR_5->device == VAR_3->device ||
       VAR_5->device == (u16)VAR_1))
   return VAR_5->reset(VAR_3, VAR_4);
 }

 return -VAR_0;
}
