
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* subordinate; } ;
struct TYPE_2__ {int number; } ;


 struct pci_dev* FUNC_0 (int ,int,unsigned int) ;

__attribute__((used)) static struct pci_dev *FUNC_1(unsigned int VAR_0)
{
 struct pci_dev *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(0, 0, VAR_0);
 if (VAR_1 && VAR_1->subordinate) {
  VAR_2 = VAR_1->subordinate->number;
  return FUNC_0(0, VAR_2, 0);
 }

 return ((void*)0);
}
