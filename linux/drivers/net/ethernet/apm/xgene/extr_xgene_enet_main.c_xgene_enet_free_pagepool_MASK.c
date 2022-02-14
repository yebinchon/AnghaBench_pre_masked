
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t u16 ;
struct xgene_enet_raw_desc {int m0; } ;
struct xgene_enet_desc_ring {size_t slots; size_t head; struct page** frag_page; int ndev; } ;
struct page {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 struct device* FUNC_3 (int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct xgene_enet_desc_ring *VAR_4,
         struct xgene_enet_raw_desc *VAR_5,
         struct xgene_enet_raw_desc *VAR_6)
{
 __le64 *VAR_7 = (void *)VAR_6;
 dma_addr_t VAR_8;
 struct device *VAR_9;
 struct page *VAR_10;
 u16 VAR_11, VAR_12;
 u32 VAR_13;
 int VAR_14;

 if (!VAR_4 || !VAR_5 || !VAR_6 ||
     (!FUNC_0(VAR_2, FUNC_2(VAR_5->m0))))
  return;

 VAR_9 = FUNC_3(VAR_4->ndev);
 VAR_11 = VAR_4->slots - 1;
 VAR_12 = VAR_4->head;

 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  VAR_13 = FUNC_5(FUNC_2(VAR_7[VAR_14 ^ 1]));
  if (!VAR_13)
   break;

  VAR_8 = FUNC_0(VAR_0, FUNC_2(VAR_7[VAR_14 ^ 1]));
  FUNC_1(VAR_9, VAR_8, VAR_3, VAR_1);

  VAR_10 = VAR_4->frag_page[VAR_12];
  FUNC_4(VAR_10);

  VAR_4->frag_page[VAR_12] = ((void*)0);
  VAR_12 = (VAR_12 + 1) & VAR_11;
 }
 VAR_4->head = VAR_12;
}
