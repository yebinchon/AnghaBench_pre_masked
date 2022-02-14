
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stmmac_rx_queue {unsigned int dirty_rx; scalar_t__ rx_count_frames; scalar_t__ rx_tail_addr; scalar_t__ dma_rx_phy; int page_pool; struct dma_desc* dma_rx; scalar_t__ dma_erx; struct stmmac_rx_buffer* buf_pool; } ;
struct stmmac_rx_buffer {void* sec_addr; void* addr; void* page; void* sec_page; } ;
struct stmmac_priv {scalar_t__ rx_coal_frames; int ioaddr; scalar_t__ use_riwt; int device; scalar_t__ sph; scalar_t__ extend_desc; int dma_buf_sz; struct stmmac_rx_queue* rx_queue; } ;
struct dma_desc {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ,void*,int,int ) ;
 int FUNC_3 () ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (struct stmmac_priv*,struct stmmac_rx_queue*,struct dma_desc*) ;
 int FUNC_7 (struct stmmac_priv*,size_t) ;
 int FUNC_8 (struct stmmac_priv*,struct dma_desc*,void*) ;
 int FUNC_9 (struct stmmac_priv*,struct dma_desc*,void*) ;
 int FUNC_10 (struct stmmac_priv*,struct dma_desc*,int) ;
 int FUNC_11 (struct stmmac_priv*,int ,scalar_t__,size_t) ;

__attribute__((used)) static inline void FUNC_12(struct stmmac_priv *VAR_3, u32 VAR_4)
{
 struct stmmac_rx_queue *VAR_5 = &VAR_3->rx_queue[VAR_4];
 int VAR_6, VAR_7 = FUNC_7(VAR_3, VAR_4);
 unsigned int VAR_8 = VAR_5->dirty_rx;

 VAR_6 = FUNC_0(VAR_3->dma_buf_sz, VAR_2) * VAR_2;

 while (VAR_7-- > 0) {
  struct stmmac_rx_buffer *VAR_9 = &VAR_5->buf_pool[VAR_8];
  struct dma_desc *VAR_10;
  bool VAR_11;

  if (VAR_3->extend_desc)
   VAR_10 = (struct dma_desc *)(VAR_5->dma_erx + VAR_8);
  else
   VAR_10 = VAR_5->dma_rx + VAR_8;

  if (!VAR_9->page) {
   VAR_9->page = FUNC_4(VAR_5->page_pool);
   if (!VAR_9->page)
    break;
  }

  if (VAR_3->sph && !VAR_9->sec_page) {
   VAR_9->sec_page = FUNC_4(VAR_5->page_pool);
   if (!VAR_9->sec_page)
    break;

   VAR_9->sec_addr = FUNC_5(VAR_9->sec_page);

   FUNC_2(VAR_3->device, VAR_9->sec_addr,
         VAR_6, VAR_0);
  }

  VAR_9->addr = FUNC_5(VAR_9->page);




  FUNC_2(VAR_3->device, VAR_9->addr, VAR_6,
        VAR_0);

  FUNC_8(VAR_3, VAR_10, VAR_9->addr);
  FUNC_9(VAR_3, VAR_10, VAR_9->sec_addr);
  FUNC_6(VAR_3, VAR_5, VAR_10);

  VAR_5->rx_count_frames++;
  VAR_5->rx_count_frames += VAR_3->rx_coal_frames;
  if (VAR_5->rx_count_frames > VAR_3->rx_coal_frames)
   VAR_5->rx_count_frames = 0;
  VAR_11 = VAR_3->use_riwt && VAR_5->rx_count_frames;

  FUNC_3();
  FUNC_10(VAR_3, VAR_10, VAR_11);

  VAR_8 = FUNC_1(VAR_8, VAR_1);
 }
 VAR_5->dirty_rx = VAR_8;
 VAR_5->rx_tail_addr = VAR_5->dma_rx_phy +
       (VAR_5->dirty_rx * sizeof(struct dma_desc));
 FUNC_11(VAR_3, VAR_3->ioaddr, VAR_5->rx_tail_addr, VAR_4);
}
