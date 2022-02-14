
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mmc_host {int dummy; } ;
struct alcor_sdmmc_host {int timeout_work; } ;


 int FUNC_0 (struct alcor_sdmmc_host*) ;
 int FUNC_1 (struct alcor_sdmmc_host*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 struct alcor_sdmmc_host* FUNC_3 (int *) ;
 int FUNC_4 (struct mmc_host*) ;
 struct mmc_host* FUNC_5 (struct alcor_sdmmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct alcor_sdmmc_host *VAR_1 = FUNC_3(&VAR_0->dev);
 struct mmc_host *VAR_2 = FUNC_5(VAR_1);

 if (FUNC_2(&VAR_1->timeout_work))
  FUNC_1(VAR_1, 0);

 FUNC_0(VAR_1);
 FUNC_6(VAR_2);
 FUNC_4(VAR_2);

 return 0;
}
