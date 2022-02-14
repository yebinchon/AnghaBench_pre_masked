
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct i40e_rx_buffer {scalar_t__ pagecnt_bias; int page_offset; struct page* page; int dma; } ;
struct TYPE_2__ {int alloc_page_failed; int page_reuse_count; } ;
struct i40e_ring {TYPE_1__ rx_stats; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct page*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i40e_ring*) ;
 int FUNC_5 (struct i40e_ring*) ;
 int FUNC_6 (struct i40e_ring*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static bool FUNC_10(struct i40e_ring *VAR_3,
       struct i40e_rx_buffer *VAR_4)
{
 struct page *VAR_5 = VAR_4->page;
 dma_addr_t VAR_6;


 if (FUNC_7(VAR_5)) {
  VAR_3->rx_stats.page_reuse_count++;
  return 1;
 }


 VAR_5 = FUNC_1(FUNC_5(VAR_3));
 if (FUNC_9(!VAR_5)) {
  VAR_3->rx_stats.alloc_page_failed++;
  return 0;
 }


 VAR_6 = FUNC_2(VAR_3->dev, VAR_5, 0,
     FUNC_6(VAR_3),
     VAR_0,
     VAR_1);




 if (FUNC_3(VAR_3->dev, VAR_6)) {
  FUNC_0(VAR_5, FUNC_5(VAR_3));
  VAR_3->rx_stats.alloc_page_failed++;
  return 0;
 }

 VAR_4->dma = VAR_6;
 VAR_4->page = VAR_5;
 VAR_4->page_offset = FUNC_4(VAR_3);
 FUNC_8(VAR_5, VAR_2 - 1);
 VAR_4->pagecnt_bias = VAR_2;

 return 1;
}
