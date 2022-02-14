
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct stmmac_rx_queue {int page_pool; struct stmmac_rx_buffer* buf_pool; } ;
struct stmmac_rx_buffer {void* addr; int * page; int * sec_page; void* sec_addr; } ;
struct stmmac_priv {scalar_t__ dma_buf_sz; scalar_t__ sph; struct stmmac_rx_queue* rx_queue; } ;
struct dma_desc {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (struct stmmac_priv*,struct dma_desc*) ;
 int FUNC_3 (struct stmmac_priv*,struct dma_desc*,void*) ;
 int FUNC_4 (struct stmmac_priv*,struct dma_desc*,void*) ;

__attribute__((used)) static int FUNC_5(struct stmmac_priv *VAR_2, struct dma_desc *VAR_3,
      int VAR_4, gfp_t VAR_5, u32 VAR_6)
{
 struct stmmac_rx_queue *VAR_7 = &VAR_2->rx_queue[VAR_6];
 struct stmmac_rx_buffer *VAR_8 = &VAR_7->buf_pool[VAR_4];

 VAR_8->page = FUNC_0(VAR_7->page_pool);
 if (!VAR_8->page)
  return -VAR_1;

 if (VAR_2->sph) {
  VAR_8->sec_page = FUNC_0(VAR_7->page_pool);
  if (!VAR_8->sec_page)
   return -VAR_1;

  VAR_8->sec_addr = FUNC_1(VAR_8->sec_page);
  FUNC_4(VAR_2, VAR_3, VAR_8->sec_addr);
 } else {
  VAR_8->sec_page = ((void*)0);
 }

 VAR_8->addr = FUNC_1(VAR_8->page);
 FUNC_3(VAR_2, VAR_3, VAR_8->addr);
 if (VAR_2->dma_buf_sz == VAR_0)
  FUNC_2(VAR_2, VAR_3);

 return 0;
}
