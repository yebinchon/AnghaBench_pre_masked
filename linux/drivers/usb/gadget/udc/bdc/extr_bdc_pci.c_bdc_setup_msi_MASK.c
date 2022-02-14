
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_1("failed to allocate MSI entry\n");
  return VAR_1;
 }

 return VAR_1;
}
