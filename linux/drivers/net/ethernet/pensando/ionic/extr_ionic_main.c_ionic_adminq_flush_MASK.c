
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ionic_adminq_cmd {int dummy; } ionic_adminq_cmd ;
struct ionic_queue {TYPE_1__* tail; TYPE_1__* head; } ;
struct ionic_lif {int adminq_lock; TYPE_2__* adminqcq; } ;
struct TYPE_4__ {struct ionic_queue q; } ;
struct TYPE_3__ {struct TYPE_3__* next; int * cb_arg; int * cb; int desc; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ionic_lif *VAR_0)
{
 struct ionic_queue *VAR_1 = &VAR_0->adminqcq->q;

 FUNC_1(&VAR_0->adminq_lock);

 while (VAR_1->tail != VAR_1->head) {
  FUNC_0(VAR_1->tail->desc, 0, sizeof(union ionic_adminq_cmd));
  VAR_1->tail->cb = ((void*)0);
  VAR_1->tail->cb_arg = ((void*)0);
  VAR_1->tail = VAR_1->tail->next;
 }
 FUNC_2(&VAR_0->adminq_lock);
}
