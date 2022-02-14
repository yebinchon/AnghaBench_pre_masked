
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_lpss_chip {int dummy; } ;
struct pci_dev {int dev; } ;


 struct pwm_lpss_chip* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pwm_lpss_chip*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 struct pwm_lpss_chip *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->dev);
 FUNC_2(&VAR_0->dev);

 FUNC_3(VAR_1);
}
