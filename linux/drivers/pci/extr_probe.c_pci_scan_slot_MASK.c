
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int multifunction; } ;
struct pci_bus {scalar_t__ self; } ;


 unsigned int FUNC_0 (struct pci_bus*,struct pci_dev*,unsigned int) ;
 scalar_t__ FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (struct pci_bus*,int) ;
 int FUNC_4 (scalar_t__) ;

int FUNC_5(struct pci_bus *VAR_0, int VAR_1)
{
 unsigned VAR_2, VAR_3 = 0;
 struct pci_dev *VAR_4;

 if (FUNC_1(VAR_0) && (VAR_1 > 0))
  return 0;

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (!VAR_4)
  return 0;
 if (!FUNC_2(VAR_4))
  VAR_3++;

 for (VAR_2 = FUNC_0(VAR_0, VAR_4, 0); VAR_2 > 0; VAR_2 = FUNC_0(VAR_0, VAR_4, VAR_2)) {
  VAR_4 = FUNC_3(VAR_0, VAR_1 + VAR_2);
  if (VAR_4) {
   if (!FUNC_2(VAR_4))
    VAR_3++;
   VAR_4->multifunction = 1;
  }
 }


 if (VAR_0->self && VAR_3)
  FUNC_4(VAR_0->self);

 return VAR_3;
}
