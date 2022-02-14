
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct s3cmci_host {int is2440; struct mmc_host* mmc; struct platform_device* pdev; } ;
struct s3c24xx_mci_pdata {int dummy; } ;
struct TYPE_3__ {struct s3c24xx_mci_pdata* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct s3c24xx_mci_pdata* FUNC_0 (TYPE_1__*,int,int ) ;
 int FUNC_1 (struct mmc_host*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct s3cmci_host *VAR_2)
{
 struct platform_device *VAR_3 = VAR_2->pdev;
 struct s3c24xx_mci_pdata *VAR_4;
 struct mmc_host *VAR_5 = VAR_2->mmc;
 int VAR_6;

 VAR_2->is2440 = (int) FUNC_2(&VAR_3->dev);

 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4 = FUNC_0(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_3->dev.platform_data = VAR_4;

 return 0;
}
