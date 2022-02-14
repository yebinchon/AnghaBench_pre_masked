
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_mmc_host {int dummy; } ;
struct mmc_ios {int bus_width; } ;
struct mmc_host {int dummy; } ;


 struct sunxi_mmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sunxi_mmc_host*,struct mmc_ios*) ;
 int FUNC_2 (struct sunxi_mmc_host*,int ) ;
 int FUNC_3 (struct sunxi_mmc_host*,struct mmc_ios*) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_0, struct mmc_ios *VAR_1)
{
 struct sunxi_mmc_host *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_1->bus_width);
 FUNC_3(VAR_2, VAR_1);
}
