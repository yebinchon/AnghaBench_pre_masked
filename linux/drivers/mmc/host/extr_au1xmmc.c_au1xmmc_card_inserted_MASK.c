
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int dummy; } ;
struct au1xmmc_host {int mmc; TYPE_1__* platdata; } ;
struct TYPE_2__ {int (* card_inserted ) (int ) ;} ;


 int VAR_0 ;
 struct au1xmmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_1)
{
 struct au1xmmc_host *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->platdata && VAR_2->platdata->card_inserted)
  return !!VAR_2->platdata->card_inserted(VAR_2->mmc);

 return -VAR_0;
}
