
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r852_device {struct r852_device* chip; int phys_bounce_buffer; int bounce_buffer; int mmio; struct r852_device* tmp_buffer; int irq; int card_workqueue; int card_detect_work; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int ,struct r852_device*) ;
 int FUNC_4 (struct r852_device*) ;
 int FUNC_5 (struct pci_dev*) ;
 struct r852_device* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct r852_device*) ;
 int FUNC_10 (struct r852_device*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_1)
{
 struct r852_device *VAR_2 = FUNC_6(VAR_1);



 FUNC_0(&VAR_2->card_detect_work);
 FUNC_1(VAR_2->card_workqueue);


 FUNC_10(VAR_2);


 FUNC_9(VAR_2);
 FUNC_3(VAR_2->irq, VAR_2);


 FUNC_4(VAR_2->tmp_buffer);
 FUNC_7(VAR_1, VAR_2->mmio);
 FUNC_2(&VAR_1->dev, VAR_0, VAR_2->bounce_buffer,
     VAR_2->phys_bounce_buffer);

 FUNC_4(VAR_2->chip);
 FUNC_4(VAR_2);


 FUNC_8(VAR_1);
 FUNC_5(VAR_1);
}
