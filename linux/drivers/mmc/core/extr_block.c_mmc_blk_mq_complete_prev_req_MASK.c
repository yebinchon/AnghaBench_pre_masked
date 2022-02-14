
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct mmc_queue {int complete_lock; struct request* complete_req; TYPE_1__* card; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct mmc_queue*,struct request*) ;
 int FUNC_1 (struct mmc_queue*,struct request*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mmc_queue *VAR_0,
      struct request **VAR_1)
{
 if (FUNC_2(VAR_0->card->host))
  return;

 FUNC_3(&VAR_0->complete_lock);

 if (!VAR_0->complete_req)
  goto out_unlock;

 FUNC_0(VAR_0, VAR_0->complete_req);

 if (VAR_1)
  *VAR_1 = VAR_0->complete_req;
 else
  FUNC_1(VAR_0, VAR_0->complete_req);

 VAR_0->complete_req = ((void*)0);

out_unlock:
 FUNC_4(&VAR_0->complete_lock);
}
