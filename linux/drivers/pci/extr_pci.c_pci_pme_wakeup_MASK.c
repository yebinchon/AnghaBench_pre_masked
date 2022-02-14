
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int pme_poll; int dev; } ;


 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_0, void *VAR_1)
{
 if (VAR_1 && VAR_0->pme_poll)
  VAR_0->pme_poll = 0;

 if (FUNC_0(VAR_0)) {
  FUNC_1(VAR_0);
  FUNC_2(&VAR_0->dev);
 }
 return 0;
}
