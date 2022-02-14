
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct meson_mx_mmc_host {int mmc; int core_clk; int cfg_div_clk; int cmd_timeout; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,int *) ;
 struct meson_mx_mmc_host* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct meson_mx_mmc_host *VAR_1 = FUNC_6(VAR_0);
 struct device *VAR_2 = FUNC_2(VAR_1->mmc);

 FUNC_1(&VAR_1->cmd_timeout);

 FUNC_4(VAR_1->mmc);

 FUNC_5(VAR_2, ((void*)0));

 FUNC_0(VAR_1->cfg_div_clk);
 FUNC_0(VAR_1->core_clk);

 FUNC_3(VAR_1->mmc);

 return 0;
}
