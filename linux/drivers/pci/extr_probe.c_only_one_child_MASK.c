
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pci_bus {struct pci_dev* self; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->self;





 if (FUNC_0(VAR_0))
  return 0;






 if (VAR_2 && FUNC_1(VAR_2) && FUNC_2(VAR_2))
  return 1;

 return 0;
}
