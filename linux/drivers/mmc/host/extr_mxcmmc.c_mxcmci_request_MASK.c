
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mxcmci_host {unsigned int cmdat; int do_dma; scalar_t__ dma; struct mmc_request* req; } ;
struct mmc_request {TYPE_1__* cmd; TYPE_2__* data; } ;
struct mmc_host {int dummy; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int error; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct mxcmci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mxcmci_host*,struct mmc_request*) ;
 int FUNC_3 (struct mxcmci_host*,TYPE_2__*) ;
 int FUNC_4 (struct mxcmci_host*,TYPE_1__*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_4, struct mmc_request *VAR_5)
{
 struct mxcmci_host *VAR_6 = FUNC_1(VAR_4);
 unsigned int VAR_7 = VAR_6->cmdat;
 int VAR_8;

 FUNC_0(VAR_6->req != ((void*)0));

 VAR_6->req = VAR_5;
 VAR_6->cmdat &= ~VAR_1;

 if (VAR_6->dma)
  VAR_6->do_dma = 1;

 if (VAR_5->data) {
  VAR_8 = FUNC_3(VAR_6, VAR_5->data);
  if (VAR_8) {
   VAR_5->cmd->error = VAR_8;
   goto out;
  }


  VAR_7 |= VAR_0;

  if (VAR_5->data->flags & VAR_3)
   VAR_7 |= VAR_2;
 }

 VAR_8 = FUNC_4(VAR_6, VAR_5->cmd, VAR_7);

out:
 if (VAR_8)
  FUNC_2(VAR_6, VAR_5);
}
