
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ parent; } ;
struct solo_dev {int v4l2_dev; scalar_t__ reg_base; TYPE_1__ dev; struct pci_dev* pdev; } ;
struct pci_dev {int irq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,scalar_t__) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int *) ;
 int FUNC_7 (struct solo_dev*) ;
 int FUNC_8 (struct solo_dev*) ;
 int FUNC_9 (struct solo_dev*) ;
 int FUNC_10 (struct solo_dev*) ;
 int FUNC_11 (struct solo_dev*) ;
 int FUNC_12 (struct solo_dev*) ;
 int FUNC_13 (struct solo_dev*,int ) ;
 int FUNC_14 (struct solo_dev*) ;
 int FUNC_15 (struct solo_dev*) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct solo_dev *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->pdev;

 if (VAR_0->dev.parent)
  FUNC_0(&VAR_0->dev);

 if (VAR_0->reg_base) {

  FUNC_10(VAR_0);
  FUNC_9(VAR_0);
  FUNC_8(VAR_0);
  FUNC_15(VAR_0);
  FUNC_7(VAR_0);
  FUNC_11(VAR_0);
  FUNC_14(VAR_0);
  FUNC_12(VAR_0);


  FUNC_13(VAR_0, ~0);
  FUNC_1(VAR_1->irq, VAR_0);
  FUNC_4(VAR_1, VAR_0->reg_base);
 }

 FUNC_5(VAR_1);
 FUNC_3(VAR_1);
 FUNC_16(&VAR_0->v4l2_dev);
 FUNC_6(VAR_1, ((void*)0));

 FUNC_2(VAR_0);
}
