
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_dev {int dev; } ;
struct pci_dev {int irq; } ;


 int FUNC_0 (int ,int ,struct rtw_dev*) ;
 int FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_0, struct pci_dev *VAR_1)
{
 FUNC_0(VAR_0->dev, VAR_1->irq, VAR_0);
 FUNC_1(VAR_1);
}
