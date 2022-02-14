
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct aac_dev {int max_msix; TYPE_1__* pdev; scalar_t__ msi; struct aac_dev* aac_msix; } ;
struct TYPE_4__ {int irq; } ;


 scalar_t__ FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (int ,struct aac_dev*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(struct aac_dev *VAR_0)
{
 int VAR_1;

 if (FUNC_0(VAR_0)) {
  if (VAR_0->max_msix > 1) {
   for (VAR_1 = 0; VAR_1 < VAR_0->max_msix; VAR_1++)
    FUNC_1(FUNC_4(VAR_0->pdev, VAR_1),
      &(VAR_0->aac_msix[VAR_1]));
  } else {
   FUNC_1(VAR_0->pdev->irq, &(VAR_0->aac_msix[0]));
  }
 } else {
  FUNC_1(VAR_0->pdev->irq, VAR_0);
 }
 if (VAR_0->msi)
  FUNC_2(VAR_0->pdev);
 else if (VAR_0->max_msix > 1)
  FUNC_3(VAR_0->pdev);
}
