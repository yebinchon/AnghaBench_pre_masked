
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxcmci_host {int dummy; } ;
struct mmc_host {int caps; } ;
struct mmc_card {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct mxcmci_host*) ;
 struct mxcmci_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_2, struct mmc_card *VAR_3)
{
 struct mxcmci_host *VAR_4 = FUNC_1(VAR_2);
 if (FUNC_0(VAR_4) && VAR_3->type == VAR_1)
  VAR_2->caps &= ~VAR_0;
 else
  VAR_2->caps |= VAR_0;
}
