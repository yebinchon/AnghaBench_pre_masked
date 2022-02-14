
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_1__ ips_copp_wait_item_t ;
struct TYPE_9__ {int count; TYPE_1__* tail; TYPE_1__* head; } ;
typedef TYPE_2__ ips_copp_queue_t ;


 int FUNC_0 (char*,int) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static ips_copp_wait_item_t *
FUNC_2(ips_copp_queue_t * VAR_0, ips_copp_wait_item_t * VAR_1)
{
 ips_copp_wait_item_t *VAR_2;

 FUNC_0("ips_removeq_copp", 1);

 if (!VAR_1)
  return (((void*)0));

 if (VAR_1 == VAR_0->head) {
  return (FUNC_1(VAR_0));
 }

 VAR_2 = VAR_0->head;

 while ((VAR_2) && (VAR_1 != VAR_2->next))
  VAR_2 = VAR_2->next;

 if (VAR_2) {

  VAR_2->next = VAR_1->next;

  if (!VAR_1->next)
   VAR_0->tail = VAR_2;

  VAR_1->next = ((void*)0);
  VAR_0->count--;

  return (VAR_1);
 }

 return (((void*)0));
}
