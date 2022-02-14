
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct msgqueue_entry {struct msgqueue_entry* next; } ;
struct TYPE_3__ {struct msgqueue_entry* free; } ;
typedef TYPE_1__ MsgQueue_t ;



__attribute__((used)) static struct msgqueue_entry *FUNC_0(MsgQueue_t *VAR_0)
{
 struct msgqueue_entry *VAR_1;

 if ((VAR_1 = VAR_0->free) != ((void*)0))
  VAR_0->free = VAR_1->next;

 return VAR_1;
}
