
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; } ;
struct bnx2x {struct pci_dev* pdev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_0, int VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->pdev;

 return FUNC_0(VAR_2->bus);
}
