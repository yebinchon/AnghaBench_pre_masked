
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_dev {int * q_rx; int * napi; int * q_tx; int tx_napi; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mt76_dev*,int *) ;
 int FUNC_2 (struct mt76_dev*,int,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct mt76_dev *VAR_0)
{
 int VAR_1;

 FUNC_3(&VAR_0->tx_napi);
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->q_tx); VAR_1++)
  FUNC_2(VAR_0, VAR_1, 1);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->q_rx); VAR_1++) {
  FUNC_3(&VAR_0->napi[VAR_1]);
  FUNC_1(VAR_0, &VAR_0->q_rx[VAR_1]);
 }
}
