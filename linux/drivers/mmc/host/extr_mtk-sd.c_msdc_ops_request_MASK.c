
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msdc_host {struct mmc_request* mrq; scalar_t__ error; } ;
struct mmc_request {TYPE_1__* cmd; TYPE_1__* sbc; scalar_t__ data; } ;
struct mmc_host {int card; } ;
struct TYPE_2__ {int arg; } ;


 int FUNC_0 (struct mmc_request*) ;
 int FUNC_1 (int ) ;
 struct msdc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct msdc_host*,struct mmc_request*) ;
 int FUNC_4 (struct msdc_host*,struct mmc_request*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 struct msdc_host *VAR_2 = FUNC_2(VAR_0);

 VAR_2->error = 0;
 FUNC_0(VAR_2->mrq);
 VAR_2->mrq = VAR_1;

 if (VAR_1->data)
  FUNC_3(VAR_2, VAR_1);





 if (VAR_1->sbc && (!FUNC_1(VAR_0->card) ||
     (VAR_1->sbc->arg & 0xFFFF0000)))
  FUNC_4(VAR_2, VAR_1, VAR_1->sbc);
 else
  FUNC_4(VAR_2, VAR_1, VAR_1->cmd);
}
