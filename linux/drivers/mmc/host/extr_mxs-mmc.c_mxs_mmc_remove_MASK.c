
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mxs_ssp {int clk; scalar_t__ dmach; } ;
struct mxs_mmc_host {struct mxs_ssp ssp; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mmc_host*) ;
 struct mxs_mmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 struct mmc_host* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct mmc_host *VAR_1 = FUNC_5(VAR_0);
 struct mxs_mmc_host *VAR_2 = FUNC_3(VAR_1);
 struct mxs_ssp *VAR_3 = &VAR_2->ssp;

 FUNC_4(VAR_1);

 if (VAR_3->dmach)
  FUNC_1(VAR_3->dmach);

 FUNC_0(VAR_3->clk);

 FUNC_2(VAR_1);

 return 0;
}
