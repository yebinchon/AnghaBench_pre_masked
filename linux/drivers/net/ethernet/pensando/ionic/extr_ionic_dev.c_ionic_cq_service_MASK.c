
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ionic_cq {int done_color; TYPE_1__* tail; } ;
typedef int (* ionic_cq_done_cb ) (void*) ;
typedef scalar_t__ (* ionic_cq_cb ) (struct ionic_cq*,TYPE_1__*) ;
struct TYPE_3__ {struct TYPE_3__* next; scalar_t__ last; } ;


 int FUNC_0 (struct ionic_cq*) ;

unsigned int FUNC_1(struct ionic_cq *VAR_0, unsigned int VAR_1,
         ionic_cq_cb VAR_2, ionic_cq_done_cb VAR_3,
         void *VAR_4)
{
 unsigned int VAR_5 = 0;

 if (VAR_1 == 0)
  return 0;

 while (VAR_2(VAR_0, VAR_0->tail)) {
  if (VAR_0->tail->last)
   VAR_0->done_color = !VAR_0->done_color;
  VAR_0->tail = VAR_0->tail->next;
  FUNC_0(VAR_0);

  if (++VAR_5 >= VAR_1)
   break;
 }

 if (VAR_5 && VAR_3)
  VAR_3(VAR_4);

 return VAR_5;
}
