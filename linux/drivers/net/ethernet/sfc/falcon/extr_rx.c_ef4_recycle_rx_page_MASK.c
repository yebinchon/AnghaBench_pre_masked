
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ef4_rx_queue {unsigned int page_add; unsigned int page_ptr_mask; unsigned int page_remove; int page_recycle_full; struct page** page_ring; struct ef4_nic* efx; } ;
struct ef4_rx_buffer {int flags; struct page* page; } ;
struct ef4_nic {int dummy; } ;
struct ef4_channel {int dummy; } ;


 int VAR_0 ;
 struct ef4_rx_queue* FUNC_0 (struct ef4_channel*) ;
 int FUNC_1 (struct ef4_nic*,struct ef4_rx_buffer*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static void FUNC_3(struct ef4_channel *VAR_1,
    struct ef4_rx_buffer *VAR_2)
{
 struct page *VAR_3 = VAR_2->page;
 struct ef4_rx_queue *VAR_4 = FUNC_0(VAR_1);
 struct ef4_nic *VAR_5 = VAR_4->efx;
 unsigned VAR_6;


 if (!(VAR_2->flags & VAR_0))
  return;

 VAR_6 = VAR_4->page_add & VAR_4->page_ptr_mask;
 if (VAR_4->page_ring[VAR_6] == ((void*)0)) {
  unsigned VAR_7 = VAR_4->page_remove &
   VAR_4->page_ptr_mask;





  if (VAR_7 == VAR_6)
   ++VAR_4->page_remove;
  VAR_4->page_ring[VAR_6] = VAR_3;
  ++VAR_4->page_add;
  return;
 }
 ++VAR_4->page_recycle_full;
 FUNC_1(VAR_5, VAR_2);
 FUNC_2(VAR_2->page);
}
