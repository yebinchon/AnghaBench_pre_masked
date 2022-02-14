
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ibmvnic_tx_pool {int num_buffers; struct ibmvnic_tx_buff* tx_buff; } ;
struct ibmvnic_tx_buff {int * skb; } ;
struct ibmvnic_adapter {int dummy; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ibmvnic_adapter *VAR_0,
         struct ibmvnic_tx_pool *VAR_1)
{
 struct ibmvnic_tx_buff *VAR_2;
 u64 VAR_3;
 int VAR_4;

 if (!VAR_1 || !VAR_1->tx_buff)
  return;

 VAR_3 = VAR_1->num_buffers;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_2 = &VAR_1->tx_buff[VAR_4];
  if (VAR_2 && VAR_2->skb) {
   FUNC_0(VAR_2->skb);
   VAR_2->skb = ((void*)0);
  }
 }
}
