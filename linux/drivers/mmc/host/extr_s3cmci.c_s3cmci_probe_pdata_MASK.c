
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s3cmci_host {struct mmc_host* mmc; int is2440; struct platform_device* pdev; } ;
struct s3c24xx_mci_pdata {scalar_t__ wprotect_invert; scalar_t__ no_detect; scalar_t__ no_wprotect; } ;
struct TYPE_5__ {struct s3c24xx_mci_pdata* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct mmc_host {int caps2; int caps; } ;
struct TYPE_4__ {int driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct mmc_host*,char*,int ,int,int ,int *) ;
 int FUNC_6 (struct mmc_host*,char*,int ,int ,int *) ;
 TYPE_1__* FUNC_7 (struct platform_device*) ;
 struct s3c24xx_mci_pdata VAR_4 ;

__attribute__((used)) static int FUNC_8(struct s3cmci_host *VAR_5)
{
 struct platform_device *VAR_6 = VAR_5->pdev;
 struct mmc_host *VAR_7 = VAR_5->mmc;
 struct s3c24xx_mci_pdata *VAR_8;
 int VAR_9, VAR_10;

 VAR_5->is2440 = FUNC_7(VAR_6)->driver_data;

 for (VAR_9 = FUNC_0(5); VAR_9 <= FUNC_0(10); VAR_9++) {
  VAR_10 = FUNC_4(VAR_9, FUNC_2(&VAR_6->dev));
  if (VAR_10) {
   FUNC_1(&VAR_6->dev, "failed to get gpio %d\n", VAR_9);

   for (VAR_9--; VAR_9 >= FUNC_0(5); VAR_9--)
    FUNC_3(VAR_9);

   return VAR_10;
  }
 }

 if (!VAR_6->dev.platform_data)
  VAR_6->dev.platform_data = &VAR_4;

 VAR_8 = VAR_6->dev.platform_data;

 if (VAR_8->no_wprotect)
  VAR_7->caps2 |= VAR_1;

 if (VAR_8->no_detect)
  VAR_7->caps |= VAR_3;

 if (VAR_8->wprotect_invert)
  VAR_7->caps2 |= VAR_2;


 VAR_10 = FUNC_5(VAR_7, "cd", 0, 0, 0, ((void*)0));
 if (VAR_10 != -VAR_0) {
  FUNC_1(&VAR_6->dev, "error requesting GPIO for CD %d\n",
   VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_5->mmc, "wp", 0, 0, ((void*)0));
 if (VAR_10 != -VAR_0) {
  FUNC_1(&VAR_6->dev, "error requesting GPIO for WP %d\n",
   VAR_10);
  return VAR_10;
 }

 return 0;
}
