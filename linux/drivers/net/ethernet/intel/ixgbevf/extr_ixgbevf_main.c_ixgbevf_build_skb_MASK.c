
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct xdp_buff {unsigned int data; unsigned int data_meta; int data_end; int data_hard_start; } ;
struct skb_shared_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ixgbevf_rx_buffer {unsigned int page_offset; } ;
struct ixgbevf_ring {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_2 (int,unsigned int) ;
 int FUNC_3 (struct ixgbevf_ring*) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct ixgbevf_ring *VAR_1,
      struct ixgbevf_rx_buffer *VAR_2,
      struct xdp_buff *VAR_3,
      union ixgbe_adv_rx_desc *VAR_4)
{
 unsigned int VAR_5 = VAR_3->data - VAR_3->data_meta;

 unsigned int VAR_6 = FUNC_3(VAR_1) / 2;





 struct sk_buff *VAR_7;






 FUNC_4(VAR_3->data_meta);

 FUNC_4(VAR_3->data_meta + VAR_0);



 VAR_7 = FUNC_2(VAR_3->data_hard_start, VAR_6);
 if (FUNC_7(!VAR_7))
  return ((void*)0);


 FUNC_6(VAR_7, VAR_3->data - VAR_3->data_hard_start);
 FUNC_1(VAR_7, VAR_3->data_end - VAR_3->data);
 if (VAR_5)
  FUNC_5(VAR_7, VAR_5);



 VAR_2->page_offset ^= VAR_6;




 return VAR_7;
}
