
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ena_ring {scalar_t__ empty_rx_queue; int smoothed_interval; int sgl_size; int rx_copybreak; int ring_size; int tx_mem_queue_type; int tx_max_header_size; } ;
struct ena_com_dev {int tx_mem_queue_type; int tx_max_header_size; } ;
struct ena_adapter {int num_queues; TYPE_2__* ena_napi; int max_rx_sgl_size; int rx_copybreak; int requested_rx_ring_size; int max_tx_sgl_size; int requested_tx_ring_size; struct ena_ring* rx_ring; struct ena_ring* tx_ring; struct ena_com_dev* ena_dev; } ;
struct TYPE_3__ {int mode; } ;
struct TYPE_4__ {TYPE_1__ dim; } ;


 int VAR_0 ;
 int FUNC_0 (struct ena_com_dev*) ;
 int FUNC_1 (struct ena_com_dev*) ;
 int FUNC_2 (struct ena_adapter*,struct ena_ring*,int) ;

__attribute__((used)) static void FUNC_3(struct ena_adapter *VAR_1)
{
 struct ena_com_dev *VAR_2;
 struct ena_ring *VAR_3, *VAR_4;
 int VAR_5;

 VAR_2 = VAR_1->ena_dev;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_queues; VAR_5++) {
  VAR_3 = &VAR_1->tx_ring[VAR_5];
  VAR_4 = &VAR_1->rx_ring[VAR_5];


  FUNC_2(VAR_1, VAR_3, VAR_5);
  FUNC_2(VAR_1, VAR_4, VAR_5);


  VAR_3->ring_size = VAR_1->requested_tx_ring_size;
  VAR_3->tx_max_header_size = VAR_2->tx_max_header_size;
  VAR_3->tx_mem_queue_type = VAR_2->tx_mem_queue_type;
  VAR_3->sgl_size = VAR_1->max_tx_sgl_size;
  VAR_3->smoothed_interval =
   FUNC_1(VAR_2);


  VAR_4->ring_size = VAR_1->requested_rx_ring_size;
  VAR_4->rx_copybreak = VAR_1->rx_copybreak;
  VAR_4->sgl_size = VAR_1->max_rx_sgl_size;
  VAR_4->smoothed_interval =
   FUNC_0(VAR_2);
  VAR_4->empty_rx_queue = 0;
  VAR_1->ena_napi[VAR_5].dim.mode = VAR_0;
 }
}
