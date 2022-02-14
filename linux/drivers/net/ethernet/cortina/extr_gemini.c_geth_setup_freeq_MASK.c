
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int swfq_empty; } ;
union queue_threshold {int bits32; TYPE_1__ bits; } ;
struct TYPE_7__ {int sw_skb_size; } ;
union dma_skb_size {int bits32; TYPE_2__ bits; } ;
struct gmac_queue_page {int page; } ;
struct gemini_ethernet {int freeq_frag_order; int freeq_order; int freeq_dma_base; unsigned int num_freeq_pages; TYPE_4__* freeq_ring; int dev; struct gmac_queue_page* freeq_pages; scalar_t__ base; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int buf_adr; } ;
struct TYPE_9__ {TYPE_3__ word2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_4__* FUNC_2 (int ,int,int*,int ) ;
 int FUNC_3 (int ,int,TYPE_4__*,int) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 unsigned int FUNC_5 (struct gemini_ethernet*,int) ;
 int FUNC_6 (struct gemini_ethernet*,unsigned int) ;
 struct gmac_queue_page* FUNC_7 (unsigned int,int,int ) ;
 int FUNC_8 (struct gmac_queue_page*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct gemini_ethernet *VAR_8)
{
 unsigned int VAR_9 = VAR_7 - VAR_8->freeq_frag_order;
 unsigned int VAR_10 = 1 << VAR_8->freeq_frag_order;
 unsigned int VAR_11 = 1 << VAR_8->freeq_order;
 unsigned int VAR_12 = VAR_11 >> VAR_9;
 union queue_threshold VAR_13;
 union dma_skb_size VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;

 VAR_8->freeq_ring = FUNC_2(VAR_8->dev,
  sizeof(*VAR_8->freeq_ring) << VAR_8->freeq_order,
  &VAR_8->freeq_dma_base, VAR_3);
 if (!VAR_8->freeq_ring)
  return -VAR_2;
 if (VAR_8->freeq_dma_base & ~VAR_1) {
  FUNC_1(VAR_8->dev, "queue ring base is not aligned\n");
  goto err_freeq;
 }


 VAR_8->freeq_pages = FUNC_7(VAR_12, sizeof(*VAR_8->freeq_pages),
        VAR_3);
 if (!VAR_8->freeq_pages)
  goto err_freeq;
 VAR_8->num_freeq_pages = VAR_12;

 FUNC_0(VAR_8->dev, "allocate %d pages for queue\n", VAR_12);
 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++)
  if (!FUNC_6(VAR_8, VAR_16))
   goto err_freeq_alloc;

 VAR_15 = FUNC_5(VAR_8, 0);
 if (!VAR_15)
  goto err_freeq_alloc;

 VAR_13.bits32 = FUNC_10(VAR_8->base + VAR_5);
 VAR_13.bits.swfq_empty = 32;
 FUNC_11(VAR_13.bits32, VAR_8->base + VAR_5);

 VAR_14.bits.sw_skb_size = 1 << VAR_8->freeq_frag_order;
 FUNC_11(VAR_14.bits32, VAR_8->base + VAR_4);
 FUNC_11(VAR_8->freeq_dma_base | VAR_8->freeq_order,
        VAR_8->base + VAR_6);

 return 0;

err_freeq_alloc:
 while (VAR_16 > 0) {
  struct gmac_queue_page *VAR_17;
  dma_addr_t VAR_18;

  --VAR_16;
  VAR_18 = VAR_8->freeq_ring[VAR_16 << VAR_9].word2.buf_adr;
  FUNC_4(VAR_8->dev, VAR_18, VAR_10, VAR_0);
  VAR_17 = &VAR_8->freeq_pages[VAR_16];
  FUNC_9(VAR_17->page);
 }

 FUNC_8(VAR_8->freeq_pages);
err_freeq:
 FUNC_3(VAR_8->dev,
     sizeof(*VAR_8->freeq_ring) << VAR_8->freeq_order,
     VAR_8->freeq_ring, VAR_8->freeq_dma_base);
 VAR_8->freeq_ring = ((void*)0);
 return -VAR_2;
}
