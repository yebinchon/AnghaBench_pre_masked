
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct esb_dev {int pdev; int base; int wdd; } ;


 struct esb_dev* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct esb_dev *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_4(&VAR_1->wdd);
 FUNC_1(VAR_1->base);
 FUNC_3(VAR_1->pdev, 0);
 FUNC_2(VAR_1->pdev);
}
