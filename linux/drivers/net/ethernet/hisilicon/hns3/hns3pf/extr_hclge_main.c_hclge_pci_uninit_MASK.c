
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int io_base; } ;
struct hclge_dev {TYPE_1__ hw; struct pci_dev* pdev; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ) ;

__attribute__((used)) static void FUNC_5(struct hclge_dev *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 FUNC_4(VAR_1, VAR_0->hw.io_base);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(VAR_1);
}
