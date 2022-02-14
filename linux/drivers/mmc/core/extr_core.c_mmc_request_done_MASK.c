
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mmc_request {int (* done ) (struct mmc_request*) ;TYPE_3__* stop; TYPE_2__* data; TYPE_1__* sbc; struct mmc_command* cmd; } ;
struct mmc_host {int led; struct mmc_request* ongoing_mrq; int card; int retune_crc_disable; } ;
struct mmc_command {int error; scalar_t__ opcode; int* resp; scalar_t__ retries; } ;
struct TYPE_6__ {int error; scalar_t__ opcode; int* resp; } ;
struct TYPE_5__ {int error; int bytes_xfered; } ;
struct TYPE_4__ {int error; scalar_t__ opcode; int* resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_request*) ;
 scalar_t__ FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_request*) ;
 int FUNC_7 (char*,int ,scalar_t__,int,...) ;
 int FUNC_8 (struct mmc_request*) ;
 int FUNC_9 (struct mmc_host*,struct mmc_request*) ;

void FUNC_10(struct mmc_host *VAR_5, struct mmc_request *VAR_6)
{
 struct mmc_command *VAR_7 = VAR_6->cmd;
 int VAR_8 = VAR_7->error;


 if (VAR_7->opcode != VAR_2 &&
     VAR_7->opcode != VAR_3 &&
     !VAR_5->retune_crc_disable &&
     (VAR_8 == -VAR_0 || (VAR_6->sbc && VAR_6->sbc->error == -VAR_0) ||
     (VAR_6->data && VAR_6->data->error == -VAR_0) ||
     (VAR_6->stop && VAR_6->stop->error == -VAR_0)))
  FUNC_5(VAR_5);

 if (VAR_8 && VAR_7->retries && FUNC_3(VAR_5)) {
  if (VAR_7->resp[0] & VAR_4)
   VAR_7->retries = 0;
 }

 if (VAR_5->ongoing_mrq == VAR_6)
  VAR_5->ongoing_mrq = ((void*)0);

 FUNC_2(VAR_6);

 FUNC_9(VAR_5, VAR_6);
 if (!VAR_8 || !VAR_7->retries || FUNC_1(VAR_5->card)) {
  FUNC_6(VAR_5, VAR_6);

  if (!VAR_5->ongoing_mrq)
   FUNC_0(VAR_5->led, VAR_1);

  if (VAR_6->sbc) {
   FUNC_7("%s: req done <CMD%u>: %d: %08x %08x %08x %08x\n",
    FUNC_4(VAR_5), VAR_6->sbc->opcode,
    VAR_6->sbc->error,
    VAR_6->sbc->resp[0], VAR_6->sbc->resp[1],
    VAR_6->sbc->resp[2], VAR_6->sbc->resp[3]);
  }

  FUNC_7("%s: req done (CMD%u): %d: %08x %08x %08x %08x\n",
   FUNC_4(VAR_5), VAR_7->opcode, VAR_8,
   VAR_7->resp[0], VAR_7->resp[1],
   VAR_7->resp[2], VAR_7->resp[3]);

  if (VAR_6->data) {
   FUNC_7("%s:     %d bytes transferred: %d\n",
    FUNC_4(VAR_5),
    VAR_6->data->bytes_xfered, VAR_6->data->error);
  }

  if (VAR_6->stop) {
   FUNC_7("%s:     (CMD%u): %d: %08x %08x %08x %08x\n",
    FUNC_4(VAR_5), VAR_6->stop->opcode,
    VAR_6->stop->error,
    VAR_6->stop->resp[0], VAR_6->stop->resp[1],
    VAR_6->stop->resp[2], VAR_6->stop->resp[3]);
  }
 }




 if (VAR_6->done)
  VAR_6->done(VAR_6);
}
