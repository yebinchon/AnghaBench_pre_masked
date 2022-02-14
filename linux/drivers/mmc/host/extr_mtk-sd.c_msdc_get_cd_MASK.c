
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {scalar_t__ base; int internal_cd; } ;
struct mmc_host {int caps; int caps2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_host*) ;
 struct msdc_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_4)
{
 struct msdc_host *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 if (VAR_4->caps & VAR_1)
  return 1;

 if (!VAR_5->internal_cd)
  return FUNC_0(VAR_4);

 VAR_6 = FUNC_2(VAR_5->base + VAR_2) & VAR_3;
 if (VAR_4->caps2 & VAR_0)
  return !!VAR_6;
 else
  return !VAR_6;
}
