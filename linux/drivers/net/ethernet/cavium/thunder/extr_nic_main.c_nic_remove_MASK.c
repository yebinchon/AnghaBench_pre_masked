
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nicpf {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicpf*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct nicpf* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct nicpf *VAR_2 = FUNC_3(VAR_1);

 if (!VAR_2)
  return;

 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_1);

 FUNC_0(VAR_2);
 FUNC_4(VAR_1);

 FUNC_1(VAR_1);
 FUNC_5(VAR_1, ((void*)0));
}
