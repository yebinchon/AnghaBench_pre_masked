
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct sk_buff {int dummy; } ;
struct ixgbe_rx_buffer {int pagecnt_bias; int page_offset; int dma; struct sk_buff* skb; int page; } ;
struct ixgbe_ring {size_t next_to_clean; int dev; struct ixgbe_rx_buffer* rx_buffer_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,unsigned int const,int ) ;
 int FUNC_1 (struct ixgbe_ring*,struct sk_buff*) ;
 int FUNC_2 (union ixgbe_adv_rx_desc*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static struct ixgbe_rx_buffer *FUNC_4(struct ixgbe_ring *VAR_2,
         union ixgbe_adv_rx_desc *VAR_3,
         struct sk_buff **VAR_4,
         const unsigned int VAR_5)
{
 struct ixgbe_rx_buffer *VAR_6;

 VAR_6 = &VAR_2->rx_buffer_info[VAR_2->next_to_clean];
 FUNC_3(VAR_6->page);
 *VAR_4 = VAR_6->skb;





 if (!FUNC_2(VAR_3, VAR_1)) {
  if (!*VAR_4)
   goto skip_sync;
 } else {
  if (*VAR_4)
   FUNC_1(VAR_2, *VAR_4);
 }


 FUNC_0(VAR_2->dev,
          VAR_6->dma,
          VAR_6->page_offset,
          VAR_5,
          VAR_0);
skip_sync:
 VAR_6->pagecnt_bias--;

 return VAR_6;
}
