
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {int bus_mode; } ;
struct mmc_host {int dummy; } ;
struct goldfish_mmc_host {int bus_mode; int hw_bus_mode; } ;


 struct goldfish_mmc_host* FUNC_0 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_1(struct mmc_host *VAR_0, struct mmc_ios *VAR_1)
{
 struct goldfish_mmc_host *VAR_2 = FUNC_0(VAR_0);

 VAR_2->bus_mode = VAR_1->bus_mode;
 VAR_2->hw_bus_mode = VAR_2->bus_mode;
}
