
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msdc_host {scalar_t__ base; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct msdc_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_1)
{
 struct msdc_host *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3 = FUNC_2(VAR_2->base + VAR_0);


 return !(VAR_3 & FUNC_0(16));
}
