
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct TYPE_2__ {int dev; } ;
struct ilo_hwinfo {TYPE_1__ cdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ilo_hwinfo*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct ilo_hwinfo*) ;
 int VAR_0 ;
 int FUNC_6 (struct ilo_hwinfo*) ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct pci_dev*,struct ilo_hwinfo*) ;
 int FUNC_8 (struct ilo_hwinfo*) ;
 int VAR_3 ;
 struct ilo_hwinfo* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_4)
{
 int VAR_5, VAR_6;
 struct ilo_hwinfo *VAR_7 = FUNC_9(VAR_4);

 if (!VAR_7)
  return;

 FUNC_3(VAR_7);

 VAR_6 = FUNC_0(VAR_7->cdev.dev);
 for (VAR_5 = VAR_6; VAR_5 < VAR_6 + VAR_3; VAR_5++)
  FUNC_4(VAR_0, FUNC_1(VAR_2, VAR_5));

 FUNC_2(&VAR_7->cdev);
 FUNC_6(VAR_7);
 FUNC_5(VAR_4->irq, VAR_7);
 FUNC_7(VAR_4, VAR_7);
 FUNC_10(VAR_4);
 FUNC_8(VAR_7);
 VAR_1[(VAR_6 / VAR_3)] = 0;
}
