
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ism_dev {int smcd; struct pci_dev* pdev; } ;


 int FUNC_0 (int ,struct ism_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ism_dev*) ;
 int FUNC_5 (struct ism_dev*) ;

__attribute__((used)) static void FUNC_6(struct ism_dev *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 FUNC_3(VAR_0->smcd);
 FUNC_4(VAR_0);
 FUNC_5(VAR_0);
 FUNC_0(FUNC_2(VAR_1, 0), VAR_0);
 FUNC_1(VAR_1);
}
