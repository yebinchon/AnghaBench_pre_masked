
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_mmc_host {struct mmc_request* mrq; } ;
struct mmc_request {int cmd; int sbc; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int ) ;
 struct mxs_mmc_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mxs_mmc_host*,int ) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 struct mxs_mmc_host *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->mrq != ((void*)0));
 VAR_2->mrq = VAR_1;

 if (VAR_1->sbc)
  FUNC_2(VAR_2, VAR_1->sbc);
 else
  FUNC_2(VAR_2, VAR_1->cmd);
}
