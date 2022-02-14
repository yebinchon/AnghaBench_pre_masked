
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ena_tx_buffer {int dummy; } ;
struct ena_ring {int* tx_buffer_info; int ring_size; int* free_ids; int tx_max_header_size; int cpu; scalar_t__ next_to_clean; scalar_t__ next_to_use; int tx_stats; void* push_buf_intermediate_buf; } ;
struct ena_irq {int cpu; } ;
struct ena_adapter {int netdev; struct ena_irq* irq_tbl; struct ena_ring* tx_ring; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct ena_adapter*,int ,int ,char*) ;
 int FUNC_4 (int*) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct ena_adapter *VAR_3, int VAR_4)
{
 struct ena_ring *VAR_5 = &VAR_3->tx_ring[VAR_4];
 struct ena_irq *VAR_6 = &VAR_3->irq_tbl[FUNC_0(VAR_4)];
 int VAR_7, VAR_8, VAR_9;

 if (VAR_5->tx_buffer_info) {
  FUNC_3(VAR_3, VAR_2,
     VAR_3->netdev, "tx_buffer_info info is not NULL");
  return -VAR_0;
 }

 VAR_7 = sizeof(struct ena_tx_buffer) * VAR_5->ring_size;
 VAR_9 = FUNC_1(VAR_6->cpu);

 VAR_5->tx_buffer_info = FUNC_6(VAR_7, VAR_9);
 if (!VAR_5->tx_buffer_info) {
  VAR_5->tx_buffer_info = FUNC_5(VAR_7);
  if (!VAR_5->tx_buffer_info)
   goto err_tx_buffer_info;
 }

 VAR_7 = sizeof(u16) * VAR_5->ring_size;
 VAR_5->free_ids = FUNC_6(VAR_7, VAR_9);
 if (!VAR_5->free_ids) {
  VAR_5->free_ids = FUNC_5(VAR_7);
  if (!VAR_5->free_ids)
   goto err_tx_free_ids;
 }

 VAR_7 = VAR_5->tx_max_header_size;
 VAR_5->push_buf_intermediate_buf = FUNC_6(VAR_7, VAR_9);
 if (!VAR_5->push_buf_intermediate_buf) {
  VAR_5->push_buf_intermediate_buf = FUNC_5(VAR_7);
  if (!VAR_5->push_buf_intermediate_buf)
   goto err_push_buf_intermediate_buf;
 }


 for (VAR_8 = 0; VAR_8 < VAR_5->ring_size; VAR_8++)
  VAR_5->free_ids[VAR_8] = VAR_8;


 FUNC_2(&VAR_5->tx_stats, 0x0, sizeof(VAR_5->tx_stats));

 VAR_5->next_to_use = 0;
 VAR_5->next_to_clean = 0;
 VAR_5->cpu = VAR_6->cpu;
 return 0;

err_push_buf_intermediate_buf:
 FUNC_4(VAR_5->free_ids);
 VAR_5->free_ids = ((void*)0);
err_tx_free_ids:
 FUNC_4(VAR_5->tx_buffer_info);
 VAR_5->tx_buffer_info = ((void*)0);
err_tx_buffer_info:
 return -VAR_1;
}
