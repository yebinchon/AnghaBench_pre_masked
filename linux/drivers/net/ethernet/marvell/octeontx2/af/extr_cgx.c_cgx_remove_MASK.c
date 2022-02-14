
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct cgx {int cgx_list; } ;


 int FUNC_0 (struct cgx*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct cgx* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_0)
{
 struct cgx *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->cgx_list);
 FUNC_3(VAR_0);
 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
 FUNC_6(VAR_0, ((void*)0));
}
