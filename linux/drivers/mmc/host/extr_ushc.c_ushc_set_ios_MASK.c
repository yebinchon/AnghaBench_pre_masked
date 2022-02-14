
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ushc_data {int dummy; } ;
struct mmc_ios {int bus_width; scalar_t__ timing; int clock; int power_mode; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct ushc_data* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct ushc_data*,int ,int) ;
 int FUNC_2 (struct ushc_data*,int) ;
 int FUNC_3 (struct ushc_data*,int ) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_1, struct mmc_ios *VAR_2)
{
 struct ushc_data *VAR_3 = FUNC_0(VAR_1);

 FUNC_3(VAR_3, VAR_2->power_mode);
 FUNC_2(VAR_3, 1 << VAR_2->bus_width);
 FUNC_1(VAR_3, VAR_2->clock, VAR_2->timing == VAR_0);
}
