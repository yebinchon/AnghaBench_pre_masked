
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxamci_host {TYPE_1__* pdata; scalar_t__ use_ro_gpio; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* get_ro ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 struct pxamci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_1)
{
 struct pxamci_host *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->use_ro_gpio)
  return FUNC_1(VAR_1);
 if (VAR_2->pdata && VAR_2->pdata->get_ro)
  return !!VAR_2->pdata->get_ro(FUNC_0(VAR_1));




 return -VAR_0;
}
