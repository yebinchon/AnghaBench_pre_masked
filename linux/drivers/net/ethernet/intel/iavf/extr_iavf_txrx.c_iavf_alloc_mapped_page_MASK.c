
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct iavf_rx_buffer {int pagecnt_bias; int page_offset; struct page* page; int dma; } ;
struct TYPE_2__ {int alloc_page_failed; int page_reuse_count; } ;
struct iavf_ring {TYPE_1__ rx_stats; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*,int ) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct page*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct iavf_ring*) ;
 int FUNC_5 (struct iavf_ring*) ;
 int FUNC_6 (struct iavf_ring*) ;
 scalar_t__ FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static bool FUNC_9(struct iavf_ring *VAR_2,
       struct iavf_rx_buffer *VAR_3)
{
 struct page *VAR_4 = VAR_3->page;
 dma_addr_t VAR_5;


 if (FUNC_7(VAR_4)) {
  VAR_2->rx_stats.page_reuse_count++;
  return 1;
 }


 VAR_4 = FUNC_1(FUNC_5(VAR_2));
 if (FUNC_8(!VAR_4)) {
  VAR_2->rx_stats.alloc_page_failed++;
  return 0;
 }


 VAR_5 = FUNC_2(VAR_2->dev, VAR_4, 0,
     FUNC_6(VAR_2),
     VAR_0,
     VAR_1);




 if (FUNC_3(VAR_2->dev, VAR_5)) {
  FUNC_0(VAR_4, FUNC_5(VAR_2));
  VAR_2->rx_stats.alloc_page_failed++;
  return 0;
 }

 VAR_3->dma = VAR_5;
 VAR_3->page = VAR_4;
 VAR_3->page_offset = FUNC_4(VAR_2);


 VAR_3->pagecnt_bias = 1;

 return 1;
}
