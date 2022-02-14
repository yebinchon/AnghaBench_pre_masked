
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {scalar_t__ base; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct msdc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct mmc_host *VAR_1)
{
 struct msdc_host *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->base + VAR_0, 1);
 FUNC_3(10);
 FUNC_1(VAR_2->base + VAR_0, 1);
}
