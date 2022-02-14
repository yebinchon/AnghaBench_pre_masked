
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mmc_davinci_host {int do_dma; int active_request; scalar_t__ base; TYPE_2__* mmc; TYPE_1__* cmd; int data_dir; scalar_t__ sdio_int; int * data; } ;
struct mmc_data {int stop; int mrq; int sg_len; int sg; } ;
struct TYPE_6__ {int caps; } ;
struct TYPE_5__ {scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mmc_davinci_host*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct mmc_davinci_host*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct mmc_data*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct mmc_davinci_host *VAR_7, struct mmc_data *VAR_8)
{
 VAR_7->data = ((void*)0);

 if (VAR_7->mmc->caps & VAR_4) {





  if (VAR_7->sdio_int && !(FUNC_7(VAR_7->base + VAR_3) &
     VAR_6)) {
   FUNC_8(VAR_5, VAR_7->base + VAR_2);
   FUNC_6(VAR_7->mmc);
  }
 }

 if (VAR_7->do_dma) {
  FUNC_0(VAR_7);

  FUNC_1(FUNC_3(VAR_7->mmc), VAR_8->sg, VAR_8->sg_len,
        FUNC_4(VAR_8));
  VAR_7->do_dma = 0;
 }
 VAR_7->data_dir = VAR_1;

 if (!VAR_8->stop || (VAR_7->cmd && VAR_7->cmd->error)) {
  FUNC_5(VAR_7->mmc, VAR_8->mrq);
  FUNC_8(0, VAR_7->base + VAR_0);
  VAR_7->active_request = 0;
 } else
  FUNC_2(VAR_7, VAR_8->stop);
}
