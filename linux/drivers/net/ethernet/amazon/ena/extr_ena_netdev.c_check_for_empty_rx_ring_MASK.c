
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int empty_rx_ring; } ;
struct ena_ring {int ring_size; scalar_t__ empty_rx_queue; int napi; int syncp; TYPE_1__ rx_stats; int ena_com_io_sq; } ;
struct ena_adapter {int num_queues; int netdev; struct ena_ring* rx_ring; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ena_adapter*,int ,int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct ena_adapter *VAR_4)
{
 struct ena_ring *VAR_5;
 int VAR_6, VAR_7;

 if (!FUNC_3(VAR_1, &VAR_4->flags))
  return;

 if (FUNC_3(VAR_2, &VAR_4->flags))
  return;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_queues; VAR_6++) {
  VAR_5 = &VAR_4->rx_ring[VAR_6];

  VAR_7 =
   FUNC_0(VAR_5->ena_com_io_sq);
  if (FUNC_6(VAR_7 == (VAR_5->ring_size - 1))) {
   VAR_5->empty_rx_queue++;

   if (VAR_5->empty_rx_queue >= VAR_0) {
    FUNC_4(&VAR_5->syncp);
    VAR_5->rx_stats.empty_rx_ring++;
    FUNC_5(&VAR_5->syncp);

    FUNC_2(VAR_4, VAR_3, VAR_4->netdev,
       "trigger refill for ring %d\n", VAR_6);

    FUNC_1(VAR_5->napi);
    VAR_5->empty_rx_queue = 0;
   }
  } else {
   VAR_5->empty_rx_queue = 0;
  }
 }
}
