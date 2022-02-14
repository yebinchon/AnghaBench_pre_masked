
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_napi {int qid; int * tx_ring; int * rx_ring; int napi; } ;
struct ena_adapter {int num_queues; int * tx_ring; int * rx_ring; struct ena_napi* ena_napi; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ena_adapter *VAR_2)
{
 struct ena_napi *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_queues; VAR_4++) {
  VAR_3 = &VAR_2->ena_napi[VAR_4];

  FUNC_0(VAR_2->netdev,
          &VAR_2->ena_napi[VAR_4].napi,
          VAR_1,
          VAR_0);
  VAR_3->rx_ring = &VAR_2->rx_ring[VAR_4];
  VAR_3->tx_ring = &VAR_2->tx_ring[VAR_4];
  VAR_3->qid = VAR_4;
 }
}
