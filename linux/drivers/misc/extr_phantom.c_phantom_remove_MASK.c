
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct phantom_device {scalar_t__ caddr; scalar_t__ iaddr; scalar_t__ oaddr; TYPE_1__ cdev; } ;
struct pci_dev {int irq; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct phantom_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct phantom_device*) ;
 int FUNC_8 (struct pci_dev*) ;
 struct phantom_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,scalar_t__) ;
 int FUNC_11 (struct pci_dev*) ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_4)
{
 struct phantom_device *VAR_5 = FUNC_9(VAR_4);
 unsigned int VAR_6 = FUNC_0(VAR_5->cdev.dev);

 FUNC_3(VAR_1, FUNC_1(VAR_3, VAR_6));

 FUNC_2(&VAR_5->cdev);

 FUNC_6(0, VAR_5->caddr + VAR_0);
 FUNC_5(VAR_5->caddr + VAR_0);
 FUNC_4(VAR_4->irq, VAR_5);

 FUNC_10(VAR_4, VAR_5->oaddr);
 FUNC_10(VAR_4, VAR_5->iaddr);
 FUNC_10(VAR_4, VAR_5->caddr);

 FUNC_7(VAR_5);

 FUNC_11(VAR_4);

 VAR_2[VAR_6] = 0;

 FUNC_8(VAR_4);
}
