
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hsmmc_host {int response_busy; int flags; int req_in_progress; int base; scalar_t__ use_dma; TYPE_2__* mrq; struct mmc_command* cmd; int mmc; } ;
struct mmc_data {int flags; } ;
struct mmc_command {int opcode; int arg; int flags; } ;
struct TYPE_4__ {TYPE_1__* sbc; struct mmc_command* stop; } ;
struct TYPE_3__ {int arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_13 ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct omap_hsmmc_host*,struct mmc_command*) ;

__attribute__((used)) static void
FUNC_6(struct omap_hsmmc_host *VAR_14, struct mmc_command *VAR_15,
 struct mmc_data *VAR_16)
{
 int VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;

 FUNC_1(FUNC_2(VAR_14->mmc), "%s: CMD%d, argument 0x%08x\n",
  FUNC_3(VAR_14->mmc), VAR_15->opcode, VAR_15->arg);
 VAR_14->cmd = VAR_15;

 FUNC_5(VAR_14, VAR_15);

 VAR_14->response_busy = 0;
 if (VAR_15->flags & VAR_11) {
  if (VAR_15->flags & VAR_9)
   VAR_18 = 1;
  else if (VAR_15->flags & VAR_10) {
   VAR_18 = 3;
   VAR_14->response_busy = 1;
  } else
   VAR_18 = 2;
 }






 if (VAR_15 == VAR_14->mrq->stop)
  VAR_19 = 0x3;

 VAR_17 = (VAR_15->opcode << 24) | (VAR_18 << 16) | (VAR_19 << 22);

 if ((VAR_14->flags & VAR_2) && FUNC_4(VAR_15->opcode) &&
     VAR_14->mrq->sbc) {
  VAR_17 |= VAR_0;
  FUNC_0(VAR_14->base, VAR_13, VAR_14->mrq->sbc->arg);
 }
 if (VAR_16) {
  VAR_17 |= VAR_7 | VAR_12 | VAR_3;
  if (VAR_16->flags & VAR_8)
   VAR_17 |= VAR_5;
  else
   VAR_17 &= ~(VAR_5);
 }

 if (VAR_14->use_dma)
  VAR_17 |= VAR_6;

 VAR_14->req_in_progress = 1;

 FUNC_0(VAR_14->base, VAR_1, VAR_15->arg);
 FUNC_0(VAR_14->base, VAR_4, VAR_17);
}
