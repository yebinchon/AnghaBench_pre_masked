
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_rx_page_state {int dummy; } ;
struct ef4_nic {int rx_page_buf_step; int rx_bufs_per_page; int rx_buffer_order; int rx_buffer_truesize; int rx_pages_per_batch; scalar_t__ rx_ip_align; scalar_t__ rx_dma_len; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct ef4_nic *VAR_3)
{
 VAR_3->rx_page_buf_step = FUNC_0(VAR_3->rx_dma_len + VAR_3->rx_ip_align,
          VAR_0);
 VAR_3->rx_bufs_per_page = VAR_3->rx_buffer_order ? 1 :
  ((VAR_2 - sizeof(struct ef4_rx_page_state)) /
   VAR_3->rx_page_buf_step);
 VAR_3->rx_buffer_truesize = (VAR_2 << VAR_3->rx_buffer_order) /
  VAR_3->rx_bufs_per_page;
 VAR_3->rx_pages_per_batch = FUNC_1(VAR_1,
            VAR_3->rx_bufs_per_page);
}
