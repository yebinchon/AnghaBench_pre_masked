
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt76x02_tx_status {int dummy; } ;
struct mt76x02_dev {int txstatus_fifo; } ;


 scalar_t__ FUNC_0 (int *,struct mt76x02_tx_status*) ;
 int FUNC_1 (struct mt76x02_dev*,struct mt76x02_tx_status*,int*) ;

__attribute__((used)) static void FUNC_2(struct mt76x02_dev *VAR_0)
{
 struct mt76x02_tx_status VAR_1;
 u8 VAR_2 = 1;

 while (FUNC_0(&VAR_0->txstatus_fifo, &VAR_1))
  FUNC_1(VAR_0, &VAR_1, &VAR_2);
}
