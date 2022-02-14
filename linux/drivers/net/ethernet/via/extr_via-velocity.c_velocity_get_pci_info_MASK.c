
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct velocity_info {void* memaddr; void* ioaddr; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int) ;
 void* FUNC_3 (struct pci_dev*,int) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct velocity_info *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_3->pdev;

 FUNC_4(VAR_4);

 VAR_3->ioaddr = FUNC_3(VAR_4, 0);
 VAR_3->memaddr = FUNC_3(VAR_4, 1);

 if (!(FUNC_1(VAR_4, 0) & VAR_1)) {
  FUNC_0(&VAR_4->dev,
      "region #0 is not an I/O resource, aborting.\n");
  return -VAR_0;
 }

 if ((FUNC_1(VAR_4, 1) & VAR_1)) {
  FUNC_0(&VAR_4->dev,
      "region #1 is an I/O resource, aborting.\n");
  return -VAR_0;
 }

 if (FUNC_2(VAR_4, 1) < VAR_2) {
  FUNC_0(&VAR_4->dev, "region #1 is too small.\n");
  return -VAR_0;
 }

 return 0;
}
