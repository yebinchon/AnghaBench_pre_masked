
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct ice_rx_buf {scalar_t__ pagecnt_bias; scalar_t__ page_offset; struct page* page; int dma; } ;
struct TYPE_2__ {int alloc_page_failed; int page_reuse_count; } ;
struct ice_ring {TYPE_1__ rx_stats; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (int ,struct page*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bool
FUNC_7(struct ice_ring *VAR_6, struct ice_rx_buf *VAR_7)
{
 struct page *VAR_8 = VAR_7->page;
 dma_addr_t VAR_9;


 if (FUNC_4(VAR_8)) {
  VAR_6->rx_stats.page_reuse_count++;
  return 1;
 }


 VAR_8 = FUNC_1(VAR_1 | VAR_5);
 if (FUNC_6(!VAR_8)) {
  VAR_6->rx_stats.alloc_page_failed++;
  return 0;
 }


 VAR_9 = FUNC_2(VAR_6->dev, VAR_8, 0, VAR_3,
     VAR_0, VAR_2);




 if (FUNC_3(VAR_6->dev, VAR_9)) {
  FUNC_0(VAR_8, 0);
  VAR_6->rx_stats.alloc_page_failed++;
  return 0;
 }

 VAR_7->dma = VAR_9;
 VAR_7->page = VAR_8;
 VAR_7->page_offset = 0;
 FUNC_5(VAR_8, VAR_4 - 1);
 VAR_7->pagecnt_bias = VAR_4;

 return 1;
}
