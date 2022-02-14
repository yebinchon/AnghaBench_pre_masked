
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_ring {int ring_size; int netdev; int adapter; } ;
struct ena_adapter {int num_queues; struct ena_ring* rx_ring; } ;


 int FUNC_0 (struct ena_ring*,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ena_adapter *VAR_1)
{
 struct ena_ring *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_queues; VAR_3++) {
  VAR_2 = &VAR_1->rx_ring[VAR_3];
  VAR_5 = VAR_2->ring_size - 1;
  VAR_4 = FUNC_0(VAR_2, VAR_5);

  if (FUNC_2(VAR_4 != VAR_5))
   FUNC_1(VAR_2->adapter, VAR_0, VAR_2->netdev,
       "refilling Queue %d failed. allocated %d buffers from: %d\n",
       VAR_3, VAR_4, VAR_5);
 }
}
