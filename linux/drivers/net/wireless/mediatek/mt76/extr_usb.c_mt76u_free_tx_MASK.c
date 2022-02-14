
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt76_queue {int ndesc; TYPE_2__* entry; } ;
struct mt76_dev {TYPE_1__* q_tx; } ;
struct TYPE_4__ {int urb; } ;
struct TYPE_3__ {struct mt76_queue* q; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mt76_dev *VAR_1)
{
 struct mt76_queue *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = VAR_1->q_tx[VAR_3].q;
  for (VAR_4 = 0; VAR_4 < VAR_2->ndesc; VAR_4++)
   FUNC_0(VAR_2->entry[VAR_4].urb);
 }
}
