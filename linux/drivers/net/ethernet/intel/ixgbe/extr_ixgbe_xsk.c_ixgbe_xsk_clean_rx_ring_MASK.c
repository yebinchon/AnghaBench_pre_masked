
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ixgbe_rx_buffer {int handle; } ;
struct ixgbe_ring {size_t next_to_clean; size_t next_to_alloc; size_t count; struct ixgbe_rx_buffer* rx_buffer_info; int xsk_umem; } ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(struct ixgbe_ring *VAR_0)
{
 u16 VAR_1 = VAR_0->next_to_clean;
 struct ixgbe_rx_buffer *VAR_2 = &VAR_0->rx_buffer_info[VAR_1];

 while (VAR_1 != VAR_0->next_to_alloc) {
  FUNC_0(VAR_0->xsk_umem, VAR_2->handle);
  VAR_1++;
  VAR_2++;
  if (VAR_1 == VAR_0->count) {
   VAR_1 = 0;
   VAR_2 = VAR_0->rx_buffer_info;
  }
 }
}
