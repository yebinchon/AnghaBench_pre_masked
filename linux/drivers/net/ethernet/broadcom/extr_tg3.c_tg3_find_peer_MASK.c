
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {struct pci_dev* pdev; } ;
struct pci_dev {int devfn; int bus; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static struct pci_dev *FUNC_2(struct tg3 *VAR_0)
{
 struct pci_dev *VAR_1;
 unsigned int VAR_2, VAR_3 = VAR_0->pdev->devfn & ~7;

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_1 = FUNC_1(VAR_0->pdev->bus, VAR_3 | VAR_2);
  if (VAR_1 && VAR_1 != VAR_0->pdev)
   break;
  FUNC_0(VAR_1);
 }



 if (!VAR_1) {
  VAR_1 = VAR_0->pdev;
  return VAR_1;
 }





 FUNC_0(VAR_1);

 return VAR_1;
}
