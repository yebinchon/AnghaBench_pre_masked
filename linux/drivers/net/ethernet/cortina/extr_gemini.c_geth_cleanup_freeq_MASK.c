
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gmac_queue_page {int page; } ;
struct gemini_ethernet {int freeq_frag_order; int freeq_order; int freeq_dma_base; TYPE_2__* freeq_ring; int dev; struct gmac_queue_page* freeq_pages; scalar_t__ base; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int buf_adr; } ;
struct TYPE_4__ {TYPE_1__ word2; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int,TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,unsigned int,int ) ;
 int FUNC_2 (struct gmac_queue_page*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct gemini_ethernet *VAR_4)
{
 unsigned int VAR_5 = VAR_3 - VAR_4->freeq_frag_order;
 unsigned int VAR_6 = 1 << VAR_4->freeq_frag_order;
 unsigned int VAR_7 = 1 << VAR_4->freeq_order;
 unsigned int VAR_8 = VAR_7 >> VAR_5;
 unsigned int VAR_9;

 FUNC_7(FUNC_5(VAR_4->base + VAR_1),
        VAR_4->base + VAR_1 + 2);
 FUNC_6(0, VAR_4->base + VAR_2);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  struct gmac_queue_page *VAR_10;
  dma_addr_t VAR_11;

  VAR_11 = VAR_4->freeq_ring[VAR_9 << VAR_5].word2.buf_adr;
  FUNC_1(VAR_4->dev, VAR_11, VAR_6, VAR_0);

  VAR_10 = &VAR_4->freeq_pages[VAR_9];
  while (FUNC_3(VAR_10->page) > 0)
   FUNC_4(VAR_10->page);
 }

 FUNC_2(VAR_4->freeq_pages);

 FUNC_0(VAR_4->dev,
     sizeof(*VAR_4->freeq_ring) << VAR_4->freeq_order,
     VAR_4->freeq_ring, VAR_4->freeq_dma_base);
}
