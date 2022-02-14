
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axp288_fg_info {int* irq; TYPE_1__* pdev; int regmap_irqc; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (int,struct axp288_fg_info*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int *,int ,int ,int ,struct axp288_fg_info*) ;

__attribute__((used)) static void FUNC_6(struct axp288_fg_info *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_3(VAR_4->pdev, VAR_6);
  VAR_4->irq[VAR_6] = FUNC_4(VAR_4->regmap_irqc, VAR_7);
  if (VAR_4->irq[VAR_6] < 0) {
   FUNC_1(&VAR_4->pdev->dev,
    "regmap_irq get virq failed for IRQ %d: %d\n",
    VAR_7, VAR_4->irq[VAR_6]);
   VAR_4->irq[VAR_6] = -1;
   goto intr_failed;
  }
  VAR_5 = FUNC_5(VAR_4->irq[VAR_6],
    ((void*)0), VAR_3,
    VAR_2, VAR_1, VAR_4);
  if (VAR_5) {
   FUNC_1(&VAR_4->pdev->dev,
    "request irq failed for IRQ %d: %d\n",
    VAR_7, VAR_4->irq[VAR_6]);
   VAR_4->irq[VAR_6] = -1;
   goto intr_failed;
  } else {
   FUNC_0(&VAR_4->pdev->dev, "HW IRQ %d -> VIRQ %d\n",
    VAR_7, VAR_4->irq[VAR_6]);
  }
 }
 return;

intr_failed:
 for (; VAR_6 > 0; VAR_6--) {
  FUNC_2(VAR_4->irq[VAR_6 - 1], VAR_4);
  VAR_4->irq[VAR_6 - 1] = -1;
 }
}
