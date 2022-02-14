
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int recovery_notifier; int done; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mmc_host*,struct mmc_request*) ;

__attribute__((used)) static int FUNC_1(struct mmc_host *VAR_2, struct mmc_request *VAR_3)
{
 VAR_3->done = VAR_0;
 VAR_3->recovery_notifier = VAR_1;

 return FUNC_0(VAR_2, VAR_3);
}
