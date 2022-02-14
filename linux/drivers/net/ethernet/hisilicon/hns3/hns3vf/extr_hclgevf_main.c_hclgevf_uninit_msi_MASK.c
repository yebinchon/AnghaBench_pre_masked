
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct hclgevf_dev {int vector_irq; int vector_status; struct pci_dev* pdev; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct hclgevf_dev *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 FUNC_0(&VAR_1->dev, VAR_0->vector_status);
 FUNC_0(&VAR_1->dev, VAR_0->vector_irq);
 FUNC_1(VAR_1);
}
