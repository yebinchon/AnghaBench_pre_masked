
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_queue {int ndesc; TYPE_1__* entry; } ;
struct mt76_dev {struct mt76_queue* q_rx; } ;
struct TYPE_2__ {int urb; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct mt76_dev*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct mt76_dev *VAR_1)
{
 struct mt76_queue *VAR_2 = &VAR_1->q_rx[VAR_0];
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->ndesc; VAR_3++)
  FUNC_1(VAR_2->entry[VAR_3].urb);

 return FUNC_0(VAR_1);
}
