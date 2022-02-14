
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {TYPE_1__* ops; } ;
struct mmc_data {scalar_t__ host_cookie; } ;
struct TYPE_2__ {int (* unprep_data ) (struct mmci_host*,struct mmc_data*,int) ;} ;


 int FUNC_0 (struct mmci_host*,struct mmc_data*,int) ;

void FUNC_1(struct mmci_host *VAR_0, struct mmc_data *VAR_1,
        int VAR_2)
{
 if (VAR_0->ops && VAR_0->ops->unprep_data)
  VAR_0->ops->unprep_data(VAR_0, VAR_1, VAR_2);

 VAR_1->host_cookie = 0;
}
