
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct message {int dummy; } ;
struct msgqueue_entry {struct message msg; struct msgqueue_entry* next; } ;
struct TYPE_3__ {struct msgqueue_entry* qe; } ;
typedef TYPE_1__ MsgQueue_t ;



struct message *FUNC_0(MsgQueue_t *VAR_0, int VAR_1)
{
 struct msgqueue_entry *VAR_2;

 for (VAR_2 = VAR_0->qe; VAR_2 && VAR_1; VAR_2 = VAR_2->next, VAR_1--);

 return VAR_2 ? &VAR_2->msg : ((void*)0);
}
