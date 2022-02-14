
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r852_device {int irq; int card_detect_work; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*) ;
 struct r852_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct r852_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 struct r852_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->card_detect_work);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1->irq);
 FUNC_1(VAR_0);
}
