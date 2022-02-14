
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int wptr; unsigned int rptr; } ;
union dma_rwptr {TYPE_1__ bits; int bits32; } ;
struct page {int dummy; } ;
struct gmac_queue_page {struct page* page; } ;
struct gemini_ethernet {unsigned int freeq_frag_order; unsigned int freeq_order; int freeq_lock; scalar_t__ base; int dev; struct gmac_queue_page* freeq_pages; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,unsigned int,int,int) ;
 struct page* FUNC_1 (struct gemini_ethernet*,unsigned int) ;
 int FUNC_2 (struct page*,int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_8(struct gemini_ethernet *VAR_2, bool VAR_3)
{
 unsigned int VAR_4 = VAR_1 - VAR_2->freeq_frag_order;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6, VAR_7;
 unsigned long VAR_8;
 union dma_rwptr VAR_9;
 unsigned int VAR_10;


 VAR_10 = (1 << (VAR_2->freeq_order - VAR_4)) - 1;

 FUNC_5(&VAR_2->freeq_lock, VAR_8);

 VAR_9.bits32 = FUNC_4(VAR_2->base + VAR_0);
 VAR_6 = (VAR_3 ? VAR_9.bits.wptr : VAR_9.bits.rptr) >> VAR_4;
 VAR_7 = (VAR_9.bits.rptr >> VAR_4) - 1;
 VAR_7 &= VAR_10;


 while (VAR_6 != VAR_7) {
  struct gmac_queue_page *VAR_11;
  struct page *VAR_12;

  VAR_11 = &VAR_2->freeq_pages[VAR_6];
  VAR_12 = VAR_11->page;

  FUNC_0(VAR_2->dev, "fill entry %d page ref count %d add %d refs\n",
   VAR_6, FUNC_3(VAR_12), 1 << VAR_4);

  if (FUNC_3(VAR_12) > 1) {
   unsigned int VAR_13 = (VAR_6 - VAR_7) & VAR_10;

   if (VAR_13 > 64 >> VAR_4)
    break;

   VAR_12 = FUNC_1(VAR_2, VAR_6);
   if (!VAR_12)
    break;
  }


  FUNC_2(VAR_12, 1 << VAR_4);
  VAR_5 += 1 << VAR_4;
  VAR_6++;
  VAR_6 &= VAR_10;
 }

 FUNC_7(VAR_6 << VAR_4, VAR_2->base + VAR_0 + 2);

 FUNC_6(&VAR_2->freeq_lock, VAR_8);

 return VAR_5;
}
