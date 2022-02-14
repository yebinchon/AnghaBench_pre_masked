
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_desc_ring {int slots; int * frag_dma_addr; struct page** frag_page; int ndev; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static void FUNC_3(struct xgene_enet_desc_ring *VAR_2)
{
 struct device *VAR_3 = FUNC_1(VAR_2->ndev);
 dma_addr_t VAR_4;
 struct page *VAR_5;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2->slots; VAR_6++) {
  VAR_5 = VAR_2->frag_page[VAR_6];
  if (VAR_5) {
   VAR_4 = VAR_2->frag_dma_addr[VAR_6];
   FUNC_0(VAR_3, VAR_4, VAR_1,
           VAR_0);
   FUNC_2(VAR_5);
  }
 }
}
