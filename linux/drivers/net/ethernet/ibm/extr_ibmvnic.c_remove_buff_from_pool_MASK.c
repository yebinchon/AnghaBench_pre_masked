
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_rx_pool {int* free_map; size_t next_alloc; int size; int available; struct ibmvnic_rx_buff* rx_buff; } ;
struct ibmvnic_rx_buff {size_t pool_index; int * skb; } ;
struct ibmvnic_adapter {struct ibmvnic_rx_pool* rx_pool; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ibmvnic_adapter *VAR_0,
      struct ibmvnic_rx_buff *VAR_1)
{
 struct ibmvnic_rx_pool *VAR_2 = &VAR_0->rx_pool[VAR_1->pool_index];

 VAR_1->skb = ((void*)0);

 VAR_2->free_map[VAR_2->next_alloc] = (int)(VAR_1 - VAR_2->rx_buff);
 VAR_2->next_alloc = (VAR_2->next_alloc + 1) % VAR_2->size;

 FUNC_0(&VAR_2->available);
}
