
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvnic_tx_pool {int long_term_buff; int free_map; int tx_buff; } ;
struct ibmvnic_adapter {int dummy; } ;


 int FUNC_0 (struct ibmvnic_adapter*,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ibmvnic_adapter *VAR_0,
    struct ibmvnic_tx_pool *VAR_1)
{
 FUNC_1(VAR_1->tx_buff);
 FUNC_1(VAR_1->free_map);
 FUNC_0(VAR_0, &VAR_1->long_term_buff);
}
