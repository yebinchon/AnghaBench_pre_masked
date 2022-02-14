
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axp288_chrg_info {int* irq; int psy_usb; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct axp288_chrg_info *VAR_5 = VAR_4;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_5->irq[VAR_6] == VAR_3)
   break;
 }

 if (VAR_6 >= VAR_0) {
  FUNC_1(&VAR_5->pdev->dev, "spurious interrupt!!\n");
  return VAR_2;
 }

 switch (VAR_6) {
 case 128:
  FUNC_0(&VAR_5->pdev->dev, "VBUS Over Voltage INTR\n");
  break;
 case 131:
  FUNC_0(&VAR_5->pdev->dev, "Charging Done INTR\n");
  break;
 case 132:
  FUNC_0(&VAR_5->pdev->dev, "Start Charging IRQ\n");
  break;
 case 135:
  FUNC_0(&VAR_5->pdev->dev,
   "Quit Safe Mode(restart timer) Charging IRQ\n");
  break;
 case 136:
  FUNC_0(&VAR_5->pdev->dev,
   "Enter Safe Mode(timer expire) Charging IRQ\n");
  break;
 case 129:
  FUNC_0(&VAR_5->pdev->dev,
   "Quit Battery Under Temperature(CHRG) INTR\n");
  break;
 case 133:
  FUNC_0(&VAR_5->pdev->dev,
   "Hit Battery Under Temperature(CHRG) INTR\n");
  break;
 case 130:
  FUNC_0(&VAR_5->pdev->dev,
   "Quit Battery Over Temperature(CHRG) INTR\n");
  break;
 case 134:
  FUNC_0(&VAR_5->pdev->dev,
   "Hit Battery Over Temperature(CHRG) INTR\n");
  break;
 default:
  FUNC_1(&VAR_5->pdev->dev, "Spurious Interrupt!!!\n");
  goto out;
 }

 FUNC_2(VAR_5->psy_usb);
out:
 return VAR_1;
}
