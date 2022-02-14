
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_sw_queue {int swq_queued; } ;
struct mt76_dev {int hw; struct mt76_sw_queue* q_tx; } ;
typedef enum mt76_txq_id { ____Placeholder_mt76_txq_id } mt76_txq_id ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mt76_dev*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct mt76_dev *VAR_0, enum mt76_txq_id VAR_1)
{
 struct mt76_sw_queue *VAR_2 = &VAR_0->q_tx[VAR_1];
 int VAR_3;

 if (VAR_1 >= 4)
  return;

 if (VAR_2->swq_queued >= 4)
  return;

 FUNC_3();

 do {
  FUNC_1(VAR_0->hw, VAR_1);
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_0->hw, VAR_1);
 } while (VAR_3 > 0);

 FUNC_4();
}
