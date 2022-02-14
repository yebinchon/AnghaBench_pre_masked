
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct arm_spe_pmu {int irq; int supported_cpus; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct arm_spe_pmu *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2->pdev;
 int VAR_4 = FUNC_3(VAR_3, 0);

 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->dev, "failed to get IRQ (%d)\n", VAR_4);
  return -VAR_1;
 }

 if (!FUNC_2(VAR_4)) {
  FUNC_0(&VAR_3->dev, "expected PPI but got SPI (%d)\n", VAR_4);
  return -VAR_0;
 }

 if (FUNC_1(VAR_4, &VAR_2->supported_cpus)) {
  FUNC_0(&VAR_3->dev, "failed to get PPI partition (%d)\n", VAR_4);
  return -VAR_0;
 }

 VAR_2->irq = VAR_4;
 return 0;
}
