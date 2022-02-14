
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int cap_cmd_during_tfr; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_1 (struct mmc_host*,struct mmc_request*) ;

void FUNC_2(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 if (!VAR_1->cap_cmd_during_tfr)
  FUNC_1(VAR_0, VAR_1);
}
