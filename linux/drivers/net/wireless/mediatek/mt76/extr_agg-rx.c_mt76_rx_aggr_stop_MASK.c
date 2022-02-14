
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct mt76_wcid {int * aggr; } ;
struct mt76_rx_tid {int dummy; } ;
struct mt76_dev {int dummy; } ;


 int FUNC_0 (struct mt76_rx_tid*,int ) ;
 int FUNC_1 (struct mt76_dev*,struct mt76_rx_tid*) ;
 int FUNC_2 (int ,int *) ;
 struct mt76_rx_tid* FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(struct mt76_dev *VAR_1, struct mt76_wcid *VAR_2, u8 VAR_3)
{
 struct mt76_rx_tid *VAR_4;

 FUNC_4();

 VAR_4 = FUNC_3(VAR_2->aggr[VAR_3]);
 if (VAR_4) {
  FUNC_2(VAR_2->aggr[VAR_3], ((void*)0));
  FUNC_1(VAR_1, VAR_4);
  FUNC_0(VAR_4, VAR_0);
 }

 FUNC_5();
}
