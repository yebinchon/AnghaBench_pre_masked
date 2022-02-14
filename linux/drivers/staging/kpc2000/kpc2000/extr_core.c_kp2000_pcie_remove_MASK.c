
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct kp2000_device {int card_num; int sem; TYPE_2__* pdev; int * regs_bar_base; int * dma_bar_base; } ;
struct TYPE_5__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct kp2000_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct kp2000_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kp2000_device*) ;
 int FUNC_5 (struct kp2000_device*) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 struct kp2000_device* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int *) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_4)
{
 struct kp2000_device *VAR_5 = FUNC_11(VAR_4);

 if (!VAR_5)
  return;

 FUNC_7(&VAR_5->sem);
 FUNC_5(VAR_5);
 FUNC_6(FUNC_0(VAR_5));
 FUNC_14(&VAR_4->dev.kobj, VAR_3);
 FUNC_1(VAR_5->pdev->irq, VAR_5);
 FUNC_10(VAR_5->pdev);
 if (VAR_5->dma_bar_base) {
  FUNC_3(VAR_5->dma_bar_base);
  FUNC_12(VAR_4, VAR_0);
  VAR_5->dma_bar_base = ((void*)0);
 }
 if (VAR_5->regs_bar_base) {
  FUNC_3(VAR_5->regs_bar_base);
  FUNC_12(VAR_4, VAR_1);
  VAR_5->regs_bar_base = ((void*)0);
 }
 FUNC_9(VAR_5->pdev);
 FUNC_13(VAR_4, ((void*)0));
 FUNC_8(&VAR_5->sem);
 FUNC_2(&VAR_2, VAR_5->card_num);
 FUNC_4(VAR_5);
}
