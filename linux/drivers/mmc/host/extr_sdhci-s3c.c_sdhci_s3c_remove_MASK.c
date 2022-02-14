
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_s3c {int clk_io; TYPE_1__* pdata; scalar_t__ ext_cd_irq; } ;
struct sdhci_host {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {scalar_t__ cd_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,struct sdhci_s3c*) ;
 struct sdhci_host* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sdhci_host*) ;
 struct sdhci_s3c* FUNC_7 (struct sdhci_host*) ;
 int FUNC_8 (struct sdhci_host*,int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_3(VAR_1);
 struct sdhci_s3c *VAR_3 = FUNC_7(VAR_2);

 if (VAR_3->ext_cd_irq)
  FUNC_2(VAR_3->ext_cd_irq, VAR_3);





 FUNC_8(VAR_2, 1);

 FUNC_5(&VAR_1->dev);
 FUNC_4(&VAR_1->dev);

 FUNC_0(VAR_3->clk_io);

 FUNC_6(VAR_2);

 return 0;
}
