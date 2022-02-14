
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct fm10k_rx_buffer {scalar_t__ page_offset; struct page* page; int dma; } ;
struct TYPE_2__ {int alloc_failed; } ;
struct fm10k_ring {TYPE_1__ rx_stats; int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 () ;
 int FUNC_2 (int ,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct fm10k_ring *VAR_2,
        struct fm10k_rx_buffer *VAR_3)
{
 struct page *VAR_4 = VAR_3->page;
 dma_addr_t VAR_5;


 if (FUNC_4(VAR_4))
  return 1;


 VAR_4 = FUNC_1();
 if (FUNC_5(!VAR_4)) {
  VAR_2->rx_stats.alloc_failed++;
  return 0;
 }


 VAR_5 = FUNC_2(VAR_2->dev, VAR_4, 0, VAR_1, VAR_0);




 if (FUNC_3(VAR_2->dev, VAR_5)) {
  FUNC_0(VAR_4);

  VAR_2->rx_stats.alloc_failed++;
  return 0;
 }

 VAR_3->dma = VAR_5;
 VAR_3->page = VAR_4;
 VAR_3->page_offset = 0;

 return 1;
}
