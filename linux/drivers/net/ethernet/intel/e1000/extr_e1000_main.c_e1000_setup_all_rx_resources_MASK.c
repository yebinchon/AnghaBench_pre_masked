
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_adapter {int num_rx_queues; int * rx_ring; } ;


 int FUNC_0 (struct e1000_adapter*,int *) ;
 int FUNC_1 (struct e1000_adapter*,int *) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_0 ;

int FUNC_3(struct e1000_adapter *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rx_queues; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, &VAR_1->rx_ring[VAR_2]);
  if (VAR_3) {
   FUNC_2(VAR_0, "Allocation for Rx Queue %u failed\n", VAR_2);
   for (VAR_2-- ; VAR_2 >= 0; VAR_2--)
    FUNC_0(VAR_1,
       &VAR_1->rx_ring[VAR_2]);
   break;
  }
 }

 return VAR_3;
}
