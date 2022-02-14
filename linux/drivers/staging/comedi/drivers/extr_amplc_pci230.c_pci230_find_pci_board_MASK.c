
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct pci230_board {int dummy; } ;


 unsigned int FUNC_0 (struct pci230_board const*) ;
 struct pci230_board const* VAR_0 ;
 scalar_t__ FUNC_1 (struct pci230_board const*,struct pci_dev*) ;

__attribute__((used)) static const struct pci230_board *FUNC_2(struct pci_dev *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (FUNC_1(&VAR_0[VAR_2], VAR_1))
   return &VAR_0[VAR_2];
 return ((void*)0);
}
