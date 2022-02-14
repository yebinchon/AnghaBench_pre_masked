
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm10k_intfc {int num_rx_queues; int * rx_ring; int netdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fm10k_intfc*,int ,int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct fm10k_intfc *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rx_queues; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1->rx_ring[VAR_2]);
  if (!VAR_3)
   continue;

  FUNC_2(VAR_1, VAR_0, VAR_1->netdev,
     "Allocation for Rx Queue %u failed\n", VAR_2);
  goto err_setup_rx;
 }

 return 0;
err_setup_rx:

 while (VAR_2--)
  FUNC_0(VAR_1->rx_ring[VAR_2]);
 return VAR_3;
}
