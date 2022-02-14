
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdc_host {int hs400_mode; scalar_t__ base; int hs400_ds_delay; scalar_t__ top_base; } ;
struct mmc_ios {int dummy; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct msdc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_6, struct mmc_ios *VAR_7)
{
 struct msdc_host *VAR_8 = FUNC_0(VAR_6);
 VAR_8->hs400_mode = 1;

 if (VAR_8->top_base)
  FUNC_3(VAR_8->hs400_ds_delay,
         VAR_8->top_base + VAR_2);
 else
  FUNC_3(VAR_8->hs400_ds_delay, VAR_8->base + VAR_5);

 FUNC_1(VAR_8->base + VAR_3, VAR_4);

 FUNC_2(VAR_8->base + VAR_0, VAR_1, 2);

 return 0;
}
