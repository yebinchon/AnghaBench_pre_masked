
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mvsd_host {int clk; int timer; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mmc_host*) ;
 struct mvsd_host* FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mvsd_host*) ;
 struct mmc_host* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct mmc_host *VAR_1 = FUNC_7(VAR_0);

 struct mvsd_host *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(VAR_1);
 FUNC_2(&VAR_2->timer);
 FUNC_6(VAR_2);

 if (!FUNC_0(VAR_2->clk))
  FUNC_1(VAR_2->clk);
 FUNC_3(VAR_1);

 return 0;
}
