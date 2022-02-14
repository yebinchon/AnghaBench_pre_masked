
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct ena_rx_buffer {int dummy; } ;
struct ena_ring {int ring_size; int* free_ids; int cpu; scalar_t__ next_to_use; scalar_t__ next_to_clean; int rx_stats; int * rx_buffer_info; } ;
struct ena_irq {int cpu; } ;
struct ena_adapter {int netdev; struct ena_irq* irq_tbl; struct ena_ring* rx_ring; } ;


 int VAR_0 ;
 size_t FUNC_0 (size_t) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (struct ena_adapter*,int ,int ,char*) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct ena_adapter *VAR_3,
      u32 VAR_4)
{
 struct ena_ring *VAR_5 = &VAR_3->rx_ring[VAR_4];
 struct ena_irq *VAR_6 = &VAR_3->irq_tbl[FUNC_0(VAR_4)];
 int VAR_7, VAR_8, VAR_9;

 if (VAR_5->rx_buffer_info) {
  FUNC_3(VAR_3, VAR_2, VAR_3->netdev,
     "rx_buffer_info is not NULL");
  return -VAR_0;
 }




 VAR_7 = sizeof(struct ena_rx_buffer) * (VAR_5->ring_size + 1);
 VAR_8 = FUNC_1(VAR_6->cpu);

 VAR_5->rx_buffer_info = FUNC_6(VAR_7, VAR_8);
 if (!VAR_5->rx_buffer_info) {
  VAR_5->rx_buffer_info = FUNC_5(VAR_7);
  if (!VAR_5->rx_buffer_info)
   return -VAR_1;
 }

 VAR_7 = sizeof(u16) * VAR_5->ring_size;
 VAR_5->free_ids = FUNC_6(VAR_7, VAR_8);
 if (!VAR_5->free_ids) {
  VAR_5->free_ids = FUNC_5(VAR_7);
  if (!VAR_5->free_ids) {
   FUNC_4(VAR_5->rx_buffer_info);
   VAR_5->rx_buffer_info = ((void*)0);
   return -VAR_1;
  }
 }


 for (VAR_9 = 0; VAR_9 < VAR_5->ring_size; VAR_9++)
  VAR_5->free_ids[VAR_9] = VAR_9;


 FUNC_2(&VAR_5->rx_stats, 0x0, sizeof(VAR_5->rx_stats));

 VAR_5->next_to_clean = 0;
 VAR_5->next_to_use = 0;
 VAR_5->cpu = VAR_6->cpu;

 return 0;
}
