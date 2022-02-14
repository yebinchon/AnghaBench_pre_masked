
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct msgqueue_entry {struct msgqueue_entry* next; } ;
struct TYPE_4__ {struct msgqueue_entry* qe; } ;
typedef TYPE_1__ MsgQueue_t ;


 int FUNC_0 (TYPE_1__*,struct msgqueue_entry*) ;

void FUNC_1(MsgQueue_t *VAR_0)
{
 struct msgqueue_entry *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->qe; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_0, VAR_1);
 }
 VAR_0->qe = ((void*)0);
}
