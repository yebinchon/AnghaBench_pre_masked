
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct request {int dummy; } ;
struct mmc_request {TYPE_3__* data; TYPE_2__* cmd; } ;
struct TYPE_4__ {struct mmc_request mrq; } ;
struct mmc_queue_req {int retries; TYPE_1__ brq; } ;
struct mmc_queue {struct mmc_card* card; } ;
struct mmc_host {int dummy; } ;
struct mmc_card {struct mmc_host* host; } ;
typedef int blk_status_t ;
struct TYPE_6__ {scalar_t__ bytes_xfered; scalar_t__ error; } ;
struct TYPE_5__ {int* resp; scalar_t__ error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct request*,int ,int) ;
 int FUNC_1 (struct mmc_card*,struct request*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mmc_queue_req*,struct mmc_card*,int,struct mmc_queue*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_card*,int*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_request*) ;
 struct mmc_queue_req* FUNC_7 (struct request*) ;

__attribute__((used)) static void FUNC_8(struct mmc_queue *VAR_5, struct request *VAR_6)
{
 struct mmc_queue_req *VAR_7 = FUNC_7(VAR_6);
 struct mmc_request *VAR_8 = &VAR_7->brq.mrq;
 struct mmc_card *VAR_9 = VAR_5->card;
 struct mmc_host *VAR_10 = VAR_9->host;
 blk_status_t VAR_11 = VAR_1;
 int VAR_12 = 0;

 do {
  u32 VAR_13;
  int VAR_14;

  FUNC_3(VAR_7, VAR_9, 1, VAR_5);

  FUNC_6(VAR_10, VAR_8);

  VAR_14 = FUNC_5(VAR_9, &VAR_13);
  if (VAR_14)
   goto error_exit;

  if (!FUNC_4(VAR_10) &&
      !FUNC_2(VAR_13)) {
   VAR_14 = FUNC_1(VAR_9, VAR_6);
   if (VAR_14)
    goto error_exit;
  }

  if (VAR_8->cmd->error && VAR_12++ < VAR_4)
   continue;

  VAR_12 = 0;

  if (VAR_8->cmd->error ||
      VAR_8->data->error ||
      (!FUNC_4(VAR_10) &&
       (VAR_8->cmd->resp[0] & VAR_2 || VAR_13 & VAR_2)))
   VAR_11 = VAR_0;
  else
   VAR_11 = VAR_1;

 } while (FUNC_0(VAR_6, VAR_11, 512));

 return;

error_exit:
 VAR_8->data->bytes_xfered = 0;
 FUNC_0(VAR_6, VAR_0, 512);

 if (VAR_7->retries > VAR_3 - 1)
  VAR_7->retries = VAR_3 - 1;
}
