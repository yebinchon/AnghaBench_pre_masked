
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {void* buf_adr; } ;
struct gmac_rxdesc {TYPE_1__ word2; } ;
struct gmac_queue_page {struct page* page; void* mapping; } ;
struct gemini_ethernet {int freeq_frag_order; int dev; struct gmac_rxdesc* freeq_ring; struct gmac_queue_page* freeq_pages; } ;
typedef void* dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,unsigned int,int,...) ;
 void* FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,void*,unsigned int,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static struct page *FUNC_7(struct gemini_ethernet *VAR_4,
           int VAR_5)
{
 struct gmac_rxdesc *VAR_6;
 struct gmac_queue_page *VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 dma_addr_t VAR_10;
 struct page *VAR_11;
 int VAR_12;


 VAR_11 = FUNC_0(VAR_1);
 if (!VAR_11)
  return ((void*)0);

 VAR_10 = FUNC_2(VAR_4->dev, FUNC_5(VAR_11),
     VAR_3, VAR_0);
 if (FUNC_3(VAR_4->dev, VAR_10)) {
  FUNC_6(VAR_11);
  return ((void*)0);
 }







 VAR_9 = 1 << VAR_4->freeq_frag_order;
 VAR_8 = VAR_2 - VAR_4->freeq_frag_order;
 VAR_6 = VAR_4->freeq_ring + (VAR_5 << VAR_8);
 FUNC_1(VAR_4->dev, "allocate page %d fragment length %d fragments per page %d, freeq entry %p\n",
   VAR_5, VAR_9, (1 << VAR_8), VAR_6);
 for (VAR_12 = (1 << VAR_8); VAR_12 > 0; VAR_12--) {
  VAR_6->word2.buf_adr = VAR_10;
  VAR_6++;
  VAR_10 += VAR_9;
 }


 VAR_7 = &VAR_4->freeq_pages[VAR_5];
 if (VAR_7->page) {
  VAR_10 = VAR_4->freeq_ring[VAR_5 << VAR_8].word2.buf_adr;
  FUNC_4(VAR_4->dev, VAR_10, VAR_9, VAR_0);



  FUNC_6(VAR_7->page);
 }


 FUNC_1(VAR_4->dev, "page %d, DMA addr: %08x, page %p\n",
  VAR_5, (unsigned int)VAR_10, VAR_11);
 VAR_7->mapping = VAR_10;
 VAR_7->page = VAR_11;

 return VAR_11;
}
