
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_dev {int * napi; int * rx_skb; int * q_rx; int napi_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mt76_dev*,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct mt76_dev *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->napi_dev);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->q_rx); VAR_2++) {
  FUNC_4(&VAR_1->napi_dev, &VAR_1->napi[VAR_2], VAR_0,
          64);
  FUNC_2(VAR_1, &VAR_1->q_rx[VAR_2]);
  FUNC_5(&VAR_1->rx_skb[VAR_2]);
  FUNC_3(&VAR_1->napi[VAR_2]);
 }

 return 0;
}
