
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct pci_dev_acs_ops {scalar_t__ vendor; scalar_t__ device; int (* enable_acs ) (struct pci_dev*) ;} ;
struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;


 int FUNC_0 (struct pci_dev_acs_ops*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct pci_dev_acs_ops* VAR_2 ;
 int FUNC_1 (struct pci_dev*) ;

int FUNC_2(struct pci_dev *VAR_3)
{
 const struct pci_dev_acs_ops *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  VAR_4 = &VAR_2[VAR_5];
  if ((VAR_4->vendor == VAR_3->vendor ||
       VAR_4->vendor == (u16)VAR_1) &&
      (VAR_4->device == VAR_3->device ||
       VAR_4->device == (u16)VAR_1) &&
      VAR_4->enable_acs) {
   VAR_6 = VAR_4->enable_acs(VAR_3);
   if (VAR_6 >= 0)
    return VAR_6;
  }
 }

 return -VAR_0;
}
