
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mt76x02_tx_status {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct mt76x02_dev {int txstatus_fifo; int txstatus_fifo_lock; TYPE_1__ mt76; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct mt76x02_tx_status) ;
 int FUNC_2 (struct mt76x02_dev*,struct mt76x02_tx_status*) ;
 int FUNC_3 (struct mt76x02_dev*,struct mt76x02_tx_status*,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct mt76x02_dev*) ;

void FUNC_8(struct mt76x02_dev *VAR_1, bool VAR_2)
{
 struct mt76x02_tx_status VAR_3 = {};
 u8 VAR_4 = 1;
 bool VAR_5;

 if (!FUNC_6(VAR_0, &VAR_1->mt76.state))
  return;

 FUNC_7(VAR_1);

 while (!VAR_2 || !FUNC_0(&VAR_1->txstatus_fifo)) {
  if (!FUNC_4(&VAR_1->txstatus_fifo_lock))
   break;

  VAR_5 = FUNC_2(VAR_1, &VAR_3);
  FUNC_5(&VAR_1->txstatus_fifo_lock);

  if (!VAR_5)
   break;

  if (!VAR_2) {
   FUNC_3(VAR_1, &VAR_3, &VAR_4);
   continue;
  }

  FUNC_1(&VAR_1->txstatus_fifo, VAR_3);
 }
}
