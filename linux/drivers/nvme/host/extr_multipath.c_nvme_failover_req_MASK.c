
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct request {TYPE_1__* q; } ;
struct nvme_ns {TYPE_2__* head; TYPE_3__* ctrl; int flags; } ;
struct TYPE_8__ {int status; } ;
struct TYPE_7__ {int ana_work; int ana_log_buf; } ;
struct TYPE_6__ {int requeue_work; int requeue_lock; int requeue_list; } ;
struct TYPE_5__ {struct nvme_ns* queuedata; } ;


 int VAR_0 ;




 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (int *,struct request*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvme_ns*) ;
 TYPE_4__* FUNC_4 (struct request*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

void FUNC_10(struct request *VAR_2)
{
 struct nvme_ns *VAR_3 = VAR_2->q->queuedata;
 u16 VAR_4 = FUNC_4(VAR_2)->status;
 unsigned long VAR_5;

 FUNC_8(&VAR_3->head->requeue_lock, VAR_5);
 FUNC_1(&VAR_3->head->requeue_list, VAR_2);
 FUNC_9(&VAR_3->head->requeue_lock, VAR_5);
 FUNC_0(VAR_2, 0);

 switch (VAR_4 & 0x7ff) {
 case 129:
 case 131:
 case 130:
  FUNC_3(VAR_3);
  if (VAR_3->ctrl->ana_log_buf) {
   FUNC_7(VAR_0, &VAR_3->flags);
   FUNC_6(VAR_1, &VAR_3->ctrl->ana_work);
  }
  break;
 case 128:




  FUNC_3(VAR_3);
  break;
 default:




  FUNC_5(VAR_3->ctrl);
  break;
 }

 FUNC_2(&VAR_3->head->requeue_work);
}
