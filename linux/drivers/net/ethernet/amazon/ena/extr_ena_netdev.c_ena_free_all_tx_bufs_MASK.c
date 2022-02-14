
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_ring {int dummy; } ;
struct ena_adapter {int num_queues; struct ena_ring* tx_ring; } ;


 int FUNC_0 (struct ena_ring*) ;

__attribute__((used)) static void FUNC_1(struct ena_adapter *VAR_0)
{
 struct ena_ring *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_queues; VAR_2++) {
  VAR_1 = &VAR_0->tx_ring[VAR_2];
  FUNC_0(VAR_1);
 }
}
