
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ subordinate; } ;


 int FUNC_0 (scalar_t__,int (*) (struct pci_dev*,int *),int *) ;
 int FUNC_1 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 FUNC_1(VAR_0, ((void*)0));
 if (VAR_0->subordinate)
  FUNC_0(VAR_0->subordinate, FUNC_1, ((void*)0));
}
