
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_rx_pool {int size; struct ibmvnic_rx_pool* rx_buff; int * skb; int long_term_buff; struct ibmvnic_rx_pool* free_map; } ;
struct ibmvnic_adapter {int num_active_rx_pools; struct ibmvnic_rx_pool* rx_pool; int netdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ibmvnic_adapter*,int *) ;
 int FUNC_2 (struct ibmvnic_rx_pool*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4(struct ibmvnic_adapter *VAR_0)
{
 struct ibmvnic_rx_pool *VAR_1;
 int VAR_2, VAR_3;

 if (!VAR_0->rx_pool)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_active_rx_pools; VAR_2++) {
  VAR_1 = &VAR_0->rx_pool[VAR_2];

  FUNC_3(VAR_0->netdev, "Releasing rx_pool[%d]\n", VAR_2);

  FUNC_2(VAR_1->free_map);
  FUNC_1(VAR_0, &VAR_1->long_term_buff);

  if (!VAR_1->rx_buff)
   continue;

  for (VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++) {
   if (VAR_1->rx_buff[VAR_3].skb) {
    FUNC_0(VAR_1->rx_buff[VAR_3].skb);
    VAR_1->rx_buff[VAR_3].skb = ((void*)0);
   }
  }

  FUNC_2(VAR_1->rx_buff);
 }

 FUNC_2(VAR_0->rx_pool);
 VAR_0->rx_pool = ((void*)0);
 VAR_0->num_active_rx_pools = 0;
}
