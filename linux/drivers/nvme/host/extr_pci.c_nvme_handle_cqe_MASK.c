
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct request {int dummy; } ;
struct nvme_queue {scalar_t__ q_depth; scalar_t__ qid; int sq_tail; int * tags; TYPE_1__* dev; struct nvme_completion* cqes; } ;
struct nvme_completion {scalar_t__ command_id; int result; int status; int sq_head; int sq_id; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {TYPE_2__ ctrl; } ;


 scalar_t__ VAR_0 ;
 struct request* FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int *) ;
 int FUNC_4 (struct request*,int ,int ) ;
 int FUNC_5 (struct request*,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline void FUNC_7(struct nvme_queue *VAR_1, u16 VAR_2)
{
 volatile struct nvme_completion *VAR_3 = &VAR_1->cqes[VAR_2];
 struct request *VAR_4;

 if (FUNC_6(VAR_3->command_id >= VAR_1->q_depth)) {
  FUNC_1(VAR_1->dev->ctrl.device,
   "invalid id %d completed on queue %d\n",
   VAR_3->command_id, FUNC_2(VAR_3->sq_id));
  return;
 }







 if (FUNC_6(VAR_1->qid == 0 &&
   VAR_3->command_id >= VAR_0)) {
  FUNC_3(&VAR_1->dev->ctrl,
    VAR_3->status, &VAR_3->result);
  return;
 }

 VAR_4 = FUNC_0(*VAR_1->tags, VAR_3->command_id);
 FUNC_5(VAR_4, VAR_3->sq_head, VAR_1->sq_tail);
 FUNC_4(VAR_4, VAR_3->status, VAR_3->result);
}
