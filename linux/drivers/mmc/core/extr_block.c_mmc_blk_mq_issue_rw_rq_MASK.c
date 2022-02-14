
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_7__ {int done; } ;
struct TYPE_6__ {TYPE_2__ mrq; } ;
struct mmc_queue_req {TYPE_1__ brq; } ;
struct mmc_queue {int rw_wait; TYPE_5__* card; } ;
struct mmc_host {int dummy; } ;
struct TYPE_8__ {struct mmc_host* host; } ;


 int FUNC_0 (struct mmc_queue*,struct request*) ;
 int VAR_0 ;
 int FUNC_1 (struct mmc_queue_req*,TYPE_5__*,int ,struct mmc_queue*) ;
 int FUNC_2 (struct mmc_queue*,struct request**) ;
 scalar_t__ FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,TYPE_2__*,int) ;
 int FUNC_5 (struct mmc_host*,TYPE_2__*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*,TYPE_2__*) ;
 struct mmc_queue_req* FUNC_8 (struct request*) ;

__attribute__((used)) static int FUNC_9(struct mmc_queue *VAR_1,
      struct request *VAR_2)
{
 struct mmc_queue_req *VAR_3 = FUNC_8(VAR_2);
 struct mmc_host *VAR_4 = VAR_1->card->host;
 struct request *VAR_5 = ((void*)0);
 int VAR_6 = 0;

 FUNC_1(VAR_3, VAR_1->card, 0, VAR_1);

 VAR_3->brq.mrq.done = VAR_0;

 FUNC_5(VAR_4, &VAR_3->brq.mrq);

 VAR_6 = FUNC_2(VAR_1, &VAR_5);
 if (VAR_6)
  goto out_post_req;

 VAR_1->rw_wait = 1;

 VAR_6 = FUNC_7(VAR_4, &VAR_3->brq.mrq);

 if (VAR_5)
  FUNC_0(VAR_1, VAR_5);

 if (VAR_6)
  VAR_1->rw_wait = 0;


 if (VAR_6 || FUNC_3(VAR_4))
  FUNC_6(VAR_4);

out_post_req:
 if (VAR_6)
  FUNC_4(VAR_4, &VAR_3->brq.mrq, VAR_6);

 return VAR_6;
}
