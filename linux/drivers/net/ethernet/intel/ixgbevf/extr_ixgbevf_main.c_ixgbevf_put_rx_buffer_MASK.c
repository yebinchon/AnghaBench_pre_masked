
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ixgbevf_rx_buffer {int * page; int pagecnt_bias; int dma; } ;
struct ixgbevf_ring {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct ixgbevf_rx_buffer*) ;
 int FUNC_4 (struct ixgbevf_ring*,struct ixgbevf_rx_buffer*) ;
 int FUNC_5 (struct ixgbevf_ring*) ;

__attribute__((used)) static void FUNC_6(struct ixgbevf_ring *VAR_2,
      struct ixgbevf_rx_buffer *VAR_3,
      struct sk_buff *VAR_4)
{
 if (FUNC_3(VAR_3)) {

  FUNC_4(VAR_2, VAR_3);
 } else {
  if (FUNC_0(VAR_4))



   FUNC_2(VAR_2->dev, VAR_3->dma,
          FUNC_5(VAR_2),
          VAR_0,
          VAR_1);
  FUNC_1(VAR_3->page,
     VAR_3->pagecnt_bias);
 }


 VAR_3->page = ((void*)0);
}
