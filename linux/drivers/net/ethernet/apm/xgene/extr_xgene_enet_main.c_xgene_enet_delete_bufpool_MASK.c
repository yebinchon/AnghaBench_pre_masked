
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_raw_desc16 {int m1; } ;
struct xgene_enet_desc_ring {int slots; struct xgene_enet_raw_desc16* raw_desc16; scalar_t__* rx_skb; int ndev; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct device* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct xgene_enet_desc_ring *VAR_3)
{
 struct device *VAR_4 = FUNC_4(VAR_3->ndev);
 struct xgene_enet_raw_desc16 *VAR_5;
 dma_addr_t VAR_6;
 int VAR_7;


 for (VAR_7 = 0; VAR_7 < VAR_3->slots; VAR_7++) {
  if (VAR_3->rx_skb[VAR_7]) {
   FUNC_1(VAR_3->rx_skb[VAR_7]);

   VAR_5 = &VAR_3->raw_desc16[VAR_7];
   VAR_6 = FUNC_0(VAR_0, FUNC_3(VAR_5->m1));
   FUNC_2(VAR_4, VAR_6, VAR_2,
      VAR_1);
  }
 }
}
