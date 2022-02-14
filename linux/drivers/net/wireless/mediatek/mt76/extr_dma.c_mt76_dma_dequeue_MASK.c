
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt76_queue {int tail; int ndesc; int queued; TYPE_1__* desc; } ;
struct mt76_dev {int dummy; } ;
struct TYPE_2__ {int ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct mt76_dev*,struct mt76_queue*,int,int*,int *,int*) ;

__attribute__((used)) static void *
FUNC_2(struct mt76_dev *VAR_1, struct mt76_queue *VAR_2, bool VAR_3,
   int *VAR_4, u32 *VAR_5, bool *VAR_6)
{
 int VAR_7 = VAR_2->tail;

 *VAR_6 = 0;
 if (!VAR_2->queued)
  return ((void*)0);

 if (!VAR_3 && !(VAR_2->desc[VAR_7].ctrl & FUNC_0(VAR_0)))
  return ((void*)0);

 VAR_2->tail = (VAR_2->tail + 1) % VAR_2->ndesc;
 VAR_2->queued--;

 return FUNC_1(VAR_1, VAR_2, VAR_7, VAR_4, VAR_5, VAR_6);
}
