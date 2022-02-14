
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct ixgbe_rx_buffer {int pagecnt_bias; int page; int dma; int page_offset; struct sk_buff* skb; } ;
struct ixgbe_ring {size_t next_to_clean; size_t next_to_alloc; size_t count; scalar_t__ next_to_use; struct ixgbe_rx_buffer* rx_buffer_info; int dev; scalar_t__ xsk_umem; } ;
struct TYPE_2__ {int dma; scalar_t__ page_released; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct ixgbe_ring*) ;
 int FUNC_6 (struct ixgbe_ring*) ;
 int FUNC_7 (struct ixgbe_ring*) ;

__attribute__((used)) static void FUNC_8(struct ixgbe_ring *VAR_2)
{
 u16 VAR_3 = VAR_2->next_to_clean;
 struct ixgbe_rx_buffer *VAR_4 = &VAR_2->rx_buffer_info[VAR_3];

 if (VAR_2->xsk_umem) {
  FUNC_7(VAR_2);
  goto skip_free;
 }


 while (VAR_3 != VAR_2->next_to_alloc) {
  if (VAR_4->skb) {
   struct sk_buff *VAR_5 = VAR_4->skb;
   if (FUNC_0(VAR_5)->page_released)
    FUNC_4(VAR_2->dev,
           FUNC_0(VAR_5)->dma,
           FUNC_6(VAR_2),
           VAR_0,
           VAR_1);
   FUNC_2(VAR_5);
  }




  FUNC_3(VAR_2->dev,
           VAR_4->dma,
           VAR_4->page_offset,
           FUNC_5(VAR_2),
           VAR_0);


  FUNC_4(VAR_2->dev, VAR_4->dma,
         FUNC_6(VAR_2),
         VAR_0,
         VAR_1);
  FUNC_1(VAR_4->page,
     VAR_4->pagecnt_bias);

  VAR_3++;
  VAR_4++;
  if (VAR_3 == VAR_2->count) {
   VAR_3 = 0;
   VAR_4 = VAR_2->rx_buffer_info;
  }
 }

skip_free:
 VAR_2->next_to_alloc = 0;
 VAR_2->next_to_clean = 0;
 VAR_2->next_to_use = 0;
}
