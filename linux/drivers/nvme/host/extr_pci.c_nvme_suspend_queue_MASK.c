
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvme_queue {int cq_vector; TYPE_1__* dev; int flags; int qid; } ;
struct TYPE_4__ {scalar_t__ admin_q; } ;
struct TYPE_3__ {int dev; TYPE_2__ ctrl; int online_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,struct nvme_queue*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct nvme_queue *VAR_2)
{
 if (!FUNC_3(VAR_0, &VAR_2->flags))
  return 1;


 FUNC_1();

 VAR_2->dev->online_queues--;
 if (!VAR_2->qid && VAR_2->dev->ctrl.admin_q)
  FUNC_0(VAR_2->dev->ctrl.admin_q);
 if (!FUNC_3(VAR_1, &VAR_2->flags))
  FUNC_2(FUNC_4(VAR_2->dev->dev), VAR_2->cq_vector, VAR_2);
 return 0;
}
