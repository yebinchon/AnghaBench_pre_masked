
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_ring {int * push_buf_intermediate_buf; int * free_ids; int * tx_buffer_info; } ;
struct ena_adapter {struct ena_ring* tx_ring; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ena_adapter *VAR_0, int VAR_1)
{
 struct ena_ring *VAR_2 = &VAR_0->tx_ring[VAR_1];

 FUNC_0(VAR_2->tx_buffer_info);
 VAR_2->tx_buffer_info = ((void*)0);

 FUNC_0(VAR_2->free_ids);
 VAR_2->free_ids = ((void*)0);

 FUNC_0(VAR_2->push_buf_intermediate_buf);
 VAR_2->push_buf_intermediate_buf = ((void*)0);
}
