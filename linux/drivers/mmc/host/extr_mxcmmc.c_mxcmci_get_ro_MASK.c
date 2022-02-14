
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxcmci_host {TYPE_1__* pdata; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* get_ro ) (int ) ;} ;


 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 struct mxcmci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_0)
{
 struct mxcmci_host *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->pdata && VAR_1->pdata->get_ro)
  return !!VAR_1->pdata->get_ro(FUNC_0(VAR_0));





 return FUNC_1(VAR_0);
}
