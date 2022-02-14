
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hsmmc_host {int req_in_progress; int dma_ch; int flags; struct mmc_request* mrq; int fclk; int clk_rate; scalar_t__ reqs_blocked; } ;
struct mmc_request {TYPE_2__* data; TYPE_1__* cmd; TYPE_1__* sbc; } ;
struct mmc_host {int dummy; } ;
struct TYPE_4__ {int error; } ;
struct TYPE_3__ {int error; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct omap_hsmmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_5 (struct omap_hsmmc_host*,struct mmc_request*) ;
 int FUNC_6 (struct omap_hsmmc_host*,TYPE_1__*,TYPE_2__*) ;
 int FUNC_7 (struct omap_hsmmc_host*) ;

__attribute__((used)) static void FUNC_8(struct mmc_host *VAR_1, struct mmc_request *VAR_2)
{
 struct omap_hsmmc_host *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 FUNC_0(VAR_3->req_in_progress);
 FUNC_0(VAR_3->dma_ch != -1);
 if (VAR_3->reqs_blocked)
  VAR_3->reqs_blocked = 0;
 FUNC_1(VAR_3->mrq != ((void*)0));
 VAR_3->mrq = VAR_2;
 VAR_3->clk_rate = FUNC_2(VAR_3->fclk);
 VAR_4 = FUNC_5(VAR_3, VAR_2);
 if (VAR_4) {
  VAR_2->cmd->error = VAR_4;
  if (VAR_2->data)
   VAR_2->data->error = VAR_4;
  VAR_3->mrq = ((void*)0);
  FUNC_4(VAR_1, VAR_2);
  return;
 }
 if (VAR_2->sbc && !(VAR_3->flags & VAR_0)) {
  FUNC_6(VAR_3, VAR_2->sbc, ((void*)0));
  return;
 }

 FUNC_7(VAR_3);
 FUNC_6(VAR_3, VAR_2->cmd, VAR_2->data);
}
