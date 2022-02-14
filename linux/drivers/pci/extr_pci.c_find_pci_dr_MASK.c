
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devres {int dummy; } ;
struct pci_dev {int dev; } ;


 struct pci_devres* FUNC_0 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int VAR_0 ;

__attribute__((used)) static struct pci_devres *FUNC_2(struct pci_dev *VAR_1)
{
 if (FUNC_1(VAR_1))
  return FUNC_0(&VAR_1->dev, VAR_0, ((void*)0), ((void*)0));
 return ((void*)0);
}
