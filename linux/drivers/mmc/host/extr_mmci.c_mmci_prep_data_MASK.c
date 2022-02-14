
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {scalar_t__ next_cookie; TYPE_1__* ops; } ;
struct mmc_data {int host_cookie; } ;
struct TYPE_2__ {int (* prep_data ) (struct mmci_host*,struct mmc_data*,int) ;} ;


 int FUNC_0 (struct mmci_host*,struct mmc_data*,int) ;

int FUNC_1(struct mmci_host *VAR_0, struct mmc_data *VAR_1, bool VAR_2)
{
 int VAR_3;

 if (!VAR_0->ops || !VAR_0->ops->prep_data)
  return 0;

 VAR_3 = VAR_0->ops->prep_data(VAR_0, VAR_1, VAR_2);

 if (VAR_2 && !VAR_3)
  VAR_1->host_cookie = ++VAR_0->next_cookie < 0 ?
   1 : VAR_0->next_cookie;

 return VAR_3;
}
