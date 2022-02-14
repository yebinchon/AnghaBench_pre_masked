
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {scalar_t__ next_cookie; TYPE_1__* ops; } ;
struct mmc_data {scalar_t__ host_cookie; } ;
struct TYPE_2__ {int (* get_next_data ) (struct mmci_host*,struct mmc_data*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mmci_host*,struct mmc_data*) ;

void FUNC_2(struct mmci_host *VAR_0, struct mmc_data *VAR_1)
{
 FUNC_0(VAR_1->host_cookie && VAR_1->host_cookie != VAR_0->next_cookie);

 if (VAR_0->ops && VAR_0->ops->get_next_data)
  VAR_0->ops->get_next_data(VAR_0, VAR_1);
}
