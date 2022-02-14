
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ibmvnic_tx_pool {int* free_map; int num_buffers; int buf_size; scalar_t__ producer_index; scalar_t__ consumer_index; int long_term_buff; void* tx_buff; } ;
struct ibmvnic_tx_buff {int dummy; } ;
struct ibmvnic_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ibmvnic_adapter*,int *,int) ;
 void* FUNC_1 (int,int,int ) ;
 struct ibmvnic_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
       struct ibmvnic_tx_pool *VAR_2,
       int VAR_3, int VAR_4)
{
 struct ibmvnic_adapter *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 VAR_2->tx_buff = FUNC_1(VAR_3,
       sizeof(struct ibmvnic_tx_buff),
       VAR_0);
 if (!VAR_2->tx_buff)
  return -1;

 if (FUNC_0(VAR_5, &VAR_2->long_term_buff,
     VAR_3 * VAR_4))
  return -1;

 VAR_2->free_map = FUNC_1(VAR_3, sizeof(int), VAR_0);
 if (!VAR_2->free_map)
  return -1;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  VAR_2->free_map[VAR_6] = VAR_6;

 VAR_2->consumer_index = 0;
 VAR_2->producer_index = 0;
 VAR_2->num_buffers = VAR_3;
 VAR_2->buf_size = VAR_4;

 return 0;
}
