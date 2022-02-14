
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_ssp {int dma_dir; scalar_t__ base; } ;
struct mxs_mmc_host {int mmc; struct mmc_request* mrq; struct mmc_data* data; struct mxs_ssp ssp; struct mmc_command* cmd; } ;
struct mmc_request {int stop; struct mmc_command* sbc; int cmd; } ;
struct mmc_data {int bytes_xfered; int blocks; int blksz; scalar_t__ error; scalar_t__ stop; int sg_len; int sg; } ;
struct mmc_command {void** resp; } ;


 scalar_t__ FUNC_0 (struct mxs_ssp*) ;
 scalar_t__ FUNC_1 (struct mxs_ssp*) ;
 scalar_t__ FUNC_2 (struct mxs_ssp*) ;
 scalar_t__ FUNC_3 (struct mxs_ssp*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct mmc_request*) ;
 int FUNC_7 (struct mmc_command*) ;
 int FUNC_8 (struct mxs_mmc_host*,int ) ;
 void* FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct mxs_mmc_host *VAR_2)
{
 struct mmc_command *VAR_3 = VAR_2->cmd;
 struct mmc_data *VAR_4 = VAR_2->data;
 struct mmc_request *VAR_5 = VAR_2->mrq;
 struct mxs_ssp *VAR_6 = &VAR_2->ssp;

 if (FUNC_7(VAR_3) & VAR_1) {
  if (FUNC_7(VAR_3) & VAR_0) {
   VAR_3->resp[3] = FUNC_9(VAR_6->base + FUNC_0(VAR_6));
   VAR_3->resp[2] = FUNC_9(VAR_6->base + FUNC_1(VAR_6));
   VAR_3->resp[1] = FUNC_9(VAR_6->base + FUNC_2(VAR_6));
   VAR_3->resp[0] = FUNC_9(VAR_6->base + FUNC_3(VAR_6));
  } else {
   VAR_3->resp[0] = FUNC_9(VAR_6->base + FUNC_0(VAR_6));
  }
 }

 if (VAR_3 == VAR_5->sbc) {

  FUNC_8(VAR_2, VAR_5->cmd);
  return;
 } else if (VAR_4) {
  FUNC_4(FUNC_5(VAR_2->mmc), VAR_4->sg,
        VAR_4->sg_len, VAR_6->dma_dir);




  if (!VAR_4->error)
   VAR_4->bytes_xfered = VAR_4->blocks * VAR_4->blksz;
  else
   VAR_4->bytes_xfered = 0;

  VAR_2->data = ((void*)0);
  if (VAR_4->stop && (VAR_4->error || !VAR_5->sbc)) {
   FUNC_8(VAR_2, VAR_5->stop);
   return;
  }
 }

 VAR_2->mrq = ((void*)0);
 FUNC_6(VAR_2->mmc, VAR_5);
}
