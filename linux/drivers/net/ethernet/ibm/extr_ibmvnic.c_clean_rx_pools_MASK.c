
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ibmvnic_rx_pool {struct ibmvnic_rx_buff* rx_buff; } ;
struct ibmvnic_rx_buff {int * skb; } ;
struct ibmvnic_adapter {int num_active_rx_pools; int req_rx_add_entries_per_subcrq; int netdev; struct ibmvnic_rx_pool* rx_pool; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct ibmvnic_adapter *VAR_0)
{
 struct ibmvnic_rx_pool *VAR_1;
 struct ibmvnic_rx_buff *VAR_2;
 u64 VAR_3;
 int VAR_4;
 int VAR_5, VAR_6;

 if (!VAR_0->rx_pool)
  return;

 VAR_4 = VAR_0->num_active_rx_pools;
 VAR_3 = VAR_0->req_rx_add_entries_per_subcrq;


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_1 = &VAR_0->rx_pool[VAR_5];
  if (!VAR_1 || !VAR_1->rx_buff)
   continue;

  FUNC_1(VAR_0->netdev, "Cleaning rx_pool[%d]\n", VAR_5);
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
   VAR_2 = &VAR_1->rx_buff[VAR_6];
   if (VAR_2 && VAR_2->skb) {
    FUNC_0(VAR_2->skb);
    VAR_2->skb = ((void*)0);
   }
  }
 }
}
