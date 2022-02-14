
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ device; } ;
struct pci230_board {scalar_t__ id; scalar_t__ min_hwver; } ;


 int FUNC_0 (struct pci_dev*,int) ;

__attribute__((used)) static bool FUNC_1(const struct pci230_board *VAR_0,
       struct pci_dev *VAR_1)
{

 if (VAR_0->id != VAR_1->device)
  return 0;
 if (VAR_0->min_hwver == 0)
  return 1;

 if (FUNC_0(VAR_1, 3) < 32)
  return 0;




 return 1;
}
