
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ixgbe_rx_buffer {scalar_t__ dma; int * skb; int * page; int pagecnt_bias; } ;
struct ixgbe_ring {int dev; } ;
struct TYPE_2__ {scalar_t__ dma; int page_released; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct ixgbe_rx_buffer*) ;
 int FUNC_5 (struct ixgbe_ring*,struct ixgbe_rx_buffer*) ;
 int FUNC_6 (struct ixgbe_ring*) ;

__attribute__((used)) static void FUNC_7(struct ixgbe_ring *VAR_2,
    struct ixgbe_rx_buffer *VAR_3,
    struct sk_buff *VAR_4)
{
 if (FUNC_4(VAR_3)) {

  FUNC_5(VAR_2, VAR_3);
 } else {
  if (!FUNC_0(VAR_4) && FUNC_1(VAR_4)->dma == VAR_3->dma) {

   FUNC_1(VAR_4)->page_released = 1;
  } else {

   FUNC_3(VAR_2->dev, VAR_3->dma,
          FUNC_6(VAR_2),
          VAR_0,
          VAR_1);
  }
  FUNC_2(VAR_3->page,
     VAR_3->pagecnt_bias);
 }


 VAR_3->page = ((void*)0);
 VAR_3->skb = ((void*)0);
}
