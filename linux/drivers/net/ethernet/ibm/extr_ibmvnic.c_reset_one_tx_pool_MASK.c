
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_tx_pool {int num_buffers; int* free_map; scalar_t__ producer_index; scalar_t__ consumer_index; int tx_buff; int long_term_buff; } ;
struct ibmvnic_tx_buff {int dummy; } ;
struct ibmvnic_adapter {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct ibmvnic_adapter*,int *) ;

__attribute__((used)) static int FUNC_2(struct ibmvnic_adapter *VAR_0,
        struct ibmvnic_tx_pool *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_0, &VAR_1->long_term_buff);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1->tx_buff, 0,
        VAR_1->num_buffers *
        sizeof(struct ibmvnic_tx_buff));

 for (VAR_3 = 0; VAR_3 < VAR_1->num_buffers; VAR_3++)
  VAR_1->free_map[VAR_3] = VAR_3;

 VAR_1->consumer_index = 0;
 VAR_1->producer_index = 0;

 return 0;
}
