
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct s3cmci_host {scalar_t__ complete_what; int cmd_is_stop; int prescaler; int mmc; struct mmc_request* mrq; scalar_t__ base; scalar_t__ is2440; int dma; int dma_complete; } ;
struct mmc_request {TYPE_2__* data; struct mmc_command* cmd; struct mmc_command* stop; } ;
struct mmc_command {scalar_t__ error; TYPE_1__* data; void** resp; } ;
struct TYPE_4__ {scalar_t__ error; int bytes_xfered; int blocks; int blksz; } ;
struct TYPE_3__ {scalar_t__ error; scalar_t__ stop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct s3cmci_host*) ;
 int FUNC_1 (struct s3cmci_host*,int ,char*,int ) ;
 int VAR_16 ;
 int FUNC_2 (struct s3cmci_host*,struct mmc_command*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct mmc_request*) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct s3cmci_host*) ;
 scalar_t__ FUNC_7 (struct s3cmci_host*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct s3cmci_host *VAR_17)
{
 struct mmc_request *VAR_18 = VAR_17->mrq;
 struct mmc_command *VAR_19;
 int VAR_20 = 0;

 if (VAR_17->complete_what != VAR_0)
  return;

 if (!VAR_18)
  return;
 VAR_19 = VAR_17->cmd_is_stop ? VAR_18->stop : VAR_18->cmd;

 if (VAR_19->data && (VAR_19->error == 0) &&
     (VAR_19->data->error == 0)) {
  if (FUNC_7(VAR_17) && (!VAR_17->dma_complete)) {
   FUNC_1(VAR_17, VAR_16, "DMA Missing (%d)!\n",
       VAR_17->dma_complete);
   return;
  }
 }


 VAR_19->resp[0] = FUNC_5(VAR_17->base + VAR_10);
 VAR_19->resp[1] = FUNC_5(VAR_17->base + VAR_11);
 VAR_19->resp[2] = FUNC_5(VAR_17->base + VAR_12);
 VAR_19->resp[3] = FUNC_5(VAR_17->base + VAR_13);

 FUNC_9(VAR_17->prescaler, VAR_17->base + VAR_9);

 if (VAR_19->error)
  VAR_20 = 1;

 if (VAR_19->data && VAR_19->data->error)
  VAR_20 = 1;

 FUNC_2(VAR_17, VAR_19, VAR_20);


 FUNC_9(0, VAR_17->base + VAR_2);
 FUNC_9(VAR_7, VAR_17->base + VAR_6);
 FUNC_9(0, VAR_17->base + VAR_3);
 FUNC_0(VAR_17);

 if (VAR_19->data && VAR_19->error)
  VAR_19->data->error = VAR_19->error;

 if (VAR_19->data && VAR_19->data->stop && (!VAR_17->cmd_is_stop)) {
  VAR_17->cmd_is_stop = 1;
  FUNC_8(VAR_17->mmc);
  return;
 }


 if (!VAR_18->data)
  goto request_done;


 if (VAR_18->data->error == 0) {
  VAR_18->data->bytes_xfered =
   (VAR_18->data->blocks * VAR_18->data->blksz);
 } else {
  VAR_18->data->bytes_xfered = 0;
 }



 if (VAR_18->data->error != 0) {
  if (FUNC_7(VAR_17))
   FUNC_3(VAR_17->dma);

  if (VAR_17->is2440) {

   FUNC_9(VAR_15 |
          VAR_14,
          VAR_17->base + VAR_8);
  } else {
   u32 VAR_21;


   VAR_21 = FUNC_5(VAR_17->base + VAR_4);
   VAR_21 |= VAR_5;

   FUNC_9(VAR_21, VAR_17->base + VAR_4);
  }
 }

request_done:
 VAR_17->complete_what = VAR_1;
 VAR_17->mrq = ((void*)0);

 FUNC_6(VAR_17);
 FUNC_4(VAR_17->mmc, VAR_18);
}
