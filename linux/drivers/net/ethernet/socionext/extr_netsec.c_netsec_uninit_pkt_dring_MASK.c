
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct page {int dummy; } ;
struct netsec_priv {int ndev; int dev; struct netsec_desc_ring* desc_ring; } ;
struct netsec_desc_ring {scalar_t__ tail; scalar_t__ head; struct netsec_desc* vaddr; struct netsec_desc* desc; int page_pool; int xdp_rxq; } ;
struct netsec_desc {int skb; int len; int dma_addr; int addr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct netsec_desc*,int ,size_t) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct page*,int) ;
 struct page* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct netsec_priv *VAR_5, int VAR_6)
{
 struct netsec_desc_ring *VAR_7 = &VAR_5->desc_ring[VAR_6];
 struct netsec_desc *VAR_8;
 u16 VAR_9;

 if (!VAR_7->vaddr || !VAR_7->desc)
  return;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_8 = &VAR_7->desc[VAR_9];
  if (!VAR_8->addr)
   continue;

  if (VAR_6 == VAR_3) {
   struct page *VAR_10 = FUNC_6(VAR_8->addr);

   FUNC_5(VAR_7->page_pool, VAR_10, 0);
  } else if (VAR_6 == VAR_4) {
   FUNC_1(VAR_5->dev, VAR_8->dma_addr, VAR_8->len,
      VAR_2);
   FUNC_0(VAR_8->skb);
  }
 }


 if (VAR_6 == VAR_3) {
  if (FUNC_7(&VAR_7->xdp_rxq))
   FUNC_8(&VAR_7->xdp_rxq);
  FUNC_4(VAR_7->page_pool);
 }

 FUNC_2(VAR_7->desc, 0, sizeof(struct netsec_desc) * VAR_0);
 FUNC_2(VAR_7->vaddr, 0, VAR_1 * VAR_0);

 VAR_7->head = 0;
 VAR_7->tail = 0;

 if (VAR_6 == VAR_4)
  FUNC_3(VAR_5->ndev);
}
