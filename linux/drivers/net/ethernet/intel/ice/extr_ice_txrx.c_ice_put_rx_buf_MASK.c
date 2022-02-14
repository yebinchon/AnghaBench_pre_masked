
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_rx_buf {int * skb; int * page; int pagecnt_bias; int dma; } ;
struct TYPE_2__ {int page_reuse_count; } ;
struct ice_ring {int dev; TYPE_1__ rx_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct ice_rx_buf*) ;
 int FUNC_3 (struct ice_ring*,struct ice_rx_buf*) ;

__attribute__((used)) static void FUNC_4(struct ice_ring *VAR_3, struct ice_rx_buf *VAR_4)
{
 if (!VAR_4)
  return;

 if (FUNC_2(VAR_4)) {

  FUNC_3(VAR_3, VAR_4);
  VAR_3->rx_stats.page_reuse_count++;
 } else {

  FUNC_1(VAR_3->dev, VAR_4->dma, VAR_2,
         VAR_0, VAR_1);
  FUNC_0(VAR_4->page, VAR_4->pagecnt_bias);
 }


 VAR_4->page = ((void*)0);
 VAR_4->skb = ((void*)0);
}
