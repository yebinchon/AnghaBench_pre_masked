
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct request {TYPE_4__* q; } ;
struct TYPE_7__ {int* resp; } ;
struct TYPE_6__ {int* resp; } ;
struct mmc_blk_request {TYPE_3__ stop; TYPE_2__ cmd; } ;
struct mmc_queue_req {struct mmc_blk_request brq; } ;
struct mmc_queue {TYPE_1__* card; } ;
struct TYPE_8__ {struct mmc_queue* queuedata; } ;
struct TYPE_5__ {int host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_blk_request*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct mmc_queue_req* FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;

__attribute__((used)) static bool FUNC_5(struct request *VAR_2, u32 VAR_3)
{
 struct mmc_queue_req *VAR_4 = FUNC_3(VAR_2);
 struct mmc_blk_request *VAR_5 = &VAR_4->brq;
 struct mmc_queue *VAR_6 = VAR_2->q->queuedata;
 u32 VAR_7;

 if (FUNC_2(VAR_6->card->host))
  return 0;

 VAR_7 = FUNC_1(VAR_5);

 return VAR_5->cmd.resp[0] & VAR_0 ||
        VAR_5->stop.resp[0] & VAR_7 ||
        VAR_3 & VAR_7 ||
        (FUNC_4(VAR_2) == VAR_1 && !FUNC_0(VAR_3));
}
