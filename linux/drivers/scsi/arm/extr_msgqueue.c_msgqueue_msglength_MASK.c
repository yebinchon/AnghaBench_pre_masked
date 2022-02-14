
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ length; } ;
struct msgqueue_entry {TYPE_1__ msg; struct msgqueue_entry* next; } ;
struct TYPE_5__ {struct msgqueue_entry* qe; } ;
typedef TYPE_2__ MsgQueue_t ;



int FUNC_0(MsgQueue_t *VAR_0)
{
 struct msgqueue_entry *VAR_1 = VAR_0->qe;
 int VAR_2 = 0;

 for (VAR_1 = VAR_0->qe; VAR_1; VAR_1 = VAR_1->next)
  VAR_2 += VAR_1->msg.length;

 return VAR_2;
}
