
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct au1xmmc_host {int mmc; TYPE_1__* platdata; } ;
struct TYPE_2__ {int (* set_power ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct au1xmmc_host *VAR_0, int VAR_1)
{
 if (VAR_0->platdata && VAR_0->platdata->set_power)
  VAR_0->platdata->set_power(VAR_0->mmc, VAR_1);
}
