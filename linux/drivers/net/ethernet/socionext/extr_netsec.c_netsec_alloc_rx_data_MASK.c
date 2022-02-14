
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct page {int dummy; } ;
struct netsec_priv {int dev; struct netsec_desc_ring* desc_ring; } ;
struct netsec_desc_ring {int page_pool; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int) ;
 void* FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void *FUNC_5(struct netsec_priv *VAR_4,
      dma_addr_t *VAR_5, u16 *VAR_6)

{

 struct netsec_desc_ring *VAR_7 = &VAR_4->desc_ring[VAR_0];
 enum dma_data_direction VAR_8;
 struct page *VAR_9;

 VAR_9 = FUNC_2(VAR_7->page_pool);
 if (!VAR_9)
  return ((void*)0);





 *VAR_5 = FUNC_3(VAR_9) + VAR_1;



 *VAR_6 = VAR_3 - VAR_2;
 VAR_8 = FUNC_4(VAR_7->page_pool);
 FUNC_0(VAR_4->dev, *VAR_5, *VAR_6, VAR_8);

 return FUNC_1(VAR_9);
}
