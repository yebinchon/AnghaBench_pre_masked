
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {struct request_queue* q; } ;
struct mmc_request {TYPE_3__* data; TYPE_2__* cmd; } ;
struct TYPE_5__ {struct mmc_request mrq; } ;
struct mmc_queue_req {int retries; TYPE_1__ brq; } ;
struct mmc_queue {int* in_flight; int ctx; TYPE_4__* card; int cqe_busy; int lock; } ;
struct mmc_host {int dummy; } ;
struct TYPE_8__ {struct mmc_host* host; } ;
struct TYPE_7__ {int error; int bytes_xfered; } ;
struct TYPE_6__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request*,int ) ;
 int FUNC_2 (struct request*,int) ;
 int FUNC_3 (struct request_queue*,int) ;
 scalar_t__ FUNC_4 (struct request*,int ,int ) ;
 int FUNC_5 (struct mmc_queue*) ;
 int FUNC_6 (struct mmc_host*,struct mmc_request*) ;
 size_t FUNC_7 (struct mmc_queue*,struct request*) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_9 (struct mmc_queue*) ;
 struct mmc_queue_req* FUNC_10 (struct request*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(struct mmc_queue *VAR_3, struct request *VAR_4)
{
 struct mmc_queue_req *VAR_5 = FUNC_10(VAR_4);
 struct mmc_request *VAR_6 = &VAR_5->brq.mrq;
 struct request_queue *VAR_7 = VAR_4->q;
 struct mmc_host *VAR_8 = VAR_3->card->host;
 unsigned long VAR_9;
 bool VAR_10;
 int VAR_11;

 FUNC_6(VAR_8, VAR_6);

 if (VAR_6->cmd && VAR_6->cmd->error)
  VAR_11 = VAR_6->cmd->error;
 else if (VAR_6->data && VAR_6->data->error)
  VAR_11 = VAR_6->data->error;
 else
  VAR_11 = 0;

 if (VAR_11) {
  if (VAR_5->retries++ < VAR_2)
   FUNC_2(VAR_4, 1);
  else
   FUNC_1(VAR_4, VAR_0);
 } else if (VAR_6->data) {
  if (FUNC_4(VAR_4, VAR_1, VAR_6->data->bytes_xfered))
   FUNC_2(VAR_4, 1);
  else
   FUNC_0(VAR_4, VAR_1);
 } else {
  FUNC_1(VAR_4, VAR_1);
 }

 FUNC_11(&VAR_3->lock, VAR_9);

 VAR_3->in_flight[FUNC_7(VAR_3, VAR_4)] -= 1;

 VAR_10 = (FUNC_9(VAR_3) == 0);

 FUNC_5(VAR_3);

 FUNC_12(&VAR_3->lock, VAR_9);

 if (!VAR_3->cqe_busy)
  FUNC_3(VAR_7, 1);

 if (VAR_10)
  FUNC_8(VAR_3->card, &VAR_3->ctx);
}
