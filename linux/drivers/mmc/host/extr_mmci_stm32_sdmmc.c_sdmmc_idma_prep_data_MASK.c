
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {scalar_t__ next_cookie; } ;
struct mmc_data {scalar_t__ host_cookie; } ;


 int FUNC_0 (struct mmci_host*,struct mmc_data*) ;

__attribute__((used)) static int FUNC_1(struct mmci_host *VAR_0,
    struct mmc_data *VAR_1, bool VAR_2)
{

 if (!VAR_2 && VAR_1->host_cookie == VAR_0->next_cookie)
  return 0;

 return FUNC_0(VAR_0, VAR_1);
}
