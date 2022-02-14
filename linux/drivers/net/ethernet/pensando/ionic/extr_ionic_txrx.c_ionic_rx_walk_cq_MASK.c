
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ionic_cq {int done_color; TYPE_1__* tail; } ;
struct TYPE_2__ {struct TYPE_2__* next; scalar_t__ last; } ;


 int FUNC_0 (struct ionic_cq*) ;
 scalar_t__ FUNC_1 (struct ionic_cq*,TYPE_1__*) ;

__attribute__((used)) static u32 FUNC_2(struct ionic_cq *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;

 while (FUNC_1(VAR_0, VAR_0->tail)) {
  if (VAR_0->tail->last)
   VAR_0->done_color = !VAR_0->done_color;
  VAR_0->tail = VAR_0->tail->next;
  FUNC_0(VAR_0);

  if (++VAR_2 >= VAR_1)
   break;
 }

 return VAR_2;
}
