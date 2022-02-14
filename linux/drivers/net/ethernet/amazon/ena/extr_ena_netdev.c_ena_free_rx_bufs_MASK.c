
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ena_rx_buffer {scalar_t__ page; } ;
struct ena_ring {size_t ring_size; struct ena_rx_buffer* rx_buffer_info; } ;
struct ena_adapter {struct ena_ring* rx_ring; } ;


 int FUNC_0 (struct ena_ring*,struct ena_rx_buffer*) ;

__attribute__((used)) static void FUNC_1(struct ena_adapter *VAR_0,
        u32 VAR_1)
{
 struct ena_ring *VAR_2 = &VAR_0->rx_ring[VAR_1];
 u32 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->ring_size; VAR_3++) {
  struct ena_rx_buffer *VAR_4 = &VAR_2->rx_buffer_info[VAR_3];

  if (VAR_4->page)
   FUNC_0(VAR_2, VAR_4);
 }
}
