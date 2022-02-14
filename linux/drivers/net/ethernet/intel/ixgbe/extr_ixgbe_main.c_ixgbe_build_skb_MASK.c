
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct xdp_buff {unsigned int data; unsigned int data_meta; int data_end; int data_hard_start; } ;
struct skb_shared_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ixgbe_rx_buffer {unsigned int page_offset; int dma; } ;
struct ixgbe_ring {int dummy; } ;
struct TYPE_2__ {int dma; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_3 (int,unsigned int) ;
 int FUNC_4 (struct ixgbe_ring*) ;
 int FUNC_5 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct sk_buff*,unsigned int) ;
 int FUNC_8 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct ixgbe_ring *VAR_2,
           struct ixgbe_rx_buffer *VAR_3,
           struct xdp_buff *VAR_4,
           union ixgbe_adv_rx_desc *VAR_5)
{
 unsigned int VAR_6 = VAR_4->data - VAR_4->data_meta;

 unsigned int VAR_7 = FUNC_4(VAR_2) / 2;





 struct sk_buff *VAR_8;






 FUNC_6(VAR_4->data_meta);

 FUNC_6(VAR_4->data_meta + VAR_1);



 VAR_8 = FUNC_3(VAR_4->data_hard_start, VAR_7);
 if (FUNC_9(!VAR_8))
  return ((void*)0);


 FUNC_8(VAR_8, VAR_4->data - VAR_4->data_hard_start);
 FUNC_2(VAR_8, VAR_4->data_end - VAR_4->data);
 if (VAR_6)
  FUNC_7(VAR_8, VAR_6);


 if (!FUNC_5(VAR_5, VAR_0))
  FUNC_0(VAR_8)->dma = VAR_3->dma;



 VAR_3->page_offset ^= VAR_7;




 return VAR_8;
}
