
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct efx_rx_queue {unsigned int ptr_mask; int rx_packets; struct efx_nic* efx; } ;
struct efx_rx_buffer {int flags; unsigned int len; int page_offset; } ;
struct efx_nic {unsigned int rx_dma_len; scalar_t__ rx_prefix_size; int net_dev; int rx_scatter; } ;
struct efx_channel {unsigned int rx_pkt_n_frags; unsigned int rx_pkt_index; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct efx_channel*,struct efx_rx_buffer*,unsigned int) ;
 int FUNC_2 (struct efx_channel*,struct efx_rx_buffer*,unsigned int) ;
 struct efx_rx_buffer* FUNC_3 (struct efx_rx_queue*,struct efx_rx_buffer*) ;
 int FUNC_4 (struct efx_rx_buffer*) ;
 struct efx_rx_buffer* FUNC_5 (struct efx_rx_queue*,unsigned int) ;
 int FUNC_6 (struct efx_channel*) ;
 int FUNC_7 (struct efx_rx_queue*,struct efx_rx_buffer*,unsigned int) ;
 struct efx_channel* FUNC_8 (struct efx_rx_queue*) ;
 int FUNC_9 (struct efx_rx_queue*) ;
 int FUNC_10 (struct efx_nic*,struct efx_rx_buffer*,unsigned int) ;
 int FUNC_11 (struct efx_nic*,int ,int ,char*,int ,unsigned int,unsigned int,unsigned int,char*,char*) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (int) ;

void FUNC_14(struct efx_rx_queue *VAR_5, unsigned int VAR_6,
     unsigned int VAR_7, unsigned int VAR_8, u16 VAR_9)
{
 struct efx_nic *VAR_10 = VAR_5->efx;
 struct efx_channel *VAR_11 = FUNC_8(VAR_5);
 struct efx_rx_buffer *VAR_12;

 VAR_5->rx_packets++;

 VAR_12 = FUNC_5(VAR_5, VAR_6);
 VAR_12->flags |= VAR_9;


 if (VAR_7 == 1) {
  if (!(VAR_9 & VAR_3))
   FUNC_7(VAR_5, VAR_12, VAR_8);
 } else if (FUNC_13(VAR_7 > VAR_0) ||
     FUNC_13(VAR_8 <= (VAR_7 - 1) * VAR_10->rx_dma_len) ||
     FUNC_13(VAR_8 > VAR_7 * VAR_10->rx_dma_len) ||
     FUNC_13(!VAR_10->rx_scatter)) {



  FUNC_0(!(VAR_8 == 0 && VAR_12->flags & VAR_2));
  VAR_12->flags |= VAR_2;
 }

 FUNC_11(VAR_10, VAR_4, VAR_10->net_dev,
     "RX queue %d received ids %x-%x len %d %s%s\n",
     FUNC_9(VAR_5), VAR_6,
     (VAR_6 + VAR_7 - 1) & VAR_5->ptr_mask, VAR_8,
     (VAR_12->flags & VAR_1) ? " [SUMMED]" : "",
     (VAR_12->flags & VAR_2) ? " [DISCARD]" : "");




 if (FUNC_13(VAR_12->flags & VAR_2)) {
  FUNC_6(VAR_11);
  FUNC_1(VAR_11, VAR_12, VAR_7);
  return;
 }

 if (VAR_7 == 1 && !(VAR_9 & VAR_3))
  VAR_12->len = VAR_8;




 FUNC_10(VAR_10, VAR_12, VAR_12->len);




 FUNC_12(FUNC_4(VAR_12));

 VAR_12->page_offset += VAR_10->rx_prefix_size;
 VAR_12->len -= VAR_10->rx_prefix_size;

 if (VAR_7 > 1) {



  unsigned int VAR_13 = VAR_7 - 1;

  for (;;) {
   VAR_12 = FUNC_3(VAR_5, VAR_12);
   if (--VAR_13 == 0)
    break;
   FUNC_10(VAR_10, VAR_12, VAR_10->rx_dma_len);
  }
  VAR_12->len = VAR_8 - (VAR_7 - 1) * VAR_10->rx_dma_len;
  FUNC_10(VAR_10, VAR_12, VAR_12->len);
 }


 VAR_12 = FUNC_5(VAR_5, VAR_6);
 FUNC_2(VAR_11, VAR_12, VAR_7);




 FUNC_6(VAR_11);
 VAR_11->rx_pkt_n_frags = VAR_7;
 VAR_11->rx_pkt_index = VAR_6;
}
