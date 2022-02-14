
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hsmmc_host {int flags; TYPE_2__* mrq; int response_busy; int * data; int base; TYPE_1__* cmd; } ;
struct mmc_command {int flags; scalar_t__ error; void** resp; } ;
struct TYPE_4__ {int data; int cmd; TYPE_1__* sbc; } ;
struct TYPE_3__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct omap_hsmmc_host*,TYPE_2__*) ;
 int FUNC_2 (struct omap_hsmmc_host*,int ,int ) ;
 int FUNC_3 (struct omap_hsmmc_host*) ;

__attribute__((used)) static void
FUNC_4(struct omap_hsmmc_host *VAR_7, struct mmc_command *VAR_8)
{
 if (VAR_7->mrq->sbc && (VAR_7->cmd == VAR_7->mrq->sbc) &&
     !VAR_7->mrq->sbc->error && !(VAR_7->flags & VAR_0)) {
  VAR_7->cmd = ((void*)0);
  FUNC_3(VAR_7);
  FUNC_2(VAR_7, VAR_7->mrq->cmd,
      VAR_7->mrq->data);
  return;
 }

 VAR_7->cmd = ((void*)0);

 if (VAR_8->flags & VAR_2) {
  if (VAR_8->flags & VAR_1) {

   VAR_8->resp[3] = FUNC_0(VAR_7->base, VAR_3);
   VAR_8->resp[2] = FUNC_0(VAR_7->base, VAR_4);
   VAR_8->resp[1] = FUNC_0(VAR_7->base, VAR_5);
   VAR_8->resp[0] = FUNC_0(VAR_7->base, VAR_6);
  } else {

   VAR_8->resp[0] = FUNC_0(VAR_7->base, VAR_3);
  }
 }
 if ((VAR_7->data == ((void*)0) && !VAR_7->response_busy) || VAR_8->error)
  FUNC_1(VAR_7, VAR_7->mrq);
}
