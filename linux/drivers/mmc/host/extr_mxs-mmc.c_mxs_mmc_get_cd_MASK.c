
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_ssp {scalar_t__ base; } ;
struct mxs_mmc_host {scalar_t__ broken_cd; struct mxs_ssp ssp; } ;
struct mmc_host {int caps; int caps2; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mxs_ssp*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mmc_host*) ;
 struct mxs_mmc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_4)
{
 struct mxs_mmc_host *VAR_5 = FUNC_2(VAR_4);
 struct mxs_ssp *VAR_6 = &VAR_5->ssp;
 int VAR_7, VAR_8;

 if (VAR_5->broken_cd)
  return -VAR_1;

 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8 >= 0)
  return VAR_8;

 VAR_7 = VAR_4->caps & VAR_3 ||
  !(FUNC_3(VAR_6->base + FUNC_0(VAR_6)) &
   VAR_0);

 if (VAR_4->caps2 & VAR_2)
  VAR_7 = !VAR_7;

 return VAR_7;
}
